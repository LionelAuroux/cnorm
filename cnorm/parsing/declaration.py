from pyrser import meta, directives
from pyrser.hooks import copy, print
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
            declaration*
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
            declaration_specifier*
            init_declarator:init //?
            #new_decl(_, init)
            //[
            //    ','
            //    init_declarator
            //]*
            [
                Statement.compound_statement
                | ';'
            ]
        ;

        // overload of Statement
        line_of_code ::=
            // TODO:add declaration
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
            Base.id
            // TODO: hooks
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
            declarator
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
            pointer? absolute_declarator
        ;

        function_or_variable_identifier ::= Base.id ;
        absolute_declarator ::=
            [
                '('
                    type_qualifier?
                    declarator
                ')'
                | function_or_variable_identifier?
            ]
            //direct_absolute_declarator
            ['(' dummy_with_paren ')']? // TODO: erase
        ;

        direct_absolute_declarator ::=
            [
                '['
                    "static"?
                    type_qualifier*
                    "static"?
                    [
                        assignement_expression
                        | '*'
                    ]?
                ']'
            ]+
            | '('
                [
                    kr_parameter_type_list
                    | parameter_type_list
                ]?
            ')'
            [
                !![';'|','|'{'|'('|')']
                | declaration*
            ]
        ;

        pointer ::=
            '*'
            [
                type_qualifier
                | '*'
            ]*
        ;

        kr_parameter_type_list ::=
            identifier [',' identifier]* !!')'
        ;

        parameter_type_list ::=
            [forward_decl ';']*
            [
                parameter_list
                | ','? "..."
            ]?
        ;

        parameter_list ::=
            parameter_declaration [',' parameter_declaration]*
        ;

        parameter_declaration ::=
            type_name
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
            declaration_specifier+ declarator !![','|')']
        ;

        forward_decl ::=
            declaration_specifier+ declarator !!';'
        ;

    """

    def parse(self, source, entry):
        res = Grammar.parse(self, source, entry)
        if hasattr(res, 'node'):
            return res.node
        return res

@meta.hook(Declaration)
def new_decl_spec(self, i):
    if i.value in Idset:
        if Idset[i.value] == "type":
            self._current_decl_spec = nodes.PrimaryType(i.value)
            return True
        if Idset[i.value] == "storage":
            return True
        if Idset[i.value] == "qualifier":
            return True
        if Idset[i.value] == "funspecifier":
            return True
        if Idset[i.value] == "sign_unsigned":
            return True
        if Idset[i.value] == "sign_signed":
            return True
        if Idset[i.value] == "specifier_size":
            return True
        if Idset[i.value] == "specifier_size_size":
            return True
    return False

@meta.hook(Declaration)
def new_decl(self, ast, init):
    # classical declaration
    #print("<%s>" % init.value)
    if hasattr(self, '_current_decl_spec'):
       ast.node = nodes.Decl(init.value, self._current_decl_spec)
    # else: no declspec! default int
    return True
