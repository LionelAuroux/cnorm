from pyrser import meta, directives
from pyrser.hooks import copy, print
from pyrser.parsing.node import Node
from cnorm import nodes
from pyrser.grammar import Grammar
from cnorm.parsing.literal import Literal

class Expression(Grammar, Literal):
    """
        interaction with other CNORM PART:

    """

    grammar = """

        dummy_with_brace ::= @ignore('null')
            [
            '{' dummy_with_brace* '}'
            | Base.string
            | Base.char
            | Base.read_byte:c #check_not_brace(c)
            ]
        ;

        dummy_with_paren ::= @ignore('null')
            [
            '(' dummy_with_paren* ')'
            | Base.string
            | Base.char
            | Base.read_byte:c #check_not_paren(c)
            ]
        ;


        expression ::=
            assignement_expression : p1 #copy(_, p1)
            [
                ',' : op
                assignement_expression : p2
                #new_binary(_, op, p2)
            ]*
        ;

        assign_op ::= @ignore('null') ['=' !'='| "+=" | "-=" | "*=" | "/=" | "%=" | "<<=" | ">>=" | "&=" | "^=" | "|="]:op #new_raw(_, op);
        assignement_expression ::=
            conditional_expression : p1 #copy(_, p1)
            [
                assign_op : op
                assignement_expression : p2
                #new_binary(_, op, p2)
            ]*
        ;

        constant_expression ::=
            conditional_expression : p1 #copy(_, p1)
        ;

        conditional_expression ::=
            logical_or_op : p1 #copy(_, p1)
            [
                '?'
                expression : then
                ':'
                assignement_expression : else
                #new_ternary(_, then, else)
            ]?
        ;

        logical_or_op ::= @ignore('null') ["||"]:op #new_raw(_, op);
        logical_or_expression ::=
            logical_and_expression : p1 #copy(_, p1)
            [   
                logical_or_op : op
                logical_and_expression : p2
                #new_binary(_, op, p2)
            ]*
        ;

        logical_and_op ::= @ignore('null') ["&&"]:op #new_raw(_, op);
        logical_and_expression ::=
            or_expression : p1 #copy(_, p1)
            #print("coucou ", p1)
            [   
                logical_and_op : op
                or_expression : p2
                #new_binary(_, op, p2)
            ]*
        ;

        or_op ::= @ignore('null') ["|" !["|"|"="]]:op #new_raw(_, op);
        or_expression ::=
            xor_expression : p1 #copy(_, p1)
            [   
                or_op : op
                xor_expression : p2
                #new_binary(_, op, p2)
            ]*
        ;

        xor_op ::= @ignore('null') ["^" !"="]:op #new_raw(_, op);
        xor_expression ::=
            and_expression : p1 #copy(_, p1)
            [   
                xor_op : op
                and_expression : p2
                #new_binary(_, op, p2)
            ]*
        ;

        and_op ::= @ignore('null') ["&" !["&"|"="]]:op #new_raw(_, op);
        and_expression ::=
            equality_expression : p1 #copy(_, p1)
            [   
                and_op : op
                equality_expression : p2
                #new_binary(_, op, p2)
            ]*
        ;

        eqneq_op ::= @ignore('null') ["==" | "!="]:op #new_raw(_, op);
        equality_expression ::=
            relational_expression : p1 #copy(_, p1)
            [   
                eqneq_op : op
                relational_expression : p2
                #new_binary(_, op, p2)
            ]*
        ;

        cmp_op ::= @ignore('null') ["<=" | ">=" | '<' !'<' | '>' !'>' ]:op #new_raw(_, op);
        relational_expression ::=
            shift_expression: p1 #copy(_, p1)
            [   
                cmp_op : op
                shift_expression : p2
                #new_binary(_, op, p2)
            ]*
        ;

        shift_op ::= @ignore('null') ["<<" !"=" | ">>" !"="]:op #new_raw(_, op);
        shift_expression ::=
            additive_expression: p1 #copy(_, p1)
            [   
                shift_op : op
                additive_expression : p2
                #new_binary(_, op, p2)
            ]*
        ;

        add_op ::= @ignore('null') ['+' !['+'|'='] | '-' !['-'|'='|'>']]:op #new_raw(_, op);
        additive_expression ::=
            multiplicative_expression: p1 #copy(_, p1)
            [   
                add_op : op
                multiplicative_expression : p2
                #new_binary(_, op, p2)
            ]*
        ;

        mul_op ::= @ignore('null') [['*'|'/'|'%']:op !'='] #new_raw(_, op);
        multiplicative_expression ::=
            primary_expression : p1 #copy(_, p1)
            [   
                mul_op : op
                primary_expression : p2
                #new_binary(_, op, p2)
            ]*
        ;

        primary_expression ::=
            Literal.literal : lit #copy(_, lit)
            | identifier : id #copy(_, id)
        ;

        identifier ::= @ignore('null')
            rootidentifier : id
            #check_is_id(id)
            #new_id(_, id)
        ;

        rootidentifier ::= ['_'|'a'..'z'|'A'..'Z']['_'|'a'..'z'|'A'..'Z'|'0'..'9']*
        ;

    """

    def parse(self, source, entry):
        res = Grammar.parse(self, source, entry)
        if hasattr(res, 'node'):
            return res.node
        return res

@meta.hook(Expression)
def new_ternary(self, cond_expr, then_expr, else_expr):
    ast.node = nodes.Ternary([], [cond_expr.node, then_expr.node, else_expr.node])
    return True

@meta.hook(Expression)
def new_binary(self, ast, op, param):
    ast.node = nodes.Binary(op.node, [ast.node, param.node])
    return True

@meta.hook(Expression)
def new_raw(self, ast, data):
    ast.node = nodes.Raw(data.value)
    return True

@meta.hook(Expression)
def new_id(self, ast, identifier):
    ast.node = nodes.Id(identifier.value)
    return True

@meta.hook(Expression)
def check_not_brace(self, c):
    return c.value != "{" and c.value != "}" and c.value != "'" and c.value != '"'

@meta.hook(Expression)
def check_not_paren(self, c):
    return c.value != "(" and c.value != ")" and c.value != "'" and c.value != '"'

@meta.hook(Expression)
def check_is_id(self, identifier):
    # TODO: handle dialect differently
    idset = {
                # ASM
                "asm"                   : "asm",
                "__asm"                 : "asm", 
                "__asm__"               : "asm",
                # ATTRIBUTE
                "attribute"             : "attribute", 
                "__attribute"           : "attribute",
                "__attribute__"         : "attribute",
                #      windows attribute 
                "__declspec"            : "attribute",
                ############
                "auto"                  : "qualifier",
                # SPECIFIER
                #      sign
                "unsigned"              : "sign_unsigned", 
                "__unsigned"            : "sign_unsigned",
                "__unsigned__"          : "sign_unsigned",
                "signed"                : "sign_signed",
                "__signed"              : "sign_signed",
                "__signed__"            : "sign_signed",
                #      size
                "short"                 : "specifier_size",
                "long"                  : "specifier_size_size",
                #      composed
                "struct"                : "specifier_block",
                "union"                 : "specifier_block",
                "enum"                  : "specifier_enum",
                #      function
                "inline"                : "funspecifier",
                "__inline"              : "funspecifier",
                "__inline__"            : "funspecifier",
                "__forceinline"         : "funspecifier",
                # STORAGE
                "register"              : "storage",
                "typedef"               : "storage",
                "static"                : "storage",
                "extern"                : "storage",
                "__thread"              : "storage",
                # QUALIFIER
                "const"                 : "qualifier",
                "volatile"              : "qualifier",
                "restrict"              : "qualifier",
                "__volatile"            : "qualifier",
                "__volatile__"          : "qualifier",
                "__const"               : "qualifier",
                "__restrict"            : "qualifier",
                #      windows qualifier 
                "__cdecl"               : "qualifier",
                "__stdcall"             : "qualifier",
                "__fastcall"            : "qualifier",
                "__w64"                 : "qualifier",
                "__ptr32"               : "qualifier",
                "__ptr64"               : "qualifier",
                # TYPE
                "void"                  : "type",
                "char"                  : "type",
                "int"                   : "type",
                "float"                 : "type",
                "double"                : "type",
                "_Complex"              : "type",
                "__complex"             : "type",
                "__complex__"           : "type",
                "_Imaginary"            : "type",
                "__imag"                : "type",
                "__imag__"              : "type",
                "__real"                : "type",
                "__real__"              : "type",
                "_Bool"                 : "type",
                "__label__"             : "type",
                "__builtin_va_list"     : "type",
                "__int8"                : "type",
                "__int16"               : "type",
                "__int32"               : "type",
                "__int64"               : "type",
                # SIZEOF/TYPEOF
                #      sizeof
                "sizeof"                : "sizeof",
                "__alignof"             : "sizeof",
                "__alignof__"           : "sizeof",
                #      typeof
                "typeof"                : "typeof",
                "__typeof"              : "typeof",
                "__typeof__"            : "typeof",
                # UNARY OP
                "__real"                : "unary",
                "__real__"              : "unary",
                "__imag"                : "unary",
                "__imag__"              : "unary",
                "__extension__"         : "unary",
                # RESERVED KEYWORDS
                "switch"                : "reserved",
                "case"                  : "reserved",
                "default"               : "reserved",
                "if"                    : "reserved",
                "else"                  : "reserved",
                "while"                 : "reserved",
                "do"                    : "reserved",
                "for"                   : "reserved",
                "goto"                  : "reserved",
                "continue"              : "reserved",
                "break"                 : "reserved",
                "return"                : "reserved",
                "__builtin_offsetof"    : "reserved"
    }
    return identifier.value not in idset
