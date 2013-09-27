import unittest
from pyrser.passes import to_yml
from cnorm import nodes
from cnorm.passes import to_c

class InternalCnorm_Test(unittest.TestCase):

    def test_01_basicdecl(self):
        """Test cnorm nodes construction"""
        d = nodes.Decl('a')
        self.assertEqual(str(d.to_c()), "int a;\n",
            "Failed to convert to C")
        vars(d)["_name"] = 'b'
        qual = d.ctype
        qual = qual.link(nodes.PointerType())
        qual = qual.link(nodes.QualType(nodes.Qualifiers.VOLATILE))
        self.assertEqual(str(d.to_c()), "volatile int *b;\n",
            "Failed to convert to C")
        vars(d)["_name"] = 'c'
        qual = d.ctype
        qual = qual.link(nodes.QualType(nodes.Qualifiers.CONST))
        qual = qual.link(nodes.PointerType())
        qual = qual.link(nodes.QualType(nodes.Qualifiers.VOLATILE))
        self.assertEqual(str(d.to_c()), "volatile int *const c;\n",
            "Failed to convert to C")
        vars(d)["_name"] = 'd'
        qual = d.ctype
        qual = qual.link(nodes.PointerType())
        qual = qual.link(nodes.ParenType())
        qual = qual.link(nodes.QualType(nodes.Qualifiers.CONST))
        qual = qual.link(nodes.PointerType())
        qual = qual.link(nodes.QualType(nodes.Qualifiers.VOLATILE))
        self.assertEqual(str(d.to_c()), "volatile int *const (*d);\n",
            "Failed to convert to C")
        vars(d)["_name"] = 'e'
        qual = d.ctype
        qual = qual.link(nodes.ArrayType())
        qual = qual.link(nodes.ArrayType())
        qual = qual.link(nodes.PointerType())
        qual = qual.link(nodes.ParenType())
        qual = qual.link(nodes.QualType(nodes.Qualifiers.CONST))
        qual = qual.link(nodes.PointerType())
        qual = qual.link(nodes.QualType(nodes.Qualifiers.VOLATILE))
        self.assertEqual(str(d.to_c()), "volatile int *const (*e[][]);\n",
            "Failed to convert to C")
        d = nodes.Decl('tf', nodes.PrimaryType('double'))
        qual = d.ctype
        qual = qual.link(nodes.ArrayType())
        qual = qual.link(nodes.QualType(nodes.Qualifiers.CONST))
        self.assertEqual(str(d.to_c()), "const double tf[];\n",
            "Failed to convert to C")
        ft = nodes.FuncType('double', [nodes.Decl('a', nodes.PrimaryType('size_t')),
                            nodes.Decl('b', nodes.PrimaryType('int'))])
        f = nodes.Decl('f', ft)
        self.assertEqual(str(f.to_c()), "double f(size_t a, int b);\n",
            "Failed to convert to C")
        f = nodes.Decl('f', nodes.PrimaryType('double'))
        qual = f.ctype
        qual = qual.link(nodes.PointerType())
        qual = qual.link(nodes.ParenType([nodes.Decl('a', nodes.PrimaryType('size_t')), nodes.Decl('b', nodes.PrimaryType('int'))]))
        self.assertEqual(str(f.to_c()), "double (*f)(size_t a, int b);\n",
            "Failed to convert to C")
        ft2 = nodes.FuncType('double', [nodes.Decl('p', nodes.PrimaryType('ext_func'))])
        f2 = nodes.Decl('f2', ft2)
        qual = f2.ctype
        qual = qual.link(nodes.PointerType())
        qual = qual.link(nodes.ParenType([nodes.Decl('a', nodes.PrimaryType('size_t')),
                nodes.Decl('b', nodes.PrimaryType('int'))]))
        self.assertEqual(str(f2.to_c()), "double (*f2(ext_func p))(size_t a, int b);\n",
            "Failed to convert to C")
        ## test CTYPE construction
        ctype = nodes.makeCType('int')
        d = nodes.Decl('ghh', ctype)
        self.assertEqual(str(d.to_c()), "int ghh;\n",
            "Failed to convert to C")
        ctype = nodes.makeCType('const')
        ctype = nodes.makeCType('double', ctype)
        d = nodes.Decl('ghh', ctype)
        self.assertEqual(str(d.to_c()), "const double ghh;\n",
            "Failed to convert to C")
        ctype = nodes.makeCType('__int8', ctype)
        ctype = nodes.makeCType('__unsigned__', ctype)
        ctype = nodes.makeCType('extern', ctype)
        d = nodes.Decl('ghh', ctype)
        self.assertEqual(str(d.to_c()), "extern const unsigned __int8 ghh;\n",
            "Failed to convert to C")
        d = nodes.Decl('GG', nodes.PrimaryType('XXX'))
        qual = d.ctype
        qual = qual.link(nodes.QualType(nodes.Qualifiers.CONST))
        qual = qual.link(nodes.PointerType())
        qual = qual.link(nodes.ParenType())
        qual = qual.link(nodes.ArrayType(nodes.Literal("12")))
        qual = qual.link(nodes.ParenType())
        qual = qual.link(nodes.ArrayType(nodes.Literal("66")))
        self.assertEqual(str(d.to_c()), "XXX ((*const GG)[12])[66];\n",
            "Failed to convert to C")

        ft = nodes.FuncType('HHHHH', [nodes.Decl('a', nodes.PrimaryType('size_t')), nodes.Decl('b', nodes.PrimaryType('int'))])
        d = nodes.Decl('func', ft)
        self.assertEqual(str(d.to_c()), "HHHHH func(size_t a, int b);\n",
            "Failed to convert to C")

    def test_02_basicexpr(self):
        """Test cnorm expression nodes"""
        e = nodes.Id('cool')
        self.assertEqual(str(e.to_c()), "cool", "Failed to convert to C")
        e = nodes.Literal('42')
        self.assertEqual(str(e.to_c()), "42", "Failed to convert to C")
        e = nodes.Binary(nodes.Raw('+'), [nodes.Id('a'), nodes.Literal('12')])
        p = e
        self.assertEqual(str(e.to_c()), "a + 12", "Failed to convert to C")
        e = nodes.Func(nodes.Id('f'), [nodes.Id('a'), nodes.Literal('12')])
        self.assertEqual(str(e.to_c()), "f(a, 12)", "Failed to convert to C")
        e = nodes.Ternary('', [nodes.Id('a'), nodes.Literal('1'), nodes.Literal('2')])
        self.assertEqual(str(e.to_c()), "a ? 1 : 2", "Failed to convert to C")
        e = nodes.Unary(nodes.Raw('++'), [nodes.Id('a')])
        self.assertEqual(str(e.to_c()), "++a", "Failed to convert to C")
        e = nodes.Paren('', [p])
        self.assertEqual(str(e.to_c()), "(a + 12)", "Failed to convert to C")
        e = nodes.Post(nodes.Raw('++'), [nodes.Id('a')])
        self.assertEqual(str(e.to_c()), "a++", "Failed to convert to C")
        e = nodes.Array(nodes.Id('tab'), [p])
        self.assertEqual(str(e.to_c()), "tab[a + 12]", "Failed to convert to C")
        e = nodes.Dot(nodes.Id('s'), [nodes.Id('a')])
        self.assertEqual(str(e.to_c()), "s.a", "Failed to convert to C")
        e = nodes.Arrow(nodes.Id('s'), [nodes.Id('a')])
        self.assertEqual(str(e.to_c()), "s->a", "Failed to convert to C")

    def test_03_basicstmt(self):
        """Test cnorm statement nodes"""
        c = nodes.Binary(nodes.Raw('<'), [nodes.Id('a'), nodes.Literal('12')])
        thencond = nodes.ExprStmt(nodes.Binary(nodes.Raw('='), [nodes.Id('b'), nodes.Literal('1')]))
        elsecond = nodes.ExprStmt(nodes.Binary(nodes.Raw('='), [nodes.Id('c'), nodes.Literal('2')]))
        s = nodes.If(c, thencond, elsecond)
        self.assertEqual(str(s.to_c()), "if (a < 12)\n{tab}b = 1;\nelse\n{tab}c = 2;\n".format(tab=" " * 4),
                "Failed to convert to C")
        s = nodes.RootBlockStmt([thencond, nodes.BlockStmt([thencond, elsecond]), elsecond])
        self.assertEqual(str(s.to_c()), "b = 1;\n{{\n{tab}b = 1;\n{tab}c = 2;\n}}\nc = 2;\n".format(tab=" " * 4),
                "Failed to convert to C")
        s = nodes.While(c, thencond)
        self.assertEqual(str(s.to_c()), "while (a < 12)\n{tab}b = 1;\n".format(tab=" " * 4),
                         "Failed to convert to C")
        s = nodes.Do(c, thencond)
        self.assertEqual(str(s.to_c()), "do\n{tab}b = 1;\nwhile (a < 12);\n".format(tab=" " * 4),
                         "Failed to convert to C")
        s = nodes.Return(c)
        self.assertEqual(str(s.to_c()), "return a < 12;\n",
                         "Failed to convert to C")
        s = nodes.Goto(c)
        self.assertEqual(str(s.to_c()), "goto a < 12;\n",
                         "Failed to convert to C")
        s = nodes.Case(c)
        self.assertEqual(str(s.to_c()), "case a < 12:\n",
                         "Failed to convert to C")
        s = nodes.Label("Cool")
        self.assertEqual(str(s.to_c()), "Cool:\n",
                         "Failed to convert to C")
        s = nodes.Switch(c, thencond)
        self.assertEqual(str(s.to_c()), "switch (a < 12)\n{tab}b = 1;\n".format(tab=" " * 4),
                         "Failed to convert to C")
        init = nodes.ExprStmt(nodes.Binary(nodes.Raw('='), [nodes.Id('b'), nodes.Literal('0')]))
        cond = nodes.ExprStmt(c)
        inc = nodes.Binary(nodes.Raw('+='), [nodes.Id('b'), nodes.Literal('1')])
        s = nodes.For(init, cond, inc, thencond)
        self.assertEqual(str(s.to_c()), "for (b = 0; a < 12; b += 1)\n{tab}b = 1;\n".format(tab=" " * 4),
                         "Failed to convert to C")

