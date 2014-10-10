import unittest
from pyrser.passes import to_yml
from cnorm.parsing.declaration import *
#from cnorm.passes.visit import *
from cnorm.passes import to_c,visit

class CnormVisit_Test(unittest.TestCase):

    def test_01_basic(self):
        """Basic visit function test"""
        decl = Declaration()
        res = decl.parse("""
            int a;
            int b = 3;
            enum A pouet;
            enum A {R,S,T};
            union U pif;
            union U {
                int k;
                double b;
            };
            struct J nia;
            int f1();
            int g(int) {}
            struct J {
                int k;
                double b;
            };
            double (*f2(char**));
            typedef int size_t;
            size_t  pim;
            int main(int ac, char **av)
            {
                return 42;
            }
        """)
        scollect = set()
        for d in res.declfuncs():
            scollect |= {d._name}
        self.assertEqual(scollect, {'f1', 'f2'}, "Fail iter correctly")
        scollect = set()
        for d in res.implfuncs():
            scollect |= {d._name}
        self.assertEqual(scollect, {'g', 'main'}, "Fail iter correctly")
        scollect = set()
        for d in res.defvars():
            scollect |= {d._name}
        self.assertEqual(scollect, {'pouet', 'pif', 'a', 'b', 'nia', 'pim'}, "Fail iter correctly")
        scollect = set()
        for d in res.deftypes():
            if d._name != '':
                scollect |= {d._name}
            else:
                scollect |= {d._ctype.identifier}
        self.assertEqual(scollect, {'size_t', 'U', 'A', 'J'}, "Fail iter correctly")
