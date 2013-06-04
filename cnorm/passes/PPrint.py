#!/usr/bin/env python3
"""
        This Pass print C code from a CNorm AST Tree
"""

class   FmtItemEndBy:
        """
        Usefull class for

        >>> a = FmtItemEndBy(';')
        >>> vars(a)
        {'endby': ';', 'oneItem': None}
        """

        def     __init__(self, endby):
                self.oneItem = None
                self.endby = endby

class   FmtListSepBy:
        """
        Usefull class for
        """

        def     __init__(self, sep):
                self.lstItem = []
                self.sep = sep

class   FmtBlock:
        """
        """
        def     __init__(self, beginby, endby):
                self.beginby = beginby
                self.endby = endby
                
if __name__ == "__main__":
        import doctest
        doctest.testmod(verbose=True)
