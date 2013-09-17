from pyrser import meta, directives
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
            #new_root(_)
            [declaration]*
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
            #clear(local_specifier)
            declaration_specifier*
            init_declarator:_
            [
                ',' "":local_specifier
                #copy_decl(local_specifier)
                init_declarator:_
            ]*
            [
                ';'
                |
                Statement.compound_statement:b
                #add_body(_, b)
            ]
            #end_decl(_)
        ;

        // overload of Statement
        line_of_code ::=
                Declaration.declaration:_
                | 
                single_statement:_
        ;

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
            Base.id:i !';'
            #add_qual(top_level_declarator, i)
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
            "":top_level_declarator
            #clear(local_specifier)
            [
                "*" #first_pointer(top_level_declarator) 
                declarator_recurs:_
                | absolute_declarator:_
            ]
            #commit_declarator(_, top_level_declarator)
        ;

        declarator_recurs ::=
            pointer absolute_declarator:_
        ;

        pointer ::=
            [
                "*" #add_pointer(top_level_declarator)
                | type_qualifier
            ]*
        ;

        function_or_variable_identifier ::= identifier;
        absolute_declarator ::=
                [
                    '(' #add_paren(top_level_declarator)
                        type_qualifier?
                        declarator_recurs:_
                    ')'
                    | 
                    function_or_variable_identifier?:name
                    #name_absdecl(_, name)
                ]
                direct_absolute_declarator?:pfunc_ary
                #p_fun(_, pfunc_ary, top_level_declarator)
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
                    #add_ary(top_level_declarator, e)
                ']'
            ]+
            | '(' 
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
            parameter_declaration:p #add_param(_, p)
            [',' parameter_declaration:p #add_param(_, p) ]*
        ;

        parameter_declaration ::=
            "":local_specifier
            #clear(local_specifier)
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
        self._current_block = [None]
        res = Grammar.parse(self, source, entry)
        if hasattr(self, '_current_ctype'):
            delattr(self, '_current_ctype')
        if hasattr(self, '_current_block'):
            delattr(self, '_current_block')
        if hasattr(res, 'node'):
            return res.node
        return res

@meta.hook(Declaration)
def new_root(self, ast):
    ast.node = nodes.RootBlockStmt([])
    self._current_block = ast.node.body
    return True

@meta.hook(Declaration)
def clear(self, lspec):
    lspec.ctype = None
    return True

@meta.hook(Declaration)
def copy_decl(self, lspec):
    lspec.ctype = self._current_block[-1].ctype.copy()
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
    #print("AJOUt:\n<<%s>>" % str(body.node.to_c()))
    #print("TYPE: %s" % body.node)
    #print("TYPE AST: %s" % ast.node)
    return True

@meta.hook(Declaration)
def end_decl(self, ast):
    self._current_block.append(ast.node)
    #print("finish %s" % ast.node)
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
    if not hasattr(ast, 'name_absdecl'):
        return False
    if hasattr(ast, '_params'):
        ast.node = nodes.Decl(ast._name, nodes.FuncType(ast._ident, ast._params))
    else:
        ctype = None
        if hasattr(lspec, 'ctype'):
            ctype = lspec.ctype
        ast.node = nodes.Decl(ast.name_absdecl, ctype)
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
    lspec.ctype.push(nodes.ArrayType(expr.node))
    return True

@meta.hook(Declaration)
def p_fun(self, ast, metadata, lspec):
    # if a list of param exist, it's a function
    if hasattr(metadata, 'params'):
        ast._name = ast.name_absdecl
        ident = ""
        if hasattr(lspec, "ctype"):
            ident = lspec.ctype._identifier
        ast._ident = ident
        ast._params = metadata.params
    return True

@meta.hook(Declaration)
def name_absdecl(self, ast, ident):
    if ident.value != "":
        ast.name_absdecl = ident.value
    return True

@meta.hook(Declaration)
def add_param(self, ast, param):
    if not hasattr(ast, 'params'):
        ast.params = []
    ast.params.append(param.node)
    return True
