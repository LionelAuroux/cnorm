from pyrser import meta, directives
from pyrser.grammar import Grammar
from cnorm import nodes

class   Literal(Grammar):
    """
        interaction with other CNORM PART:

            Expression.primary_expression -> Literal.literal
    """

    grammar = """
        dot ::= '.' !'.'
        ;

        pow ::= 'p' | 'P'
        ;

        exp ::= 
            ['e'|'E'] ['+'|'-']? ['0'..'9']+
        ;

        unsigned_suffix ::=
            ['u'|'U']
        ;

        long_suffix ::=
            ['l'|'L']
        ;

        float_suffix ::=
            ['f'|'F']
        ;

        complex_suffix ::=
            ['i'|'I'|'j'|'J']
        ;

        decimal_const ::=
            ['0'..'9']+
            unsigned_suffix?
            long_suffix?
            long_suffix?
        ;

        hexadecimal_prefix ::= '0' ['x'|'X']
        ;

        hexadecimal_digit ::= ['0'..'9'|'a'..'f'|'A'..'F']
        ;

        hexadecimal_const_int ::=
            hexadecimal_prefix [hexadecimal_digit]+
            unsigned_suffix?
            long_suffix?
            long_suffix?
        ;

        octal_digit ::= '0'..'7'
        ;

        octal_const ::= 
            '0' octal_digit+
            [
               dot octal_digit+
               [pow ['+'|'-']? decimal_const]?
            ]?
        ;

        double_const ::=
            [decimal_const dot ['0'..'9']*| dot ['0'..'9']+] exp?
            long_suffix?
            float_suffix?
            complex_suffix?
        ;

        encoding_prefix ::= "u8" | 'u' | 'U' | 'L'
        ;

        string_const ::=
            encoding_prefix? Base.string @ignore("C/C++") Base.string*
        ;

        char_const ::=
            encoding_prefix? Base.char
        ;

        literal ::= @ignore('null')
            [
                hexadecimal_const_int
                | octal_const
                | double_const
                | decimal_const
                | string_const
                | char_const
            ]:val
            #new_literal(_, val)
        ;
    """

    def parse(self, source, entry):
        res = Grammar.parse(self, source, entry)
        if hasattr(res, 'node'):
            return res.node
        return res

@meta.hook(Literal)
def new_literal(self, ast, val):
    ast.node = nodes.Literal(val.value)
    return True
