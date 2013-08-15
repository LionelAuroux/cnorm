#!/usr/bin/env python3

"""
        Test Basic parsing for a little language
"""
import sys
from pyrser import grammar, meta

class   TypeLang(grammar.Grammar):
        grammar = """
        main ::= [id:id ]+
        ;
        """
        entry = "main"

if __name__ == "__main__":
        print("DEBUT:%s" % sys.path)
        oAst = {}
        print("DEBUT2")
        try:
                oLang = TypeLang()
        except IOError as e:
                print("Detail:%s" % repr(e))
        print("DEBUT3")
        oAst = oLang.parse("""
                cool ca marche
                """)
        print("DEBUT4")
        print(repr(oAst))
