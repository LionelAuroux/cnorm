import unittest
from cnorm import nodes
from cnorm.passes import dump_nodes
from cnorm.passes import to_c
from cnorm.passes import fmt

class InternalCnorm_Test(unittest.TestCase):

    def test_00(self):
        """Test pprint functions"""
        data = fmt.block("{", "}", ['a', 'b', 'c'])
        self.assertEqual(str(data), "{abc}", "Failed to format block")
        data = fmt.sep(",", ['a', 'b', 'c'])
        self.assertEqual(str(data), "a,b,c", "Failed to format sep")
        data = fmt.block("{", "}", [fmt.sep(",", ['a', 'b', 'c'])])
        self.assertEqual(str(data), "{a,b,c}", "Failed to format block/sep")
        data = fmt.sep(",", [fmt.block("{", "}", ['a', 'b']), fmt.block("{", "}", ['c', 'd'])])
        self.assertEqual(str(data), "{ab},{cd}", "Failed to format sep/block")
        data = fmt.end(";\n", ['a', 'b', 'c'])
        self.assertEqual(str(data), "a;\nb;\nc;\n", "Failed to format a list end by ';\n'")
        data = fmt.tab([fmt.tab([fmt.block("{\n", "}\n", [fmt.tab(['a\n', 'b\n', 'c\n'])])])])
        self.assertEqual(str(data), "%s{\n%sa\n%sb\n%sc\n%s}\n" %
            (" " * 4, " " * 8, " " * 8, " " * 8, " " * 4),
            "Failed to indent")
        data = fmt.block("{\n", "}\n", [fmt.tab(['a\n', fmt.block("{\n", "}\n", [fmt.tab(['d\n', 'e\n', 'f\n'])]), 'c\n'])])
        self.assertEqual(str(data), "{\n%sa\n%s{\n%sd\n%se\n%sf\n%s}\n%sc\n}\n" %
            (" " * 4, " " * 4, " " * 8, " " * 8, " " * 8, " " * 4, " " * 4),
            "Failed to indent")
        data = fmt.block("{\n", "}\n", [fmt.tab([fmt.block("{\n", "}\n", [fmt.tab([fmt.end(";\n", ["a", "b", "c"])])])])])
        self.assertEqual("%s" % data, "{\n%s{\n%sa;\n%sb;\n%sc;\n%s}\n}\n" %
                         (" " * 4, " " * 8, " " * 8, " " * 8, " " * 4),
                         "Failed to auto indent")

    def test_01_basicdecl(self):
        """Test cnorm nodes construction"""
        d = nodes.Decl('a')
        d.ctype.add_in(nodes.QualType(nodes.Qualifiers.VOLATILE))
        d.ctype.add_in(nodes.PointerType())
        d.ctype.add_in(nodes.QualType(nodes.Qualifiers.CONST))
        self.assertEqual(str(d.to_c()), "volatile int * const a;\n",
            "Failed to convert to C")
        d.ctype.add_in(nodes.ParenType())
        d.ctype.add_in(nodes.PointerType())
        self.assertEqual(str(d.to_c()), "volatile int * const (*a);\n",
            "Failed to convert to C")
        d.ctype.add_in(nodes.ArrayType())
        d.ctype.add_in(nodes.ArrayType())
        self.assertEqual(str(d.to_c()), "volatile int * const (*a[][]);\n",
            "Failed to convert to C")

    def test_02_basicexpr(self):
        """Test cnorm expression nodes"""
        e = nodes.Id('cool')
        self.assertEqual(str(e.to_c()), "cool", "Failed to convert to C")
        e = nodes.Literal('42')
        self.assertEqual(str(e.to_c()), "42", "Failed to convert to C")
        e = nodes.Binary(nodes.Raw('+'), [nodes.Id('a'), nodes.Literal('12')])
        self.assertEqual(str(e.to_c()), "a + 12", "Failed to convert to C")
        e = nodes.Func(nodes.Id('f'), [nodes.Id('a'), nodes.Literal('12')])
        self.assertEqual(str(e.to_c()), "f(a, 12)", "Failed to convert to C")
        e = nodes.Ternary('', [nodes.Id('a'), nodes.Literal('1'), nodes.Literal('2')])
        self.assertEqual(str(e.to_c()), "a ? 1 : 2", "Failed to convert to C")

    def test_03_basicstmt(self):
        """Test cnorm statement nodes"""
        c = nodes.Binary(nodes.Raw('<'), [nodes.Id('a'), nodes.Literal('12')])
        thencond = nodes.ExprStmt(nodes.Binary(nodes.Raw('='), [nodes.Id('b'), nodes.Literal('1')]))
        elsecond = nodes.ExprStmt(nodes.Binary(nodes.Raw('='), [nodes.Id('c'), nodes.Literal('2')]))
        s = nodes.If(c, thencond, elsecond)
        self.assertEqual(str(s.to_c()), "if (a < 12)\n%sb = 1;\nelse\n%sc = 2;\n" % (" " * 4, " " * 4), "Failed to convert to C")
        s = nodes.RootBlockStmt([thencond, nodes.BlockStmt([thencond, elsecond]), elsecond])
        self.assertEqual(str(s.to_c()), "b = 1;\n{\n%sb = 1;\n%sc = 2;\n}\nc = 2;\n" % (" " * 4, " " * 4), "Failed to convert to C")
