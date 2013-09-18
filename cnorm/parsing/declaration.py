from pyrser import meta, directives
from pyrser.passes import to_yml
from pyrser.hooks import copy, echo
from pyrser.parsing.node import Node
from cnorm import nodes
from pyrser.grammar import Grammar
from cnorm.parsing.statement import Statement
from cnorm.parsing.expression import Idset

class Declaration(Grammar, Statement):
    """
        interaction with other CNORM PART:

    """
    entry = "translation_unit"
    grammar = """

        translation_unit ::=
            @ignore("C/C++")
            [
                #new_root(_)
                [
                    "":current_block
                    #begin_decl(current_block, _)
                    declaration
                ]*
            ]
            Base.eof
        ;

        declaration ::=
            //asm_decl
            //| 
            c_decl:_
        ;

        asm_decl ::=
            Base.id
            [
                // TODO: asm qualifier
                Base.id
            ]?
            [
                '(' dummy_with_paren ')' 
                | '{' dummy_with_brace '}'
            ]
            ';'//?
        ;

        c_decl ::=
            "":local_specifier
            #create_ctype(local_specifier)
            declaration_specifier*
            init_declarator:decl
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

        // overload of Statement
        /*
        line_of_code ::=
                "":current_block
                #begin_decl(current_block, _)
                declaration:_
                | 
                single_statement:_
        ;
        */

        declaration_specifier ::=
            Base.id:i
            #new_decl_spec(local_specifier, i)
            //[
                //composed_type_specifier
                //| enum_specifier
                //| typeof_expr
                //| asm_decl_follow
                //| attr_decl_follow
                //| typedef_name
            //]?
        ;

        type_qualifier ::=
            Base.id:i
            #add_qual(local_specifier, i)
            //| attribute_decl
        ;

        name_of_composed_type ::= Base.id ;
        composed_type_specifier ::=
            attribute_decl?
            name_of_composed_type?
            composed_fields?
        ;

        composed_fields ::=
            '{'
                declaration*
            '}'
            
        ;

        enum_name ::= Base.id ;
        enum_specifier ::=
            enum_name?
            [ '{' enumerator_list '}' ]?
        ;

        enumerator_list ::=
            enumerator [',' enumerator?]*
        ;

        enumerator ::=
            identifier ['=' constant_expression]?
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
            //[
            //    ':' constant_expression
            //]?
            //attribute_decl*
            //[
            //    '=' initializer
            //]?
        ;

        attribute_decl ::=
            Base.id '(' dummy_with_paren ')'
            // TODO: attr
            | Base.id // TODO: asm
            [
                '(' dummy_with_paren ')'
                | '{' dummy_with_paren '}'
            ]
            | "__extension__"
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
                    f_or_v_id:name
                    #name_absdecl(local_specifier, name)
                ]
                direct_absolute_declarator?
        ;

        direct_absolute_declarator ::=
            [
                '['
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
                    parameter_type_list:_
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
            //[forward_decl ';']*
            [
                parameter_list:_
                | ','? "..."
            ]?
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
            "":local_specifier
            #create_ctype(local_specifier)
            type_name:_
        ;

        initializer ::=
            '{'
                initializer_list?
                ','?
            '}'
            | assignement_expression
        ;

        initializer_list ::=
            designation?
            initializer
            [
                ',' !'}'
                designation?
                initializer
                
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
            declaration_specifier+ declarator:_
        ;

        forward_decl ::=
            declaration_specifier+ declarator:_
        ;

    """

    def parse(self, source, entry=None):
        res = Grammar.parse(self, source, entry)
        if hasattr(res, 'node'):
            return res.node
        return res

@meta.hook(Declaration)
def new_root(self, ast):
    ast.node = nodes.RootBlockStmt([])
    return True

@meta.hook(Declaration)
def begin_decl(self, current_block, ast):
    current_block.node = ast.node.body
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
def new_decl_spec(self, lspec, i):
    if i.value in Idset:
        lspec.ctype = nodes.makeCType(i.value, lspec.ctype)
        return True
    return False

@meta.hook(Declaration)
def add_body(self, ast, body):
    ast.node.body = body.node
    return True

@meta.hook(Declaration)
def end_decl(self, current_block, ast):
    current_block.node.append(ast.node)
    return True

@meta.hook(Declaration)
def add_qual(self, lspec, qualspec):
    dspec = qualspec.value
    if dspec in Idset and Idset[dspec] == "qualifier":
        cleantxt = dspec.strip("_")
        lspec.ctype.push(nodes.QualType(nodes.Qualifiers.map[cleantxt.upper()]))
        return True
    return False

@meta.hook(Declaration)
def first_pointer(self, lspec):
    if not hasattr(lspec, 'ctype'):
        lspec.ctype = nodes.makeCType('int', lspec.ctype)
    lspec.ctype.push(nodes.PointerType())
    return True

@meta.hook(Declaration)
def commit_declarator(self, ast, lspec):
    if hasattr(lspec, 'list_of_params'):
        iter_param = iter(lspec.list_of_params)
        if not hasattr(lspec, '_is_fpointer'):
            first = next(iter_param)
            # special case for the first
            if first._params:
                lspec.ctype._params = first._params
        else:
            delattr(lspec, '_is_fpointer')
        # other are in ParenType
        well_done = False
        try:
            theparams = next(iter_param)
            decltype = lspec.ctype.link()
            while decltype != None:
                if isinstance(decltype, nodes.ParenType):
                    # attach parameter
                    decltype._params = theparams._params
                    theparams = next(iter_param)
                decltype = decltype.link()
        except StopIteration:
            well_done = True
    if hasattr(lspec.ctype, '_params'):
        ctype = lspec.ctype
        if isinstance(ctype, nodes.PrimaryType):
            ctype = ctype.link()
        ast.node = nodes.Decl(lspec._name, nodes.FuncType(lspec.ctype._identifier, lspec.ctype._params, ctype))
    else:
        ctype = None
        if hasattr(lspec, 'ctype'):
            ctype = lspec.ctype
        ast.node = nodes.Decl(lspec._name, ctype)
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
    if not hasattr(lspec, 'ctype'):
        lspec.ctype = nodes.makeCType('int')
    lspec.ctype.push(nodes.ParenType())
    return True

@meta.hook(Declaration)
def add_ary(self, lspec, expr):
    if not hasattr(lspec, 'ctype'):
        lspec.ctype = nodes.makeCType('int')
    decltype = lspec.ctype
    at_end = False
    end_tail = None
    if hasattr(lspec, '_is_fpointer'):
        while decltype != None:
            if decltype.link() == None:
                at_end = True
            elif not isinstance(decltype, nodes.ArrayType):
                end_tail = decltype
                first_ary = None
            decltype = decltype.link()
    if at_end:
        # ary in inverse order
        if isinstance(end_tail.link(), nodes.ArrayType):
            end_tail.push(nodes.ArrayType(expr.node))
        else:
            end_tail.link().link(nodes.ArrayType(expr.node))
    else:
        lspec.ctype.push(nodes.ArrayType(expr.node))
    return True

@meta.hook(Declaration)
def name_absdecl(self, ast, ident):
    if ident.value != "":
        ast._name = ident.value
        ast._could_be_fpointer = True
    return True

@meta.hook(Declaration)
def close_paren(self, ast):
    if hasattr(ast, '_could_be_fpointer'):
        delattr(ast, '_could_be_fpointer')
        ast._is_fpointer = True
    return True

@meta.hook(Declaration)
def open_params(self, lspec):
    if hasattr(lspec, '_could_be_fpointer'):
        delattr(lspec, '_could_be_fpointer')
    if not hasattr(lspec, 'list_of_params'):
        lspec.list_of_params = []
    lspec.list_of_params.append(Node())
    lspec.list_of_params[-1]._params = []
    return True

@meta.hook(Declaration)
def add_param(self, lspec, param):
    lspec.list_of_params[-1]._params.append(param.node)
    return True
