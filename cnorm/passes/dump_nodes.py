# This pass is for debug only
from pyrser import meta
from cnorm import nodes

@meta.add_method(nodes.Decl)
def dump_nodes(self, idx=0):
    idt = ' ' * (idx + 1)
    txtdecl = ""
    txtdecl += "{}name = {}\n".format(idt, self._name)
    txtdecl += "{}storage = Storages.{}\n".format(idt, nodes.Storages.reverse_mapping[self._ctype._storage])
    txttypes = ""
    for t in self._ctype._decltypes:
        if isinstance(t, nodes.DeclType):
            txttypes += t.dump_nodes(idx + 2)
    txtdecl += "{}DeclType :\n{}".format(idt, txttypes)
    txtdecl += "{}Type :{}\n".format(idt, self._ctype._identifier)
    txtdecl = "{}Decl :\n{}".format(' ' * idx, txtdecl)
    return txtdecl

@meta.add_method(nodes.DeclType)
def dump_nodes(self, idx=0):
    txttypes = "{}{}\n".format(' ' * idx, type(self))
    return txttypes

@meta.add_method(nodes.PrimaryType)
def dump_nodes(self, idx=0):
    idt = ' ' * (idx + 1)
    content = "{}identifier = {}\n".format(idt, self._identifier)
    txttypes = "{}{} :\n{}".format(' ' * idx, type(self), content)
    return txttypes

@meta.add_method(nodes.QualType)
def dump_nodes(self, idx=0):
    idt = ' ' * (idx + 1)
    content = "{}qualifier = Qualifiers.{}\n".format(idt, nodes.Qualifiers.reverse_mapping[self._qualifier])
    txttypes = "{}{} :\n{}".format(' ' * idx, type(self), content)
    return txttypes

## EXPR

@meta.add_method(nodes.Func)
def dump_nodes(self, idx=0):
    idt = ' ' * idx
    txtparams = ""
    for p in self.params:
        txtparams += p.dump_nodes(idx + 1)
    return "{}Func:{} {}:\n{}".format(idt, type(self), self.call_expr.dump_nodes(), txtparams)

@meta.add_method(nodes.Terminal)
def dump_nodes(self, idx=0):
    idt = ' ' * idx
    return "{}Terminal:{}={}\n".format(idt, type(self), self.value)

## STMT

@meta.add_method(nodes.Stmt)
def dump_nodes(self, idx=0):
    idt = ' ' * idx
    content = ""
    if hasattr(self, 'init'):
        content += idt + ' init:' + self.init.dump_nodes(idx + 1)
    if hasattr(self, 'condition'):
        content += idt + ' condition:' + self.condition.dump_nodes(idx + 1)
    if hasattr(self, 'thencond'):
        content += idt + ' thencond:' + self.thencond.dump_nodes(idx + 1)
    if hasattr(self, 'elsecond'):
        content += idt + ' elsecond:' + self.elsecond.dump_nodes(idx + 1)
    if hasattr(self, 'increment'):
        content += idt + ' increment:' + self.increment.dump_nodes(idx + 1)
    if hasattr(self, 'body'):
        content += idt + ' body:' + self.body.dump_nodes(idx + 1)
    if hasattr(self, 'value'):
        content += idt + ' value:' + self.value.dump_nodes(idx + 1)
    if hasattr(self, 'block'):
        for b in self.block:
            content += idt + ' block:' + b.dump_nodes(idx + 1)
    if hasattr(self, 'expr'):
        content += idt + ' expr:' + self.expr.dump_nodes(idx + 1)
    return "{}Statement:{} :\n{}\n".format(idt, type(self), content)
