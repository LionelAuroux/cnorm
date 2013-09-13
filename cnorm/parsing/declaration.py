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
            [declaration:d #add_decl(d)]*
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
            declaration_specifier*:dsp
            init_declarator:init
            #new_decl(_, init)
            [
                ','
                #copy_decl(_)
                init_declarator:init
                #new_decl(_, init)
            ]*
            #end_decl
            [
                Statement.compound_statement
                | ';'
            ]
        ;

        // overload of Statement
        line_of_code ::=
                Declaration.declaration:_
                | single_statement:_
        ;

        declaration_specifier ::=
            Base.id:i
            #new_decl_spec(i)
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
            #add_qual(i)
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
                    type_name !!')'
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
            !![','|';'|'{'|'}'] 
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
            "*" #first_pointer declarator_recurs:_
            | absolute_declarator:_
        ;

        declarator_recurs ::=
            pointer absolute_declarator:_
        ;

        pointer ::=
            [
                "*" #add_pointer
                | type_qualifier
            ]*
        ;

        function_or_variable_identifier ::= identifier;
        absolute_declarator ::=
                [
                    '(' #add_paren
                        type_qualifier?
                        declarator_recurs:_
                        #close_paren
                    ')'
                    | 
                    function_or_variable_identifier?:name
                    #name_absdecl(_, name)
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
                    #add_ary(e)
                ']'
            ]+
            | '(' #to_function
                [
                    //kr_parameter_type_list
                    //| 
                    parameter_type_list
                ]?
            ')'
            /*
            [
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
                parameter_list
                | ','? "..."
            ]?
        ;

        parameter_list ::=
            parameter_declaration:p #add_param(p)
            [',' parameter_declaration:p #add_param(p)]*
        ;

        parameter_declaration ::=
            #new_param
            type_name:name
            #new_decl(_, name)
            #end_decl
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
            declaration_specifier+ declarator:_ !![','|')']
        ;

        forward_decl ::=
            declaration_specifier+ declarator:_ !!';'
        ;

    """

    def parse(self, source, entry=None):
        self._current_ctype = [None]
        res = Grammar.parse(self, source, entry)
        if hasattr(self, '_current_ctype'):
            delattr(self, '_current_ctype')
        if hasattr(self, '_current_block'):
            delattr(self, '_current_block')
        if hasattr(res, 'node'):
            return res.node
        return res

@meta.hook(Declaration)
def add_decl(self, decl):
    if not hasattr(self, '_current_block'):
        self._current_block = []
    self._current_block.append(decl.node)
    return True

@meta.hook(Declaration)
def copy_decl(self, ast):
    self.add_decl(ast)
    self._current_ctype[-1] = self._current_ctype[-1].copy()
    return True

@meta.hook(Declaration)
def new_root(self, ast):
    ast.node = nodes.RootBlockStmt([])
    self._current_block = ast.node.block
    return True

@meta.hook(Declaration)
def new_decl_spec(self, i):
    if i.value in Idset:
        self._current_ctype[-1] = nodes.makeCType(i.value, self._current_ctype[-1])
        return True
    return False

@meta.hook(Declaration)
def first_pointer(self):
    if self._current_ctype[-1] == None:
        self._current_ctype[-1] = nodes.makeCType('int')
    self._current_ctype[-1].add_in(nodes.PointerType())
    return True

@meta.hook(Declaration)
def not_empy(self, n):
    return n.value != ""

@meta.hook(Declaration)
def add_pointer(self):
    if self._current_ctype[-1] == None:
        self._current_ctype[-1] = nodes.makeCType('int')
    self._current_ctype[-1].add_in(nodes.PointerType())
    return True

@meta.hook(Declaration)
def add_paren(self):
    self._current_ctype[-1].add_in(nodes.ParenType())
    return True

@meta.hook(Declaration)
def close_paren(self):
    # close the nearest paren
    for dclt in self._current_ctype[-1].decltypes:
        if isinstance(dclt, nodes.ParenType):
            dclt.temp = False
            break
    return True

@meta.hook(Declaration)
def add_ary(self, expr):
    if self._current_ctype[-1] == None:
        self._current_ctype[-1] = nodes.makeCType('int')
    # we put in front when the paren if is still open or none
    # we put just after the paren if is close
    i = 0
    notfound = True
    arynode = Node
    if hasattr(expr, 'node'):
        arynode = nodes.ArrayType(expr.node)
    else:
        arynode = nodes.ArrayType()
    for dclt in self._current_ctype[-1].decltypes:
        if isinstance(dclt, nodes.ParenType):
            if not dclt.temp:
                self._current_ctype[-1].decltypes.insert(i + 1, arynode)
                notfound = False
                break
        i += 1
    if notfound:
        self._current_ctype[-1].decltypes.insert(0, arynode)
    return True

@meta.hook(Declaration)
def dbg(self):
    if not self.read_eof():
        print("?:<%s>" % vars(self)['_BasicParser__streams'][-1].peek_char)
    return True

@meta.hook(Declaration)
def add_qual(self, qualspec):
    declspecifier = qualspec.value
    if declspecifier in Idset and Idset[declspecifier] == "qualifier":
        cleantxt = declspecifier.strip("_")
        self._current_ctype[-1].add_in(nodes.QualType(nodes.Qualifiers.map[cleantxt.upper()]))
        return True
    return False

@meta.hook(Declaration)
def to_function(self):
    self._current_ctype[-1] = nodes.FuncType(self._current_ctype[-1], [])
    return True

@meta.hook(Declaration)
def name_absdecl(self, ast, ident):
    if ident.value != "":
        ast.name_absdecl = ident.value
    return True

@meta.hook(Declaration)
def new_decl(self, ast, init):
    # classical declaration
    if self._current_ctype[-1] != None:
        ast.node = nodes.Decl(init.name_absdecl, self._current_ctype[-1])
    else:
    # no declspec! default int
        ast.node = nodes.Decl(init.name_absdecl)
    return True

@meta.hook(Declaration)
def end_decl(self):
    self._current_ctype.pop()
    return True

@meta.hook(Declaration)
def new_param(self):
    self._current_ctype.append(None)
    return True

@meta.hook(Declaration)
def add_param(self, param):
    self._current_ctype[-1].params.append(param.node)
    return True

