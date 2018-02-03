from pyrser import meta, directives
from pyrser.grammar import Grammar
from cnorm import nodes

from pyrser.hooks import echo

class Literal(Grammar):
    """
        interaction with other CNORM PART:

            Expression.primary_expression -> Literal.literal
    """

    grammar = """
        dot = [ '.' !'.' ]

        pow = [ 'p' | 'P' ]

        exp = [ ['e'|'E'] ['+'|'-']? ['0'..'9']+ ]

        unsigned_suffix = [ 'u' | 'U' ]

        long_suffix = [ 'l' | 'L' ]

        float_suffix = [ 'f' | 'F' ]

        complex_suffix = [ 'i' | 'I' | 'j' | 'J' ]

        decimal_const = [
            ['0'..'9']+
            unsigned_suffix?
            long_suffix?
            long_suffix?
        ]

        hexadecimal_prefix = [ '0' ['x'|'X'] ]

        hexadecimal_digit = [ ['0'..'9'|'a'..'f'|'A'..'F'] ]

        hexadecimal_const_int = [
            hexadecimal_prefix [hexadecimal_digit]+
            unsigned_suffix?
            long_suffix?
            long_suffix?
        ]

        octal_digit = [ '0'..'7' ]

        octal_const = [
            '0' octal_digit+
            [
               dot octal_digit+
               [pow ['+'|'-']? decimal_const]?
            ]?
        ]

        double_const = [
            [decimal_const dot ['0'..'9']*| dot ['0'..'9']+] exp?
            long_suffix?
            float_suffix?
            complex_suffix?
        ]

        encoding_prefix = [ "u8" | 'u' | 'U' | 'L' ]

        string_const = [
            encoding_prefix? Base.string
        ]

        char_const = [
            encoding_prefix? Base.char
        ]

        literal = [ @ignore('null')
            [
                hexadecimal_const_int
                | octal_const
                | double_const
                | decimal_const
                | char_const
            ]:val
            #new_literal(_, val)
            |
            __scope__:val 
            [string_const:v #concat_str(val, v)]+
            #new_string(_, val)
        ]
    """

@meta.hook(Literal)
def concat_str(self, val, v):
    # TODO: treat all prefix stuff and rethink the storage of String Literal (wide char)
    if not hasattr(val, 'raw'):
        val.raw = self.value(v)
    else:
        val.raw = val.raw + self.value(v)
    return True

@meta.hook(Literal)
def new_string(self, ast, val):
    ast.set(nodes.Literal(val.raw))
    return True

@meta.hook(Literal)
def new_literal(self, ast, val):
    ast.set(nodes.Literal(self.value(val)))
    return True
