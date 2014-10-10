import unittest
from pyrser.passes import to_yml
from cnorm.parsing.declaration import *
from cnorm.passes import to_c, pickle

class CnormPickle_Test(unittest.TestCase):

    def test_01_basic(self):
        """Basic pickle function test"""
        decl = Declaration()
        src = "void *const (*func(int))(char *);"
        res = decl.parse(src)
        buf = res.to_pickle()
        res2 = pickle.from_pickle(buf)
        self.assertEqual(res, res2, "Fail to save/restore from variable with pickle")
        src = "double *volatile * (*func(int))(char *);"
        res = decl.parse(src)
        buf = res.save_pickle("/tmp/test.pickle")
        res2 = pickle.from_pickle("/tmp/test.pickle")
        self.assertEqual(res, res2, "Fail to save/restore from file with pickle")
