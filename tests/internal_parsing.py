import unittest
from pyrser import meta
from pyrser import error
from pyrser import grammar
from cnorm import nodes
from cnorm.parsing import literal, expression

class InternalParsing_Test(unittest.TestCase):

    def test_00_literal(self):
        lit = literal.Literal()
        res = lit.parse(".", "dot")
        self.assertTrue(res, "Failed to parse a single dot")
        with self.assertRaises(error.ParseError):
            res = lit.parse("..", "dot")
        # HEXA
        res = lit.parse("0xcafebabe", "literal")
        self.assertTrue(type(res) is nodes.Literal, "Failed to set the correct type node")
        self.assertTrue(res.value == "0xcafebabe", "Failed to get the correct node value")
        # OCTAL
        res = lit.parse("0700", "literal")
        self.assertTrue(type(res) is nodes.Literal, "Failed to set the correct type node")
        self.assertTrue(res.value == "0700", "Failed to get the correct node value")
        res = lit.parse("033.3p-1", "literal")
        self.assertTrue(type(res) is nodes.Literal, "Failed to set the correct type node")
        self.assertTrue(res.value == "033.3p-1", "Failed to get the correct node value")
        # FLOAT
        res = lit.parse("6.6", "literal")
        self.assertTrue(type(res) is nodes.Literal, "Failed to set the correct type node")
        self.assertTrue(res.value == "6.6", "Failed to get the correct node value")
        res = lit.parse(".8e+4", "literal")
        self.assertTrue(type(res) is nodes.Literal, "Failed to set the correct type node")
        self.assertTrue(res.value == ".8e+4", "Failed to get the correct node value")
        res = lit.parse("3.E4", "literal")
        self.assertTrue(type(res) is nodes.Literal, "Failed to set the correct type node")
        self.assertTrue(res.value == "3.E4", "Failed to get the correct node value")
        res = lit.parse("3.12L", "literal")
        self.assertTrue(type(res) is nodes.Literal, "Failed to set the correct type node")
        self.assertTrue(res.value == "3.12L", "Failed to get the correct node value")
        res = lit.parse("6.02e23f", "literal")
        self.assertTrue(type(res) is nodes.Literal, "Failed to set the correct type node")
        self.assertTrue(res.value == "6.02e23f", "Failed to get the correct node value")
        # DECIMAL
        res = lit.parse("42", "literal")
        self.assertTrue(type(res) is nodes.Literal, "Failed to set the correct type node")
        self.assertTrue(res.value == "42", "Failed to get the correct node value")
        res = lit.parse("42u", "literal")
        self.assertTrue(type(res) is nodes.Literal, "Failed to set the correct type node")
        self.assertTrue(res.value == "42u", "Failed to get the correct node value")
        res = lit.parse("42l", "literal")
        self.assertTrue(type(res) is nodes.Literal, "Failed to set the correct type node")
        self.assertTrue(res.value == "42l", "Failed to get the correct node value")
        res = lit.parse("42LL", "literal")
        self.assertTrue(type(res) is nodes.Literal, "Failed to set the correct type node")
        self.assertTrue(res.value == "42LL", "Failed to get the correct node value")
        res = lit.parse("1uLl", "literal")
        self.assertTrue(type(res) is nodes.Literal, "Failed to set the correct type node")
        self.assertTrue(res.value == "1uLl", "Failed to get the correct node value")
        # STRING
        res = lit.parse('"tutu"', "literal")
        self.assertTrue(type(res) is nodes.Literal, "Failed to set the correct type node")
        self.assertTrue(res.value == '"tutu"', "Failed to get the correct node value")
        res = lit.parse('"tu\\"tu"', "literal")
        self.assertTrue(type(res) is nodes.Literal, "Failed to set the correct type node")
        self.assertTrue(res.value == '"tu\\"tu"', "Failed to get the correct node value")
        # CHAR
        res = lit.parse("'C'", "literal")
        self.assertTrue(type(res) is nodes.Literal, "Failed to set the correct type node")
        self.assertTrue(res.value == "'C'", "Failed to get the correct node value")
        res = lit.parse("'\\''", "literal")
        self.assertTrue(type(res) is nodes.Literal, "Failed to set the correct type node")
        self.assertTrue(res.value == "'\\''", "Failed to get the correct node value")

    def test_01_expr(self):
        expr = expression.Expression()
        # dummy_with_brace
        res = expr.parse("{}", "dummy_with_brace")
        self.assertTrue(res, "Failed to parse an dummy_with_brace")
        res = expr.parse("{ada{da}da}", "dummy_with_brace")
        self.assertTrue(res, "Failed to parse an dummy_with_brace")
        with self.assertRaises(error.ParseError):
            res = expr.parse("{", "dummy_with_brace")
        with self.assertRaises(error.ParseError):
            res = expr.parse("{ewew{d'as}ewe}", "dummy_with_brace")
        # dummy_with_paren
        res = expr.parse("()", "dummy_with_paren")
        self.assertTrue(res, "Failed to parse an dummy_with_paren")
        res = expr.parse("(ada(da)da)", "dummy_with_brace")
        self.assertTrue(res, "Failed to parse an dummy_with_paren")
        with self.assertRaises(error.ParseError):
            res = expr.parse("(", "dummy_with_paren")
        with self.assertRaises(error.ParseError):
            res = expr.parse("(ewew(d'as)ewe)", "dummy_with_paren")
        # identifier
        res = expr.parse("toto", "identifier")
        self.assertTrue(res, "Failed to parse an identifier")
        with self.assertRaises(error.ParseError):
            res = expr.parse("struct", "identifier")
        res = expr.parse("toto tata", "identifier")
        self.assertTrue(res, "Failed to parse an identifier")
        # primary expression
        res = expr.parse("toto", "primary_expression")
        self.assertTrue(res, "Failed to parse an identifier")
        self.assertTrue(type(res) is nodes.Id, "Failed to set the correct type node")
        self.assertTrue(res.value == "toto", "Failed to get the correct node value")
        res = expr.parse("12", "primary_expression")
        self.assertTrue(res, "Failed to parse a literal")
        self.assertTrue(type(res) is nodes.Literal, "Failed to set the correct type node")
        self.assertTrue(res.value == "12", "Failed to get the correct node value")
        # mul expr
        res = expr.parse("12 * 4", "multiplicative_expression")
        self.assertTrue(res, "Failed to parse a multiplicative_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "12 * 4", "Failed to get the correct node value")
        res = expr.parse("12    *   b   / c   %42                /   e                 ", "multiplicative_expression")
        self.assertTrue(res, "Failed to parse a multiplicative_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "12 * b / c % 42 / e", "Failed to get the correct node value")
        # add expr
        res = expr.parse("12 + 4", "additive_expression")
        self.assertTrue(res, "Failed to parse a additive_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "12 + 4", "Failed to get the correct node value")
        res = expr.parse("12 * 4 + 4 / 2", "additive_expression")
        self.assertTrue(res, "Failed to parse a additive_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "12 * 4 + 4 / 2", "Failed to get the correct node value")
        # shift expr
        res = expr.parse("12 << 4", "shift_expression")
        self.assertTrue(res, "Failed to parse a shift_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "12 << 4", "Failed to get the correct node value")
        res = expr.parse("12 + 4 << 4 + 1", "shift_expression")
        self.assertTrue(res, "Failed to parse a shift_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "12 + 4 << 4 + 1", "Failed to get the correct node value")
        # relat expr
        res = expr.parse("12 < 4", "relational_expression")
        self.assertTrue(res, "Failed to parse a relational_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "12 < 4", "Failed to get the correct node value")
        res = expr.parse("13 + 1 > 14 - 2", "relational_expression")
        self.assertTrue(res, "Failed to parse a relational_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "13 + 1 > 14 - 2", "Failed to get the correct node value")
        # equality expr
        res = expr.parse("a == 4", "equality_expression")
        self.assertTrue(res, "Failed to parse a equality_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a == 4", "Failed to get the correct node value")
        res = expr.parse("a == c < 5 != b", "equality_expression")
        self.assertTrue(res, "Failed to parse a equality_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a == c < 5 != b", "Failed to get the correct node value")
        # and expr
        res = expr.parse("a & 4", "and_expression")
        self.assertTrue(res, "Failed to parse a and_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a & 4", "Failed to get the correct node value")
        res = expr.parse("a == b & 4 != 7", "and_expression")
        self.assertTrue(res, "Failed to parse a and_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a == b & 4 != 7", "Failed to get the correct node value")
        # xor expr
        res = expr.parse("a ^ 4", "xor_expression")
        self.assertTrue(res, "Failed to parse a xor_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a ^ 4", "Failed to get the correct node value")
        res = expr.parse("a & b ^ 4 != 7", "xor_expression")
        self.assertTrue(res, "Failed to parse a xor_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a & b ^ 4 != 7", "Failed to get the correct node value")
        # or expr
        res = expr.parse("a | 4", "or_expression")
        self.assertTrue(res, "Failed to parse a or_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a | 4", "Failed to get the correct node value")
        res = expr.parse("a == b | 4 != 7", "or_expression")
        self.assertTrue(res, "Failed to parse a or_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a == b | 4 != 7", "Failed to get the correct node value")
        # &&
        res = expr.parse("a && 4", "logical_and_expression")
        self.assertTrue(res, "Failed to parse a logical_and_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a && 4", "Failed to get the correct node value")
        res = expr.parse("a == b && 4 != 7", "logical_and_expression")
        self.assertTrue(res, "Failed to parse a logical_and_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a == b && 4 != 7", "Failed to get the correct node value")
        # ||
        res = expr.parse("a || 4", "logical_or_expression")
        self.assertTrue(res, "Failed to parse a logical_or_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a || 4", "Failed to get the correct node value")
        res = expr.parse("a == b || 4 != 7", "logical_or_expression")
        self.assertTrue(res, "Failed to parse a logical_or_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a == b || 4 != 7", "Failed to get the correct node value")
        # ||
        res = expr.parse("a || 4", "logical_or_expression")
        self.assertTrue(res, "Failed to parse a logical_or_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a || 4", "Failed to get the correct node value")
        print(res.to_c())


        # dynamic class parsing
        def dyn_parse(self, source, entry):
            from pyrser.grammar import Grammar
            res = Grammar.parse(self, source, entry)
            if hasattr(res, 'node'):
                return res.node
            return res
        gram = grammar.grammar_class([expression.Expression], parse=dyn_parse, grammar="""
                plop ::=
                    [identifier : id #list_id(id) ]+
                ;
            """)
        self.assertTrue(gram.__name__ == "gen_class_0")

