import unittest
from pyrser import meta
from pyrser import error
from pyrser import grammar
from cnorm import nodes
from cnorm.parsing import literal, expression, statement, declaration

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
        res = expr.parse("12 * b / c %42 / e", "multiplicative_expression")
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
        # ? :
        res = expr.parse("a < 7 ? 4 : 8 + b", "conditional_expression")
        self.assertTrue(res, "Failed to parse a conditional_expression")
        self.assertTrue(type(res) is nodes.Ternary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a < 7 ? 4 : 8 + b", "Failed to get the correct node value")
        # assignement
        res = expr.parse("a = 5 + 4 += b - d <<= 3", "assignement_expression")
        self.assertTrue(res, "Failed to parse a assignement_expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a = 5 + 4 += b - d <<= 3", "Failed to get the correct node value")
        # expression
        res = expr.parse("a = 5, b = c, f >>= 42", "expression")
        self.assertTrue(res, "Failed to parse a expression")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a = 5, b = c, f >>= 42", "Failed to get the correct node value")
        # ()
        res = expr.parse("(a * (1 + b))", "expression")
        self.assertTrue(res, "Failed to parse an () expression")
        self.assertTrue(type(res) is nodes.Paren, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "(a * (1 + b))", "Failed to get the correct node value")
        # unary
        res = expr.parse("+a * -1 + -b", "expression")
        self.assertTrue(res, "Failed to parse an expression with unarys")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "+a * -1 + -b", "Failed to get the correct node value")
        # post
        res = expr.parse("a++ * --c++ + ++b", "expression")
        self.assertTrue(res, "Failed to parse an expression with post/pre")
        self.assertTrue(type(res) is nodes.Binary, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a++ * --c++ + ++b", "Failed to get the correct node value")
        # func call
        res = expr.parse("a()", "expression")
        self.assertTrue(res, "Failed to parse an expression with func")
        self.assertTrue(type(res) is nodes.Func, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a()", "Failed to get the correct node value")
        res = expr.parse("a(b, 12 + 4, ++z)", "expression")
        self.assertTrue(res, "Failed to parse an expression with func")
        self.assertTrue(type(res) is nodes.Func, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a(b, 12 + 4, ++z)", "Failed to get the correct node value")
        # array call
        res = expr.parse("tab[z * i]", "expression")
        self.assertTrue(res, "Failed to parse an expression with array indexes")
        self.assertTrue(type(res) is nodes.Array, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "tab[z * i]", "Failed to get the correct node value")
        # field
        res = expr.parse("s.i", "expression")
        self.assertTrue(res, "Failed to parse an expression with array indexes")
        self.assertTrue(type(res) is nodes.Dot, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "s.i", "Failed to get the correct node value")
        # field deref
        res = expr.parse("p->i", "expression")
        self.assertTrue(res, "Failed to parse an expression with array indexes")
        self.assertTrue(type(res) is nodes.Arrow, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "p->i", "Failed to get the correct node value")

    def test_02_stmt(self):
        stmt = statement.Statement()
        # expression statement
        res = stmt.parse("a = 4 * 5 + 12;", "expression_statement")
        self.assertTrue(res, "Failed to parse a expression_statement")
        self.assertTrue(type(res) is nodes.ExprStmt, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "a = 4 * 5 + 12;\n", "Failed to get the correct node value")
        # while statement
        res = stmt.parse("while (a == 42)\n\tc = 52;\n", "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.While, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "while (a == 42)\n    c = 52;\n", "Failed to get the correct node value")
        # if statement
        res = stmt.parse("if (a == 42)\n\tc = 52;\n", "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.If, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "if (a == 42)\n    c = 52;\n", "Failed to get the correct node value")
        res = stmt.parse("if (a == 51)\n\tg = \"toto\";\nelse\n\td = 666;\n", "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.If, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "if (a == 51)\n    g = \"toto\";\nelse\n    d = 666;\n",
                        "Failed to get the correct node value")
        # do statement
        res = stmt.parse("do\n{\n    x += 12;\n    g = x * 3;\n}\nwhile (z < 12);\n", "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.Do, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "do\n%s{\n%sx += 12;\n%sg = x * 3;\n%s}\nwhile (z < 12);\n" % (" " * 4, " " * 8, " " * 8, " " * 4),
                        "Failed to get the correct node value")
        # return
        res = stmt.parse("return a == 12;\n", "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.Return, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "return a == 12;\n",
                        "Failed to get the correct node value")
        # goto
        res = stmt.parse("goto toto;\n", "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.Goto, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "goto toto;\n",
                        "Failed to get the correct node value")
        # label
        res = stmt.parse("toto:\n", "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.Label, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "toto:\n",
                        "Failed to get the correct node value")
        # case
        res = stmt.parse("case 12:\n", "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.Case, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "case 12:\n",
                        "Failed to get the correct node value")
        # switch statement
        res = stmt.parse("switch (a == 42)\n{\n    case 12:\n}\n", "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.Switch, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "switch (a == 42)\n    {\n        case 12:\n    }\n", "Failed to get the correct node value")
        # for statement
        res = stmt.parse("for (b = 0; a < 12; b += 1)\n    b = 1;\n", "labeled_statement")
        self.assertTrue(res, "Failed to parse a labeled_statement")
        self.assertTrue(type(res) is nodes.For, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "for (b = 0; a < 12; b += 1)\n    b = 1;\n", "Failed to get the correct node value")
        
    def test_03_decl(self):
        decl = declaration.Declaration()
        # basic transaction_unit
        res = decl.parse("int a;")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "int a;\n", "Failed to pretty print correctly")
        # basic decl
        res = decl.parse("unsigned int a;", "declaration")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.Decl, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "unsigned int a;\n", "Failed to pretty print correctly")
        res = decl.parse("const int a;", "declaration")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.Decl, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "const int a;\n", "Failed to pretty print correctly")
        res = decl.parse("extern int a;", "declaration")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.Decl, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "extern int a;\n", "Failed to pretty print correctly")
        # normalize type
        res = decl.parse("unsigned long long a;", "declaration")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.Decl, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "unsigned long long int a;\n", "Failed to pretty print correctly")
        # pointer type
        res = decl.parse("char *ptr;", "declaration")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.Decl, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "char *ptr;\n", "Failed to pretty print correctly")
        res = decl.parse("char * const     ptr2;", "declaration")
        #print(repr(res))
        print("char *const ptr; = %s" % str(res.to_c()))
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.Decl, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "char *const ptr2;\n", "Failed to pretty print correctly")
        
        res = decl.parse("const char * ptr;", "declaration")
        #print(repr(res))
        #print("const char * ptr; ?? %s" % str(res.to_c()))
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.Decl, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "const char *ptr;\n", "Failed to pretty print correctly")
        # copy decl and pointer type
        res = decl.parse("char a, *ptr, b;")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "char a;\nchar *ptr;\nchar b;\n",
                "Failed to pretty print correctly")
        # array type
        res = decl.parse("char ptr[20];")
        print("%s" % str(res.to_c()))
        print("%s" % str(res))
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "char ptr[20];\n", "Failed to pretty print correctly")
        res = decl.parse("char ptr[*];")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "char ptr[*];\n", "Failed to pretty print correctly")
        # func type
        res = decl.parse("char ptr(int a, double v);")
        print(str(res.to_c()))
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "char ptr(int a);\n", "Failed to pretty print correctly")
        res = decl.parse("char ptr(int z, double const c);")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "char ptr(int z, const double c);\n",
                "Failed to pretty print correctly")
        # paren type
        res = decl.parse("char (t);")
        #print(repr(res))
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "char(t);\n",
                "Failed to pretty print correctly")
        res = decl.parse("char (*t);")
        #print(repr(res))
        #print(str(res.to_c()))
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "char(*t);\n",
                "Failed to pretty print correctly")
        res = decl.parse("char *t[20];")
        #print(repr(res))
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "char *t[20];\n",
                "Failed to pretty print correctly")
        res = decl.parse("char *(t[20]);")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "char *(t[20]);\n",
                "Failed to pretty print correctly")
        res = decl.parse("char (*t)[20];")
        self.assertTrue(res, "Failed to parse a cdecl")
        self.assertTrue(type(res) is nodes.RootBlockStmt, "Failed to set the correct type node")
        self.assertTrue(str(res.to_c()) == "char(*t)[20];\n",
                "Failed to pretty print correctly")


