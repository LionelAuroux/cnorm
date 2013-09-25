from pyrser import meta, directives
from pyrser.passes import to_yml
from pyrser.hooks import copy, echo
from pyrser.parsing.node import Node
from cnorm import nodes
from pyrser.grammar import Grammar
from cnorm.parsing.statement import Statement
from cnorm.parsing.expression import Idset
from weakref import ref

import sys

sys.setrecursionlimit(10000)

class Declaration(Grammar, Statement):
    """
        interaction with other CNORM PART:

    """
    #: entry point for C programming language
    entry = "translation_unit"

    #: complete C declaration grammar
    grammar = """

        translation_unit ::=
            @ignore("C/C++")
            [
                "":current_block
                #new_root(_, current_block)
                [
                    declaration
                ]*
            ]
            Base.eof
        ;

        declaration ::=
            c_decl
            |
            preproc_decl
            |
            asm_decl
        ;

        preproc_decl ::=
            ['#' preproc_directive ]:decl
            #raw_decl(decl)
            #end_decl(current_block, decl)
        ;

        asm_decl ::=
            [
            Base.id:i
            #check_asm(i)
            [
                Base.id:i
                #check_quali(i)
            ]?
            attr_asm_decl_follow
            ';'?
            ]:decl
            #raw_decl(decl)
            #end_decl(current_block, decl)
        ;

        attr_asm_decl ::=
            [
            Base.id:i
            #check_asmattr(i)
            attr_asm_decl_follow
            ]:_
        ;

        attr_asm_decl_follow ::=
            '(' dummy_with_paren* ')' 
            | '{' dummy_with_brace* '}'
            | '__extension__'
        ;

        c_decl ::=
            "":local_specifier
            #create_ctype(local_specifier)
            declaration_specifier*:dsp
            init_declarator:decl
            #not_empty(current_block, dsp)
            #end_decl(current_block, decl)
            [
                ',' 
                #copy_ctype(local_specifier, decl)
                init_declarator:decl
                #end_decl(current_block, decl)
            ]*
            [
                ';'
                |
                Statement.compound_statement:b
                #add_body(decl, b)
            ]
        ;

        declaration_specifier ::=
            Base.id:i
            #new_decl_spec(local_specifier, i, current_block)
            [
                #is_composed(local_specifier)
                composed_type_specifier
                | #is_enum(local_specifier)
                enum_specifier
                //| typeof_expr
            ]?
            |
            attr_asm_decl:attr
            #add_attr_specifier(local_specifier, attr)
        ;

        type_qualifier ::=
            Base.id:i
            #add_qual(local_specifier, i)
            |
            attr_asm_decl:attr
            #add_attr_specifier(local_specifier, attr)
        ;

        name_of_composed_type ::= Base.id ;
        composed_type_specifier ::=
            [
                attr_asm_decl:attr
                #add_attr_composed(local_specifier, attr)
            ]?
            name_of_composed_type?:n
            composed_fields?:body
            #add_composed(local_specifier, n, body)
        ;

        composed_fields ::=
            '{'
                "":current_block
                #new_composed(_, current_block)
                declaration*
            '}'
        ;

        enum_name ::= Base.id ;
        enum_specifier ::=
            enum_name?:n
            enumerator_list?:body
            #add_enum(local_specifier, n, body)
        ;

        enumerator_list ::=
            '{'
                enumerator:e
                #add_enumerator(_, e)
                [
                    ',' enumerator:e
                    #add_enumerator(_, e)
                ]*
                ','? // trailing comma
            '}'
        ;

        enumerator ::=
            identifier:i ['=' constant_expression:c]?:c
            #new_enumerator(_, i, c)
        ;

        typeof_expr ::=
            '('
                [
                    type_name
                    | expression
                ]
            ')'
        ;

        init_declarator ::=
            declarator:_
            [
                ':'
                constant_expression:cexpr
                #colon_expr(_, cexpr)
            ]?
            [
                attr_asm_decl:attr
                #add_attr_decl(_, attr)
            ]*
            [
                '='
                initializer:aexpr
                #assign_expr(_, aexpr)
            ]?
            !![','|';'|'{']
        ;

        declarator ::=
            [
                "*"
                #first_pointer(local_specifier) 
                declarator_recurs:_
                | 
                absolute_declarator:_
            ]
            #commit_declarator(_, local_specifier)
        ;

        declarator_recurs ::=
            pointer absolute_declarator:_
        ;

        pointer ::=
            [
                "*" #add_pointer(local_specifier)
                | type_qualifier
            ]*
        ;

        f_or_v_id ::= identifier;
        absolute_declarator ::=
                [
                    '('
                        #add_paren(local_specifier)
                        type_qualifier?
                        declarator_recurs:_
                        #close_paren(local_specifier)
                    ')'
                    | 
                    f_or_v_id?:name
                    #name_absdecl(local_specifier, name)
                ]
                direct_absolute_declarator?
        ;

        direct_absolute_declarator ::=
            [
                '['
                    // TODO: handle c99 qual for trees
                    "static"?
                    ["const"|"volatile"]?
                    "static"?
                    [
                        assignement_expression:e
                        | '*':star #new_raw(e, star)
                    ]?:e
                    #add_ary(local_specifier, e)
                ']'
            ]+
            |
                '('
                #open_params(local_specifier)
                [
                    //kr_parameter_type_list
                    //| 
                    parameter_type_list
                ]?
                ')'
            /*
            [ // K&R STYLE
                !![';'|','|'{'|'('|')']
                | declaration*
            ]
            */
        ;

        kr_parameter_type_list ::=
            identifier [',' identifier]* !!')'
        ;

        parameter_type_list ::=
            [type_name ';']*
            [
                parameter_list
            ]?
            ','?
            ["..." #add_ellipsis(local_specifier)]?
        ;

        parameter_list ::=
            parameter_declaration:p
            #add_param(local_specifier, p)
            [','
                parameter_declaration:p
                #add_param(local_specifier, p)
            ]*
        ;

        parameter_declaration ::=
            type_name:_
        ;

        initializer ::=
            '{'
                [initializer_list:_]?
                ','? // trailing comma
            '}'
            | assignement_expression:expr
            #copy(_, expr)
        ;

        initializer_list ::=
            designation?:dsign
            initializer:init
            #add_init(_, init, dsign)
            [
                ','
                designation?:dsign
                initializer:init
                #add_init(_, init, dsign)
            ]*
        ;

        designation ::=
            designation_list+ '='
            | identifier ':'
        ;

        designation_list ::=
            '['
                range_expression
            ']'
            | dot identifier
        ;

        range_expression ::=
            constant_expression:_ ["..." constant_expression]?
        ;

        type_name ::=
            "":local_specifier
            #create_ctype(local_specifier)
            declaration_specifier+ declarator:_
        ;

        ///////// OVERLOAD OF STATEMENT
        // add declaration in block
        line_of_code ::=
                    declaration
                |
                    single_statement:line
                    #end_loc(current_block, line)
        ;

        ///////// OVERLOAD OF EXPRESSION
        // add cast / sizeof
        unary_expression ::=
            // CAST
            '('
            type_name:t
            ')'
            unary_expression:_
            #to_cast(_, t)
            | // SIZEOF
            Base.id:i #sizeof(i)
            [
                '(' type_name:n ')'
                | Expression.unary_expression:n
            ]:n
            #new_sizeof(_, i, n)
            | Expression.unary_expression:_
        ;

    """

    def after_parse(self, res):
        return res.node

@meta.hook(Declaration)
def check_asm(self, ident):
    if ident.value in Idset and Idset[ident.value] == "asm":
        return True
    return False

@meta.hook(Declaration)
def check_quali(self, ident):
    if ident.value in Idset and Idset[ident.value] == "qualifier":
        return True
    return False

@meta.hook(Declaration)
def check_asmattr(self, ident):
    if ident.value in Idset and (Idset[ident.value] == "asm" or \
        Idset[ident.value] == "attribute"):
        return True
    return False

@meta.hook(Declaration)
def new_root(self, ast, current_block):
    ast.node = nodes.RootBlockStmt([])
    current_block.node = ast.node
    return True

@meta.rule(Declaration, "preproc_directive")
def preproc_directive(self) -> bool:
    """Consume a preproc directive."""
    self._stream.save_context()
    if self.read_until("\n", '\\'):
        return self._stream.validate_context()
    return self._stream.restore_context()

@meta.hook(Declaration)
def raw_decl(self, decl):
    decl.node = nodes.Raw(decl.value)
    return True

@meta.hook(Declaration)
def create_ctype(self, lspec):
    lspec.ctype = None
    return True

@meta.hook(Declaration)
def copy_ctype(self, lspec, previous):
    lspec.ctype = previous.node.ctype.copy()
    return True


@meta.hook(Declaration)
def new_decl_spec(self, lspec, i, current_block):
    idsetval = ""
    if i.value in Idset:
        idsetval = Idset[i.value]
    # don't fuck with reserved keywords
    if idsetval == "reserved":
        return False
    # not for asm or attribute
    if idsetval != "" and idsetval[0] != 'a':
        lspec.ctype = nodes.makeCType(i.value, lspec.ctype)
        return True
    if hasattr(current_block.node, 'types') \
        and i.value in current_block.node.types:
        if lspec.ctype == None:
            lspec.ctype = nodes.PrimaryType(i.value)
        else:
            lspec.ctype._identifier = i.value
        lspec.ctype._identifier = i.value
        #print("type found <%s> %d" % (i.value, lspec.ctype._storage))
        return True
    return False

@meta.hook(Declaration)
def add_body(self, ast, body):
    ast.node.body = body.node
    return True

@meta.hook(Declaration)
def end_decl(self, current_block, ast):
    current_block.node.body.append(ast.node)
    if hasattr(ast.node, 'ctype') and ast.node._name != "" and \
        ast.node.ctype._storage == nodes.Storages.TYPEDEF:
        #print("new type %s" % ast.node._name)
        current_block.node.types[ast.node._name] = ref(ast.node)
    return True

@meta.hook(Declaration)
def not_empty(self, current_block, dsp):
    # empty declspec only in global scope
    if type(current_block.node) is nodes.BlockStmt and dsp.value == "":
        return False
    return True

@meta.hook(Declaration)
def colon_expr(self, ast, expr):
    ast.node.colon_expr(expr.node)
    return True

@meta.hook(Declaration)
def assign_expr(self, ast, expr):
    ast.node.assign_expr(expr.node)
    return True

@meta.hook(Declaration)
def is_composed(self, lspec):
    if lspec.ctype._specifier == nodes.Specifiers.STRUCT or\
        lspec.ctype._specifier == nodes.Specifiers.UNION:
            return True
    return False

@meta.hook(Declaration)
def is_enum(self, lspec):
    if lspec.ctype._specifier == nodes.Specifiers.ENUM:
        return True
    return False

@meta.hook(Declaration)
def add_qual(self, lspec, qualspec):
    dspec = qualspec.value
    if dspec in Idset and Idset[dspec] == "qualifier":
        cleantxt = dspec.strip("_")
        lspec.ctype.push(nodes.QualType(nodes.Qualifiers.map[cleantxt.upper()]))
        return True
    return False

@meta.hook(Declaration)
def add_attr_specifier(self, lspec, attrspec):
    if lspec.ctype == None:
        lspec.ctype = nodes.makeCType('int', lspec.ctype)
    lspec.ctype.push(nodes.AttrType(attrspec.value))
    return True

@meta.hook(Declaration)
def add_attr_composed(self, lspec, attrspec):
    if not hasattr(lspec.ctype, '_attr_composed'):
        lspec.ctype._attr_composed = []
    lspec.ctype._attr_composed.append(attrspec.value)
    return True

@meta.hook(Declaration)
def add_attr_decl(self, lspec, attrspec):
    if not hasattr(lspec.node, '_attr_decl'):
        lspec.node._attr_decl = []
    lspec.node._attr_decl.append(attrspec.value)
    return True

@meta.hook(Declaration)
def add_composed(self, lspec, n, block):
    ctype = nodes.ComposedType(n.value)
    if lspec.ctype != None:
        ctype._storage = lspec.ctype._storage
        #print("STORAGE %d" % ctype._storage)
        ctype._specifier = lspec.ctype._specifier
        if hasattr(lspec.ctype, '_attr_composed'):
            ctype._attr_composed = lspec.ctype._attr_composed
    lspec.ctype = ctype
    if hasattr(block, 'node'):
        lspec.ctype.fields = block.node.body
    return True

@meta.hook(Declaration)
def add_enum(self, lspec, n, block):
    ctype = nodes.ComposedType(n.value)
    if lspec.ctype != None:
        ctype._storage = lspec.ctype._storage
        ctype._specifier = lspec.ctype._specifier
    lspec.ctype = ctype
    if hasattr(block, 'node'):
        lspec.ctype.enums = block.node
    return True

@meta.hook(Declaration)
def add_enumerator(self, ast, enum):
    if not hasattr(ast, 'node'):
        ast.node = []
    ast.node.append(enum.node)
    return True

@meta.hook(Declaration)
def new_enumerator(self, ast, ident, constexpr):
    expr = None
    if hasattr(constexpr, 'node'):
        expr = constexpr.node
    ast.node = nodes.Enumerator(ident.value, expr)
    return True

@meta.hook(Declaration)
def new_composed(self, ast, current_block):
    ast.node = nodes.BlockStmt([])
    current_block.node = ast.node
    parent = self.rulenodes.parents
    if 'current_block' in parent:
        current_block.node.types = parent['current_block'].node.types.new_child()
    return True

@meta.hook(Declaration)
def first_pointer(self, lspec):
    if not hasattr(lspec, 'ctype') or lspec.ctype == None:
        lspec.ctype = nodes.makeCType('int', lspec.ctype)
    lspec.ctype.push(nodes.PointerType())
    return True

@meta.hook(Declaration)
def commit_declarator(self, ast, lspec):
    if hasattr(lspec.ctype, '_params'):
        lspec.ctype.__class__ = nodes.FuncType
    name = ""
    if hasattr(lspec, '_name'):
        name = lspec._name
    ast.node = nodes.Decl(name, lspec.ctype)
    return True

@meta.hook(Declaration)
def add_pointer(self, lspec):
    if not hasattr(lspec, 'ctype'):
        lspec.ctype = nodes.makeCType('int', lspec.ctype)
    if not hasattr(lspec.ctype, 'push'):
        return False
    lspec.ctype.push(nodes.PointerType())
    return True

@meta.hook(Declaration)
def add_paren(self, lspec):
    if not hasattr(lspec, 'ctype') or lspec.ctype == None:
        lspec.ctype = nodes.makeCType('int')
    paren = nodes.ParenType()
    if not hasattr(lspec, 'cur_paren'):
        lspec.cur_paren = []
        lspec.cur_paren.append(ref(lspec.ctype))
    last = lspec.cur_paren.pop()
    lspec.cur_paren.append(ref(paren))
    lspec.cur_paren.append(last)
    lspec.ctype.push(paren)
    return True

@meta.hook(Declaration)
def add_ary(self, lspec, expr):
    if not hasattr(lspec, 'ctype'):
        lspec.ctype = nodes.makeCType('int')
    aryexpr = None
    if hasattr(expr, 'node'):
        aryexpr = expr.node
    if not hasattr(lspec, 'cur_paren'):
        lspec.cur_paren = []
        lspec.cur_paren.append(ref(lspec.ctype))
    lspec.cur_paren[-1]().push(nodes.ArrayType(aryexpr))
    return True

@meta.hook(Declaration)
def name_absdecl(self, ast, ident):
    if ident.value != "":
        ast._name = ident.value
        ast._could_be_fpointer = True
    return True

@meta.hook(Declaration)
def close_paren(self, lspec):
    lspec.cur_paren.pop()
    return True

@meta.hook(Declaration)
def open_params(self, lspec):
    if lspec.ctype == None:
        lspec.ctype = nodes.makeCType('int')
    if not hasattr(lspec, 'cur_paren'):
        lspec.cur_paren = []
        lspec.cur_paren.append(ref(lspec.ctype))
    if not hasattr(lspec.cur_paren[-1](), '_params'):
        lspec.cur_paren[-1]()._params = []
    return True

@meta.hook(Declaration)
def add_param(self, lspec, param):
    lspec.cur_paren[-1]()._params.append(param.node)
    return True

@meta.hook(Declaration)
def add_ellipsis(self, lspec):
    lspec.cur_paren[-1]()._ellipsis = True
    return True

@meta.hook(Declaration)
def add_init(self, ast, expr, designation):
    if not hasattr(ast, 'node'):
        ast.node = nodes.BlockExpr([])
    ast.node.body.append(expr.node)
    if designation.value != "":
        ast.node.body[-1].designation = designation.value
    return True

@meta.hook(Declaration)
def to_cast(self, ast, typename):
    ast.node = nodes.Cast(nodes.Raw('()'), [typename.node.ctype, ast.node])
    return True

@meta.hook(Declaration)
def sizeof(self, ident):
    if ident.value in Idset and Idset[ident.value] == "sizeof":
        return True
    return False

@meta.hook(Declaration)
def new_sizeof(self, ast, i, n):
    thing = n.node
    if isinstance(thing, nodes.Decl):
        thing = n.node.ctype
    ast.node = nodes.Sizeof(nodes.Raw(i.value), [thing])
    return True
