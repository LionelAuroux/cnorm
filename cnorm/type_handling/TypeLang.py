#!/usr/bin/env python2.7

"""
        Test Basic parsing for a little language
"""
import sys
from pyrser.parsing import Parsing
from pyrser.grammar import Grammar

class   TypeLang(Grammar):
        """
        main ::= [#identifier:id ]+
        ;
        """
        def     __init__(self):
                Grammar.__init__(self, TypeLang, TypeLang.__doc__)

if __name__ == "__main__":
        print("DEBUT:%s" % sys.path)
        oAst = {}
        print("DEBUT2")
        try:
                oLang = TypeLang()
        except IOError as e:
                print("Detail:%s" % repr(e))
        print("DEBUT3")
        oLang.parse("""
                cool ca marche
                """, oAst, 'main')
        print("DEBUT4")
        print(repr(oAst))
