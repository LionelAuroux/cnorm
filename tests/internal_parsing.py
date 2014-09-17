import unittest
from pyrser import error
from pyrser.passes import to_yml
from cnorm import nodes
from cnorm.passes import to_c
from cnorm.parsing import literal, expression, statement, declaration


class InternalParsing_Test(unittest.TestCase):

    def test_00_literal(self):
        lit = literal.Literal()
        res = lit.parse(".", "dot")
        self.assertTrue(res, "Failed to parse a single dot")
        res = lit.parse("..", "dot")
        self.assertFalse(res, "Failed to detect the error")
        # HEXA
        res = lit.parse("0xcafebabe", "literal")
        self.assertTrue(type(res) is nodes.Literal,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, "0xcafebabe",
                         "Failed to get the correct node value")
        # OCTAL
        res = lit.parse("0700", "literal")
        self.assertTrue(type(res) is nodes.Literal,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, "0700",
                         "Failed to get the correct node value")
        res = lit.parse("033.3p-1", "literal")
        self.assertTrue(type(res) is nodes.Literal,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, "033.3p-1",
                         "Failed to get the correct node value")
        # FLOAT
        res = lit.parse("6.6", "literal")
        self.assertTrue(type(res) is nodes.Literal,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, "6.6",
                         "Failed to get the correct node value")
        res = lit.parse(".8e+4", "literal")
        self.assertTrue(type(res) is nodes.Literal,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, ".8e+4",
                         "Failed to get the correct node value")
        res = lit.parse("3.E4", "literal")
        self.assertTrue(type(res) is nodes.Literal,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, "3.E4",
                         "Failed to get the correct node value")
        res = lit.parse("3.12L", "literal")
        self.assertTrue(type(res) is nodes.Literal,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, "3.12L",
                         "Failed to get the correct node value")
        res = lit.parse("6.02e23f", "literal")
        self.assertTrue(type(res) is nodes.Literal,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, "6.02e23f",
                         "Failed to get the correct node value")
        # DECIMAL
        res = lit.parse("42", "literal")
        self.assertTrue(type(res) is nodes.Literal,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, "42",
                         "Failed to get the correct node value")
        res = lit.parse("42u", "literal")
        self.assertTrue(type(res) is nodes.Literal,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, "42u",
                         "Failed to get the correct node value")
        res = lit.parse("42l", "literal")
        self.assertTrue(type(res) is nodes.Literal,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, "42l",
                         "Failed to get the correct node value")
        res = lit.parse("42LL", "literal")
        self.assertTrue(type(res) is nodes.Literal,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, "42LL",
                         "Failed to get the correct node value")
        res = lit.parse("1uLl", "literal")
        self.assertTrue(type(res) is nodes.Literal,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, "1uLl",
                         "Failed to get the correct node value")
        # STRING
        res = lit.parse('"tutu"', "literal")
        self.assertTrue(type(res) is nodes.Literal,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, '"tutu"',
                         "Failed to get the correct node value")
        res = lit.parse('"tu\\"tu"', "literal")
        self.assertTrue(type(res) is nodes.Literal,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, '"tu\\"tu"',
                         "Failed to get the correct node value")
        # CHAR
        res = lit.parse("'C'", "literal")
        self.assertTrue(type(res) is nodes.Literal,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, "'C'",
                         "Failed to get the correct node value")
        res = lit.parse("'\\''", "literal")
        self.assertTrue(type(res) is nodes.Literal,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, "'\\''",
                         "Failed to get the correct node value")

    def test_01_expr(self):
        expr = expression.Expression()
        # dummy_with_brace
        res = expr.parse("{}", "dummy_with_brace")
        self.assertTrue(res, "Failed to parse an dummy_with_brace")
        res = expr.parse("{ada{da}da}", "dummy_with_brace")
        self.assertTrue(res, "Failed to parse an dummy_with_brace")
        res = expr.parse("{", "dummy_with_brace")
        self.assertFalse(res, "Failed to detect the error")
        res = expr.parse("{ewew{d'as}ewe}", "dummy_with_brace")
        self.assertFalse(res, "Failed to detect the error")
        # dummy_with_paren
        res = expr.parse("()", "dummy_with_paren")
        self.assertTrue(res, "Failed to parse an dummy_with_paren")
        res = expr.parse("(ada(da)da)", "dummy_with_brace")
        self.assertTrue(res, "Failed to parse an dummy_with_paren")
        res = expr.parse("(", "dummy_with_paren")
        self.assertFalse(res, "Failed to detect the error")
        res = expr.parse("(ewew(d'as)ewe)", "dummy_with_paren")
        self.assertFalse(res, "Failed to detect the error")
        # identifier
        res = expr.parse("toto", "identifier")
        self.assertTrue(res, "Failed to parse an identifier")
        res = expr.parse("struct", "identifier")
        self.assertFalse(res, "Failed to detect the error")
        res = expr.parse("toto tata", "identifier")
        self.assertTrue(res, "Failed to parse an identifier")
        # primary expression
        res = expr.parse("toto", "primary_expression")
        self.assertTrue(res, "Failed to parse an identifier")
        self.assertTrue(type(res) is nodes.Id,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, "toto",
                         "Failed to get the correct node value")
        res = expr.parse("12", "primary_expression")
        self.assertTrue(res, "Failed to parse a literal")
        self.assertTrue(type(res) is nodes.Literal,
                        "Failed to set the correct type node")
        self.assertEqual(res.value, "12",
                         "Failed to get the correct node value")
        # mul expr
        res = expr.parse("12 * 4", "multiplicative_expression")
        self.assertTrue(res, "Failed to parse a multiplicative_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "12 * 4",
                         "Failed to get the correct node value")
        res = expr.parse("12 * b / c %42 / e", "multiplicative_expression")
        self.assertTrue(res, "Failed to parse a multiplicative_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "12 * b / c % 42 / e",
                         "Failed to get the correct node value")
        # add expr
        res = expr.parse("12 + 4", "additive_expression")
        self.assertTrue(res, "Failed to parse a additive_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "12 + 4",
                         "Failed to get the correct node value")
        res = expr.parse("12 * 4 + 4 / 2", "additive_expression")
        self.assertTrue(res, "Failed to parse a additive_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "12 * 4 + 4 / 2",
                         "Failed to get the correct node value")
        # shift expr
        res = expr.parse("12 << 4", "shift_expression")
        self.assertTrue(res, "Failed to parse a shift_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "12 << 4",
                         "Failed to get the correct node value")
        res = expr.parse("12 + 4 << 4 + 1", "shift_expression")
        self.assertTrue(res, "Failed to parse a shift_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "12 + 4 << 4 + 1",
                         "Failed to get the correct node value")
        # relat expr
        res = expr.parse("12 < 4", "relational_expression")
        self.assertTrue(res, "Failed to parse a relational_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "12 < 4",
                         "Failed to get the correct node value")
        res = expr.parse("13 + 1 > 14 - 2", "relational_expression")
        self.assertTrue(res, "Failed to parse a relational_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "13 + 1 > 14 - 2",
                         "Failed to get the correct node value")
        # equality expr
        res = expr.parse("a == 4", "equality_expression")
        self.assertTrue(res, "Failed to parse a equality_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a == 4",
                         "Failed to get the correct node value")
        res = expr.parse("a == c < 5 != b", "equality_expression")
        self.assertTrue(res, "Failed to parse a equality_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a == c < 5 != b",
                         "Failed to get the correct node value")
        # and expr
        res = expr.parse("a & 4", "and_expression")
        self.assertTrue(res, "Failed to parse a and_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a & 4",
                         "Failed to get the correct node value")
        res = expr.parse("a == b & 4 != 7", "and_expression")
        self.assertTrue(res, "Failed to parse a and_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a == b & 4 != 7",
                         "Failed to get the correct node value")
        # xor expr
        res = expr.parse("a ^ 4", "xor_expression")
        self.assertTrue(res, "Failed to parse a xor_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a ^ 4",
                         "Failed to get the correct node value")
        res = expr.parse("a & b ^ 4 != 7", "xor_expression")
        self.assertTrue(res, "Failed to parse a xor_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a & b ^ 4 != 7",
                         "Failed to get the correct node value")
        # or expr
        res = expr.parse("a | 4", "or_expression")
        self.assertTrue(res, "Failed to parse a or_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a | 4",
                         "Failed to get the correct node value")
        res = expr.parse("a == b | 4 != 7", "or_expression")
        self.assertTrue(res, "Failed to parse a or_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a == b | 4 != 7",
                         "Failed to get the correct node value")
        # &&
        res = expr.parse("a && 4", "logical_and_expression")
        self.assertTrue(res, "Failed to parse a logical_and_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a && 4",
                         "Failed to get the correct node value")
        res = expr.parse("a == b && 4 != 7", "logical_and_expression")
        self.assertTrue(res, "Failed to parse a logical_and_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a == b && 4 != 7",
                         "Failed to get the correct node value")
        # ||
        res = expr.parse("a || 4", "logical_or_expression")
        self.assertTrue(res, "Failed to parse a logical_or_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a || 4",
                         "Failed to get the correct node value")
        res = expr.parse("a == b || 4 != 7", "logical_or_expression")
        self.assertTrue(res, "Failed to parse a logical_or_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a == b || 4 != 7",
                         "Failed to get the correct node value")
        # ? :
        res = expr.parse("a < 7 ? 4 : 8 + b", "conditional_expression")
        self.assertTrue(res, "Failed to parse a conditional_expression")
        self.assertTrue(type(res) is nodes.Ternary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a < 7 ? 4 : 8 + b",
                         "Failed to get the correct node value")
        # assignement
        res = expr.parse("a = 5 + 4 += b - d <<= 3", "assignement_expression")
        self.assertTrue(res, "Failed to parse a assignement_expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a = 5 + 4 += b - d <<= 3",
                         "Failed to get the correct node value")
        # expression
        res = expr.parse("a = 5, b = c, f >>= 42", "expression")
        self.assertTrue(res, "Failed to parse a expression")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a = 5, b = c, f >>= 42",
                         "Failed to get the correct node value")
        # ()
        res = expr.parse("(a * (1 + b))", "expression")
        self.assertTrue(res, "Failed to parse an () expression")
        self.assertTrue(type(res) is nodes.Paren,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "(a * (1 + b))",
                         "Failed to get the correct node value")
        # unary
        res = expr.parse("+a * -1 + -b", "expression")
        self.assertTrue(res, "Failed to parse an expression with unarys")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "+a * -1 + -b",
                         "Failed to get the correct node value")
        # post
        res = expr.parse("a++ * --c++ + ++b", "expression")
        self.assertTrue(res, "Failed to parse an expression with post/pre")
        self.assertTrue(type(res) is nodes.Binary,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a++ * --c++ + ++b",
                         "Failed to get the correct node value")
        # func call
        res = expr.parse("a()", "expression")
        self.assertTrue(res, "Failed to parse an expression with func")
        self.assertTrue(type(res) is nodes.Func,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a()",
                         "Failed to get the correct node value")
        res = expr.parse("a(b, 12 + 4, ++z)", "expression")
        self.assertTrue(res, "Failed to parse an expression with func")
        self.assertTrue(type(res) is nodes.Func,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a(b, 12 + 4, ++z)",
                         "Failed to get the correct node value")
        # array call
        res = expr.parse("tab[z * i]", "expression")
        self.assertTrue(
            res,
            "Failed to parse an expression with array indexes")
        self.assertTrue(type(res) is nodes.Array,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "tab[z * i]",
                         "Failed to get the correct node value")
        # field
        res = expr.parse("s.i", "expression")
        self.assertTrue(
            res,
            "Failed to parse an expression with array indexes")
        self.assertTrue(type(res) is nodes.Dot,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "s.i",
                         "Failed to get the correct node value")
        # field deref
        res = expr.parse("p->i", "expression")
        self.assertTrue(
            res,
            "Failed to parse an expression with array indexes")
        self.assertTrue(type(res) is nodes.Arrow,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "p->i",
                         "Failed to get the correct node value")

    def test_02_stmt(self):
        stmt = statement.Statement()
        # expression statement
        res = stmt.parse("a = 4 * 5 + 12;", "expression_statement")
        self.assertTrue(res, "Failed to parse a expression_statement")
        self.assertTrue(type(res) is nodes.ExprStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "a = 4 * 5 + 12;\n",
                         "Failed to get the correct node value")
        # while statement
        res = stmt.parse("while (a == 42)\n c = 52;\n", "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.While,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "while (a == 42)\n    c = 52;\n",
                         "Failed to get the correct node value")
        # if statement
        res = stmt.parse("if (a == 42)\n\tc = 52;\n", "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.If,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "if (a == 42)\n    c = 52;\n",
                         "Failed to get the correct node value")
        res = stmt.parse("if (a == 51)\n\tg = \"toto\";\nelse\n\td = 666;\n",
                         "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.If,
                        "Failed to set the correct type node")
        self.assertEqual(
            str(res.to_c()),
            "if (a == 51)\n    g = \"toto\";\nelse\n    d = 666;\n",
            "Failed to get the correct node value")
        # do statement
        res = stmt.parse("do\n{\n    x += 12;\n    " +
                         "g = x * 3;\n}\nwhile (z < 12);\n",
                         "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.Do,
                        "Failed to set the correct type node")
        self.assertEqual(
            str(res.to_c()),
            ("do\n%s{\n%sx += 12;\n%s" +
             "g = x * 3;\n%s}\nwhile (z < 12);\n") %
            (" " * 4, " " * 8, " " * 8, " " * 4),
            "Failed to get the correct node value")
        # return
        res = stmt.parse("return a == 12;\n", "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.Return,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "return a == 12;\n",
                         "Failed to get the correct node value")
        # goto
        res = stmt.parse("goto toto;\n", "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.Goto,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "goto toto;\n",
                         "Failed to get the correct node value")
        # label
        res = stmt.parse("toto:\n", "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.Label,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "toto:\n",
                         "Failed to get the correct node value")
        # case
        res = stmt.parse("case 12:\n", "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.Case,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "case 12:\n",
                         "Failed to get the correct node value")
        # switch statement
        res = stmt.parse("switch (a == 42)\n{\n    case 12:\n}\n",
                         "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.Switch,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "switch (a == 42)\n    {\n    " +
                         "    case 12:\n    }\n",
                         "Failed to get the correct node value")
        # for statement
        res = stmt.parse("for (b = 0; a < 12; b += 1)\n    b = 1;\n",
                         "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.For,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "for (b = 0; a < 12; b += 1)\n" +
                         "    b = 1;\n",
                         "Failed to get the correct node value")

    def test_03_decl(self):
        decl = declaration.Declaration()
        # basic transaction_unit
        res = decl.parse("int a;")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "int a;\n",
                         "Failed to pretty print correctly")
        res = decl.parse("int a= 42;")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "int a = 42;\n",
                         "Failed to pretty print correctly")
        res = decl.parse("int a= 42 * b - c;")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "int a = 42 * b - c;\n",
                         "Failed to pretty print correctly")
        # basic decl
        res = decl.parse("unsigned int a;")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "unsigned int a;\n",
                         "Failed to pretty print correctly")
        res = decl.parse("const int a;")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "const int a;\n",
                         "Failed to pretty print correctly")
        res = decl.parse("extern int a;")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "extern int a;\n",
                         "Failed to pretty print correctly")
        # normalize type
        res = decl.parse("unsigned long long a;")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "unsigned long long int a;\n",
                         "Failed to pretty print correctly")
        # pointer type
        res = decl.parse("char *ptr;")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "char *ptr;\n",
                         "Failed to pretty print correctly")
        res = decl.parse("char * const     ptr2;")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "char *const ptr2;\n",
                         "Failed to pretty print correctly")
        res = decl.parse("const char * ptr;")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "const char *ptr;\n",
                         "Failed to pretty print correctly")
        # copy decl and pointer type
        res = decl.parse("char a, *ptr, (* const b), (*z);")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(
            str(res.to_c()),
            "char a;\nchar *ptr;\nchar " +
            "(*const b);\nchar (*z);\n",
            "Failed to pretty print correctly")
        # array type
        res = decl.parse("char ptr[20];")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "char ptr[20];\n",
                         "Failed to pretty print correctly")
        res = decl.parse("char ptr[*];")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "char ptr[*];\n",
                         "Failed to pretty print correctly")
        # func type
        res = decl.parse("char ptr(int a, double v);")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "char ptr(int a, double v);\n",
                         "Failed to pretty print correctly")
        res = decl.parse("char ptr(int z, double const c);")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "char ptr(int z, const double c);\n",
                         "Failed to pretty print correctly")
        # paren type
        res = decl.parse("char (t);")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "char (t);\n",
                         "Failed to pretty print correctly")
        res = decl.parse("char (*t);")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "char (*t);\n",
                         "Failed to pretty print correctly")
        res = decl.parse("char t[20];")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "char t[20];\n",
                         "Failed to pretty print correctly")
        res = decl.parse("char t[20][6];")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "char t[20][6];\n",
                         "Failed to pretty print correctly")
        res = decl.parse("char t[20][6][42];")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "char t[20][6][42];\n",
                         "Failed to pretty print correctly")
        res = decl.parse("char *t[20];")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "char *t[20];\n",
                         "Failed to pretty print correctly")
        res = decl.parse("char *(t[20]);")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "char *(t[20]);\n",
                         "Failed to pretty print correctly")
        res = decl.parse("char (*t)(int a);")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "char (*t)(int a);\n",
                         "Failed to pretty print correctly")
        res = decl.parse("char (*f(int b, double c))(int a);")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(
            str(res.to_c()),
            "char (*f(int b, double c))(int a);\n",
            "Failed to pretty print correctly")
        res = decl.parse("char (*t)[20];")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "char (*t)[20];\n",
                         "Failed to pretty print correctly")
        res = decl.parse("char (*t)[20][6];")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "char (*t)[20][6];\n",
                         "Failed to pretty print correctly")
        res = decl.parse("""char *t[] = {"tutu", "toto", "tata", "titi"};""")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(
            str(res.to_c()),
            """char *t[] = { "tutu", "toto", "tata", "titi" };\n""",
            "Failed to pretty print correctly")
        res = decl.parse("""enum color {\n    RED,\n    BLUE,\n    WHITE};""")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(
            str(res.to_c()),
            """enum color {\n    RED,\n    BLUE,\n    WHITE};\n""",
            "Failed to pretty print correctly")
        res = decl.parse("enum id {\n    PJ = 1,\n    MOB = 2,\n" +
                         "    VOID = 0,\n    WALL = 3};")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "enum id {\n    PJ = 1,\n" +
                         "    MOB = 2,\n    VOID = 0,\n    WALL = 3};\n",
                         "Failed to pretty print correctly")
        res = decl.parse("struct pj {\n    int level;\n    int pv;\n    " +
                         "double px;\n    double py;\n    double pz;\n  " +
                         "  int ac;\n    int tac0;};")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), "struct pj {\n    int level;\n " +
                         "   int pv;\n    double px;\n    double py;\n  " +
                         "  double pz;\n    int ac;\n    int tac0;\n    };\n",
                         "Failed to pretty print correctly")

    def test_04_integration(self):
        # declaration|single_statement
        decl = declaration.Declaration()
        res = decl.parse("""int main(int ac, char **av)
    {
        int b = 42;
        b = b - 2;
    }
        """)
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(
            str(res.to_c()),
            "int main(int ac, char **av)\n{\n    " +
            "int b = 42;\n    b = b - 2;\n}\n",
            "Failed to pretty print correctly")
        # in global scope, implicit 'int'
        res = decl.parse("""a = 42;b(int, double);""")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(
            str(res.to_c()),
            """int a = 42;\nint b(int, double);\n""",
            "Failed to pretty print correctly")
        # cast
        decl = declaration.Declaration()
        res = decl.parse("""int NULL = (void *) 0;\n""")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), """int NULL = (void *) 0;\n""",
                         "Failed to pretty print correctly")
        # sizeof
        decl = declaration.Declaration()
        res = decl.parse("""int NULLSZ = sizeof (void *) * 2;\n""")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(
            str(res.to_c()),
            """int NULLSZ = sizeof (void *) * 2;\n""",
            "Failed to pretty print correctly")
        decl = declaration.Declaration()
        res = decl.parse("""int NULLSZ = sizeof z * 2;\n""")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(
            str(res.to_c()),
            """int NULLSZ = sizeof z * 2;\n""",
            "Failed to pretty print correctly")
        # typedef
        decl = declaration.Declaration()
        res = decl.parse("""typedef int ZZZ;\nZZZ a;\n""")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), """typedef int ZZZ;\nZZZ a;\n""",
                         "Failed to pretty print correctly")
        decl = declaration.Declaration()
        res = decl.parse("""typedef int ZZZ;\ntypedef ZZZ aaa;\naaa b;\n""")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(
            str(res.to_c()),
            "typedef int ZZZ;\ntypedef ZZZ aaa;\naaa b;\n",
            "Failed to pretty print correctly")
        # unary real/imag
        decl = declaration.Declaration()
        res = decl.parse("""float f = __real__ c;\n""")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), """float f = __real__ c;\n""",
                         "Failed to pretty print correctly")
        # attributes
        decl = declaration.Declaration()
        res = decl.parse("""float f(int a) __attribute__((noreturn));\n""")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(
            str(res.to_c()),
            "float f(int a) __attribute__((noreturn));\n",
            "Failed to pretty print correctly")
        decl = declaration.Declaration()
        res = decl.parse("struct s __attribute__((vector_size (16))) foo;\n")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        print(res.to_yml())
        self.assertEqual(
            str(res.to_c()),
            "struct s __attribute__((vector_size (16))) foo;\n",
            "Failed to pretty print correctly")
        decl = declaration.Declaration()
        res = decl.parse("""char *__attribute__((aligned(8))) *f;\n""")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(
            str(res.to_c()),
            "char *__attribute__((aligned(8))) *f;\n",
            "Failed to pretty print correctly")
        # compound literal
        decl = declaration.Declaration()
        res = decl.parse("""struct x a[] = (struct x*) {1, 2, 3};\n""")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(
            str(res.to_c()),
            "struct x a[] = (struct x *) { 1, 2, 3 };\n",
            "Failed to pretty print correctly")
        # compound expression
        decl = declaration.Declaration()
        res = decl.parse("struct x a[] = ({\n    " +
                         "int z = 42;\n    z += 5;\n    });\n")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(
            str(res.to_c()),
            "struct x a[] = ({\n    int z = 42;\n    z += 5;\n});\n",
            "Failed to pretty print correctly")
        # typeof
        decl = declaration.Declaration()
        res = decl.parse("""typeof(z) g;\n""")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(str(res.to_c()), """typeof(z) g;\n""",
                         "Failed to pretty print correctly")
        # __builtin_offsetof
        decl = declaration.Declaration()
        res = decl.parse("int a = __builtin_offsetof(struct bla, field1);\n")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt,
                        "Failed to set the correct type node")
        self.assertEqual(
            str(res.to_c()),
            "int a = __builtin_offsetof(struct bla, field1);\n",
            "Failed to pretty print correctly")
