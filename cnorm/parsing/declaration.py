from pyrser import meta, directives
from pyrser.passes import to_yml
from pyrser.hooks import echo
from pyrser.parsing.node import Node
from cnorm import nodes
from pyrser.grammar import Grammar
from cnorm.parsing.statement import Statement
from cnorm.parsing.expression import Idset
from weakref import ref


# TODO: see if a better solution
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

        translation_unit = [
            @ignore("C/C++")
            [
                __scope__:current_block
                #new_root(_, current_block)
                [
                    declaration
                ]*
            ]
            Base.eof
        ]

        declaration = [
            ';' // garbage single comma
            |
            c_decl
            |
            preproc_decl
            |
            asm_decl
        ]

        preproc_decl = [
            ['#' preproc_directive ]:decl
            #raw_decl(decl)
            #end_decl(current_block, decl)
        ]

        asm_decl = [
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
        ]

        attr_asm_decl = [
            [
                Base.id:i
                #check_asmattr(i)
                attr_asm_decl_follow
            ]
        ]

        attr_asm_decl_follow = [
            '(' dummy_with_paren* ')'
            | '{' dummy_with_brace* '}'
            | '__extension__'
        ]

        c_decl = [
            __scope__:local_specifier
            #create_ctype(local_specifier)
            declaration_specifier*:dsp
            init_declarator:decl
            #not_empty(current_block, dsp, decl)
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
        ]

        declaration_specifier = [
            Base.id:i
            #new_decl_spec(local_specifier, i, current_block)
            [
                #is_composed(local_specifier)
                composed_type_specifier
                |
                #is_enum(local_specifier)
                enum_specifier
                |
                #is_typeof(i)
                typeof_expr
            ]?
            |
            attr_asm_decl:attr
            #add_attr_specifier(local_specifier, attr)
        ]

        type_qualifier = [
            Base.id:i
            #add_qual(local_specifier, i)
            |
            attr_asm_decl:attr
            #add_attr_specifier(local_specifier, attr)
        ]

        name_of_composed_type = [ Base.id ]
        composed_type_specifier = [
            [
                attr_asm_decl:attr
                #add_attr_composed(local_specifier, attr)
            ]?
            name_of_composed_type?:n
            composed_fields?:body
            #add_composed(local_specifier, n, body)
        ]

        composed_fields = [
            '{'
                __scope__:current_block
                #new_composed(_, current_block)
                declaration*
            '}'
        ]

        enum_name = [ Base.id ]
        enum_specifier = [
            enum_name?:n
            enumerator_list?:body
            #add_enum(local_specifier, n, body)
        ]

        enumerator_list = [
            '{'
                enumerator:e
                #add_enumerator(_, e)
                [
                    ',' enumerator:e
                    #add_enumerator(_, e)
                ]*
                ','? // trailing comma
            '}'
        ]

        enumerator = [
            identifier:i
            __scope__:c
            ['=' constant_expression:>c]?
            #new_enumerator(_, i, c)
        ]

        typeof_expr = [
            // TODO: split inside typeof
            ['('
                [
                    type_name !!')'
                    | expression
                ]
            ')']:tof
            #add_typeof(local_specifier, tof)
        ]

        init_declarator = [
            declarator:>_
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
        ]

        declarator = [
            [
                "*"
                #first_pointer(local_specifier)
                declarator_recurs:>_
                |
                absolute_declarator:>_
            ]
            #commit_declarator(_, local_specifier)
        ]

        declarator_recurs = [
            pointer absolute_declarator:>_
        ]

        pointer = [
            [
                "*" #add_pointer(local_specifier)
                | type_qualifier
            ]*
        ]

        f_or_v_id = [ identifier ]
        absolute_declarator = [
                [
                    '('
                        #add_paren(local_specifier)
                        type_qualifier?
                        declarator_recurs:>_
                        #close_paren(local_specifier)
                    ')'
                    |
                    f_or_v_id?:name
                    #name_absdecl(local_specifier, name)
                ]
                direct_absolute_declarator?
        ]

        direct_absolute_declarator = [
            [
                '['
                    // TODO: handle c99 qual for trees
                    "static"?
                    ["const"|"volatile"]?
                    "static"?
                    __scope__:expr
                    [
                        assignement_expression:>expr
                        | '*':star #new_raw(expr, star)
                    ]?
                    #add_ary(local_specifier, expr)
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
        ]

        kr_parameter_type_list = [
            identifier [',' identifier]* !!')'
        ]

        parameter_type_list = [
            [type_name ';']*
            [
                parameter_list
            ]?
            ','?
            ["..." #add_ellipsis(local_specifier)]?
        ]

        parameter_list = [
            parameter_declaration:p
            #add_param(local_specifier, p)
            [','
                parameter_declaration:p
                #add_param(local_specifier, p)
            ]*
        ]

        parameter_declaration = [ type_name:>_ ]

        initializer = [ [ initializer_block | assignement_expression ]:>_ ]

        initializer_block = [
            '{'
                __scope__:init_list
                #new_blockinit(init_list)
                [initializer_list]?
                ','? // trailing comma
                #bind('_', init_list)
            '}'
        ]

        initializer_list = [
            designation?:dsign
            initializer:init
            #add_init(init_list, init, dsign)
            [
                ','
                designation?:dsign
                initializer:init
                #add_init(init_list, init, dsign)
            ]*
        ]

        designation = [
            designation_list+ '='?
            | identifier ':'
        ]

        designation_list = [
            '['
                range_expression
            ']'
            | dot identifier
        ]

        type_name = [
            __scope__:local_specifier
            #create_ctype(local_specifier)
            declaration_specifier+ declarator:>_
        ]

        ///////// OVERLOAD OF STATEMENT
        // add declaration in block
        line_of_code = [
                    declaration
                |
                    single_statement:line
                    #end_loc(current_block, line)
        ]

        for_statement = [
            '('
                __scope__:init
                [
                    expression_statement:>init
                |
                    __scope__:current_block
                    #for_decl_begin(current_block)
                    declaration
                    #for_decl_end(init, current_block)
                ]
                expression_statement:cond
                expression?:inc
            ')'
            single_statement:body
            #new_for(_, init, cond, inc, body)
        ]

        ///////// OVERLOAD OF EXPRESSION
        // add cast / sizeof
        unary_expression = [
            // CAST
            '(' type_name:t ')'
            [
                // simple cast
                unary_expression
                |
                // compound literal
                initializer_block
            ]:>_
            #to_cast(_, t)
            | // SIZEOF
            Base.id:i #sizeof(i)
            __scope__:n
            [
                '(' type_name:>n ')'
                | Expression.unary_expression:>n
            ]
            #new_sizeof(_, i, n)
            | Expression.unary_expression:>_
        ]

        // ({}) and __builtin_offsetof
        primary_expression = [
            "({"
                __scope__:current_block
                #new_blockexpr(_, current_block)
                [
                    line_of_code
                ]*
            "})"
            | // TODO: create special node for that
                "__builtin_offsetof"
                '(' [type_name ',' postfix_expression]:bof ')'
                #new_builtoffset(_, bof)
            |
            Expression.primary_expression:>_
        ]

    """


@meta.hook(Declaration)
def check_asm(self, ident):
    ident_value = self.value(ident)
    if ident_value in Idset and Idset[ident_value] == "asm":
        return True
    return False


@meta.hook(Declaration)
def check_quali(self, ident):
    ident_value = self.value(ident)
    if ident_value in Idset and Idset[ident_value] == "qualifier":
        return True
    return False


@meta.hook(Declaration)
def check_asmattr(self, ident):
    ident_value = self.value(ident)
    if ((ident_value in Idset and (Idset[ident_value] == "asm"
         or Idset[ident_value] == "attribute"))):
        return True
    return False


@meta.hook(Declaration)
def new_root(self, ast, current_block):
    ast.set(nodes.RootBlockStmt([]))
    current_block.ref = ast
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
    decl.set(nodes.Raw(self.value(decl)))
    return True


@meta.hook(Declaration)
def create_ctype(self, lspec):
    lspec.ctype = None
    return True


@meta.hook(Declaration)
def copy_ctype(self, lspec, previous):
    lspec.ctype = previous.ctype.copy()
    return True


@meta.hook(Declaration)
def new_decl_spec(self, lspec, i, current_block):
    idsetval = ""
    i_value = self.value(i)
    if i_value in Idset:
        idsetval = Idset[i_value]
    # don't fuck with reserved keywords
    if idsetval == "reserved":
        return False
    # not for asm or attribute
    if idsetval != "" and idsetval[0] != 'a':
        lspec.ctype = nodes.makeCType(i_value, lspec.ctype)
        return True
    if ((hasattr(current_block.ref, 'types')
         and i_value in current_block.ref.types)):
        if lspec.ctype is None:
            lspec.ctype = nodes.PrimaryType(i_value)
        else:
            lspec.ctype._identifier = i_value
        lspec.ctype._identifier = i_value
        return True
    return False


@meta.hook(Declaration)
def add_body(self, ast, body):
    ast.body = body
    return True


@meta.hook(Declaration)
def end_decl(self, current_block, ast):
    current_block.ref.body.append(ast)
    if ((hasattr(ast, 'ctype') and ast._name != ""
         and ast.ctype._storage == nodes.Storages.TYPEDEF)):
        current_block.ref.types[ast._name] = ref(ast)
    return True


@meta.hook(Declaration)
def not_empty(self, current_block, dsp, decl):
    # empty declspec only in global scope
    if type(current_block.ref) is nodes.BlockStmt and self.value(dsp) == "":
        return False
    return True


@meta.hook(Declaration)
def colon_expr(self, ast, expr):
    ast.colon_expr(expr)
    return True


@meta.hook(Declaration)
def assign_expr(self, ast, expr):
    ast.assign_expr(expr)
    return True


@meta.hook(Declaration)
def is_composed(self, lspec):
    if ((lspec.ctype._specifier == nodes.Specifiers.STRUCT
         or lspec.ctype._specifier == nodes.Specifiers.UNION)):
            return True
    return False


@meta.hook(Declaration)
def is_enum(self, lspec):
    if lspec.ctype._specifier == nodes.Specifiers.ENUM:
        return True
    return False


@meta.hook(Declaration)
def is_typeof(self, i):
    i_value = self.value(i)
    if i_value in Idset and Idset[i_value] == "typeof":
        return True
    return False


@meta.hook(Declaration)
def add_typeof(self, lspec, tof):
    lspec.ctype = nodes.PrimaryType("typeof" + self.value(tof))
    return True


@meta.hook(Declaration)
def add_qual(self, lspec, qualspec):
    dspec = self.value(qualspec)
    if dspec in Idset and Idset[dspec] == "qualifier":
        cleantxt = dspec.strip("_")
        lspec.ctype.push(
            nodes.QualType(nodes.Qualifiers.map[cleantxt.upper()])
        )
        return True
    return False


@meta.hook(Declaration)
def add_attr_specifier(self, lspec, attrspec):
    if lspec.ctype is None:
        lspec.ctype = nodes.makeCType('int', lspec.ctype)
    lspec.ctype.push(nodes.AttrType(self.value(attrspec)))
    return True


@meta.hook(Declaration)
def add_attr_composed(self, lspec, attrspec):
    if not hasattr(lspec.ctype, '_attr_composed'):
        lspec.ctype._attr_composed = []
    lspec.ctype._attr_composed.append(self.value(attrspec))
    return True


@meta.hook(Declaration)
def add_attr_decl(self, lspec, attrspec):
    if not hasattr(lspec, '_attr_decl'):
        lspec._attr_decl = []
    lspec._attr_decl.append(self.value(attrspec))
    return True


@meta.hook(Declaration)
def add_composed(self, lspec, n, block):
    ctype = nodes.ComposedType(self.value(n))
    if lspec.ctype is not None:
        ctype._storage = lspec.ctype._storage
        ctype._specifier = lspec.ctype._specifier
        if hasattr(lspec.ctype, '_attr_composed'):
            ctype._attr_composed = lspec.ctype._attr_composed
    lspec.ctype = ctype
    if hasattr(block, 'body'):
        lspec.ctype.fields = block.body
    return True


@meta.hook(Declaration)
def add_enum(self, lspec, n, block):
    ctype = nodes.ComposedType(self.value(n))
    if lspec.ctype is not None:
        ctype._storage = lspec.ctype._storage
        ctype._specifier = lspec.ctype._specifier
    lspec.ctype = ctype
    if hasattr(block, 'list'):
        lspec.ctype.enums = block.list
    return True


@meta.hook(Declaration)
def add_enumerator(self, ast, enum):
    if not hasattr(ast, 'list'):
        ast.list = []
    ast.list.append(enum)
    return True


@meta.hook(Declaration)
def new_enumerator(self, ast, ident, constexpr):
    ast.set(nodes.Enumerator(self.value(ident), constexpr))
    return True


@meta.hook(Declaration)
def new_composed(self, ast, current_block):
    ast.set(nodes.BlockStmt([]))
    current_block.ref = ast
    parent = self.rule_nodes.parents
    if 'current_block' in parent:
        current_block.ref.types = parent['current_block'].ref.types.new_child()
    return True


@meta.hook(Declaration)
def first_pointer(self, lspec):
    if not hasattr(lspec, 'ctype') or lspec.ctype is None:
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
    ast.set(nodes.Decl(name, lspec.ctype))
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
    if not hasattr(lspec, 'ctype') or lspec.ctype is None:
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
    if not hasattr(lspec, 'ctype') or lspec.ctype is None:
        lspec.ctype = nodes.makeCType('int')
    if not hasattr(lspec, 'cur_paren'):
        lspec.cur_paren = []
        lspec.cur_paren.append(ref(lspec.ctype))
    lspec.cur_paren[-1]().push(nodes.ArrayType(expr))
    return True


@meta.hook(Declaration)
def name_absdecl(self, ast, ident):
    ident_value = self.value(ident)
    if ident_value != "":
        ast._name = ident_value
        ast._could_be_fpointer = True
    return True


@meta.hook(Declaration)
def close_paren(self, lspec):
    lspec.cur_paren.pop()
    return True


@meta.hook(Declaration)
def open_params(self, lspec):
    if lspec.ctype is None:
        lspec.ctype = nodes.makeCType('int')
    if not hasattr(lspec, 'cur_paren'):
        lspec.cur_paren = []
        lspec.cur_paren.append(ref(lspec.ctype))
    if not hasattr(lspec.cur_paren[-1](), '_params'):
        lspec.cur_paren[-1]()._params = []
    return True


@meta.hook(Declaration)
def add_param(self, lspec, param):
    lspec.cur_paren[-1]()._params.append(param)
    return True


@meta.hook(Declaration)
def add_ellipsis(self, lspec):
    lspec.cur_paren[-1]()._ellipsis = True
    return True


@meta.hook(Declaration)
def new_blockinit(self, init_list):
    init_list.set(nodes.BlockInit([]))
    return True


@meta.hook(Declaration)
def new_blockexpr(self, ast, current_block):
    ast.set(nodes.BlockExpr([]))
    current_block.ref = ast
    parent = self.rule_nodes.parents
    if 'current_block' in parent:
        current_block.ref.types = parent['current_block'].ref.types.new_child()
    return True


@meta.hook(Declaration)
def add_init(self, ast, expr, designation):
    ast.body.append(expr)
    dvalue = self.value(designation)
    if dvalue != "":
        ast.body[-1].designation = dvalue
    return True


@meta.hook(Declaration)
def for_decl_begin(self, current_block):
    current_block.ref = Node()
    current_block.ref.body = []
    # new to link this fake body to other block
    parent = self.rule_nodes.parents
    if 'current_block' in parent:
        current_block.ref.types = parent['current_block'].ref.types.new_child()
    return True


@meta.hook(Declaration)
def for_decl_end(self, init, current_block):
    if len(current_block.ref.body) > 0:
        init.set(current_block.ref.body[0])
    return True


@meta.hook(Declaration)
def to_cast(self, ast, typename):
    expr = Node()
    expr.set(ast)
    ast.set(nodes.Cast(nodes.Raw('()'), [typename.ctype, expr]))
    return True


@meta.hook(Declaration)
def sizeof(self, ident):
    ident_value = self.value(ident)
    if ident_value in Idset and Idset[ident_value] == "sizeof":
        return True
    return False


@meta.hook(Declaration)
def new_sizeof(self, ast, i, n):
    thing = n
    if isinstance(thing, nodes.Decl):
        thing = n.ctype
    ast.set(nodes.Sizeof(nodes.Raw(self.value(i)), [thing]))
    return True


@meta.hook(Declaration)
def new_builtoffset(self, ast, bof):
    ast.set(nodes.Raw("__builtin_offsetof(" + self.value(bof) + ")"))
    return True
