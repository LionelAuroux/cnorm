from pyrser import meta
from cnorm.nodes import *

@meta.add_method(RootBlockStmt)
def declfuncs(self):
    """generator on all declaration of functions"""
    for f in self.body:
        if (hasattr(f, '_ctype')
                and isinstance(f._ctype, FuncType)
                and not hasattr(f, 'body')):
            yield f

@meta.add_method(RootBlockStmt)
def implfuncs(self):
    """generator on all implemented functions"""
    for f in self.body:
        if (hasattr(f, '_ctype')
                and isinstance(f._ctype, FuncType)
                and hasattr(f, 'body')):
            yield f

@meta.add_method(BlockStmt)
def defvars(self):
    """generator on all definition of variable"""
    for f in self.body:
        if (hasattr(f, '_ctype')
                and f._name != ''
                and not isinstance(f._ctype, FuncType)
                and f._ctype._storage != Storages.TYPEDEF):
            yield f

@meta.add_method(BlockStmt)
def deftypes(self):
    """generator on all definition of type"""
    for f in self.body:
        if (hasattr(f, '_ctype')
                and (f._ctype._storage == Storages.TYPEDEF
                    or (f._name == '' and isinstance(f._ctype, ComposedType)))):
            yield f
