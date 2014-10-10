from cnorm.nodes import *
from pyrser import meta, parsing

import pickle
import pickletools
import weakref

@meta.add_method(parsing.Node)
def to_pickle(self) -> bytes:
    buf = pickle.dumps(self)
    return pickletools.optimize(buf)

@meta.add_method(parsing.Node)
def save_pickle(self, fname: str):
    with open(fname, "wb") as f:
        pickle.dump(self, f)

def from_pickle(thing) -> parsing.Node:
    if isinstance(thing, bytes):
        return pickle.loads(thing)
    if isinstance(thing, str):
        with open(thing, "rb") as f:
            return pickle.load(f)

@meta.add_method(BlockStmt)
def __getstate__(self):
    state = self.__dict__.copy()
    if 'types' in state:
        del state['types']
    if 'vars' in state:
        del state['vars']
    return state

@meta.add_method(BlockStmt)
def __setstate__(self, state: dict):
    from cnorm.passes import visit
    self.__dict__.update(state)
    #TODO: reconstruct types...
    for t in self.deftypes():
        if not hasattr(self, 'types'):
            self.types = {}
        self.types[t._name] = weakref.ref(t)
    return state
