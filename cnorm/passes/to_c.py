from pyrser import meta
from cnorm import nodes
from cnorm.passes import fmt

# DECL

@meta.add_method(nodes.Decl)
def to_c(self):
    lsdecl = []
    # storage
    if self._ctype._storage != nodes.Storages.AUTO:
        lsdecl.append(nodes.Storages.reverse_mapping[self._ctype._storage].lower())
    # iterator on declarator type
    itdt = reversed(self._ctype._decltypes)
    # add here FIRST?! QUAL if != pointer
    if type(self._ctype._decltypes[-1]) is nodes.QualType:
        item = next(itdt)
        lsdecl.append(nodes.Qualifiers.reverse_mapping[item._qualifier].lower())
    # type identifier
    lsdecl.append(self._ctype._identifier)
    # iter thru quals
    item = next(itdt, None)
    if item != None:
        item.type_to_c(itdt, lsdecl, self)
    return fmt.end(';\n', [fmt.sep(' ', lsdecl)])

@meta.add_method(nodes.Decl)
def get_declarator_str(self):
    return self._name

@meta.add_method(nodes.PointerType)
def type_to_c(self, lstypes, lsres, thedecl):
    lsres.append('*')
    item = next(lstypes, None)
    if item != None:
        return item.type_to_c(lstypes, lsres, thedecl)
    lsres.append(thedecl.get_declarator_str())

@meta.add_method(nodes.QualType)
def type_to_c(self, lstypes, lsres, thedecl):
    if self._qualifier != nodes.Qualifiers.AUTO:
        lsres.append(nodes.Qualifiers.reverse_mapping[self._qualifier].lower())
    item = next(lstypes, None)
    if item != None:
        return item.type_to_c(lstypes, lsres, thedecl)
    lsres.append(thedecl.get_declarator_str())

@meta.add_method(nodes.ParenType)
def type_to_c(self, lstypes, lsres, thedecl):
    paren = fmt.block('(', ')', [])
    lsres.append(paren)
    item = next(lstypes, None)
    if item != None:
        item.type_to_c(lstypes, paren.lsdata, thedecl)
    else:
        paren.lsdata.append(thedecl.get_declarator_str())

@meta.add_method(nodes.ArrayType)
def type_to_c(self, lstypes, lsres, thedecl, idxhead=None):
    if idxhead == None:
        idxdeclarator = len(lsres)
        lsres.append("declarator")
    else:
        idxdeclarator = idxhead
    ary = fmt.block('[', ']', [])
    lsres.append(ary)
    # for expression in []
    subexpr = self._expr
    if subexpr != None:
        subexpr.type_to_c(lstypes, ary.lsdata, thedecl)
    # for expression following []
    item = next(lstypes, None)
    if item != None:
        item.type_to_c(lstypes, lsres, thedecl, idxdeclarator)
    if idxhead == None:
        # finish so add declarator
        lsres[idxdeclarator] = thedecl.get_declarator_str()

# STATEMENT

@meta.add_method(nodes.If)
def to_c(self):
    lsif = [
                fmt.sep(" ", ["if", fmt.block('(', ')\n', [self.condition.to_c()])]),
                fmt.tab([self.thencond.to_c()])
            ]
    if self.elsecond != None:
        lsif.append("else\n")
        lsif.append(fmt.tab([self.elsecond.to_c()]))
    return fmt.sep("", lsif)

@meta.add_method(nodes.ExprStmt)
def to_c(self):
    return fmt.end(";\n", [self.expr.to_c()])

@meta.add_method(nodes.BlockStmt)
def to_c(self):
    lsblock = []
    for e in self.block:
        lsblock.append(e.to_c())
    return fmt.block("{\n", "}\n", [fmt.tab(lsblock)])

@meta.add_method(nodes.RootBlockStmt)
def to_c(self):
    lsblock = []
    for e in self.block:
        lsblock.append(e.to_c())
    return fmt.sep("", lsblock)

# EXPRESSION

@meta.add_method(nodes.Func)
def to_c(self):
    lsparams = []
    # TODO: add forward declarations
    for p in self.params:
        lsparams.append(p.to_c())
    return fmt.sep("", [self.call_expr.to_c(), fmt.block('(', ')', [fmt.sep(', ', lsparams)])])

@meta.add_method(nodes.Ternary)
def to_c(self):
    content = self.params[0].to_c() + ' ? ' + self.params[1].to_c()
    if len(self.params) > 2:
        content += ' : ' + self.params[2].to_c()
    return content

@meta.add_method(nodes.Binary)
def to_c(self):
    lsparams = []
    for p in self.params:
        lsparams.append(p.to_c())
    return fmt.sep(' ' + str(self.call_expr.to_c()) + ' ', lsparams)

@meta.add_method(nodes.Unary)
def to_c(self):
    return fmt.sep("", [self.call_expr.to_c(), self.params[0].to_c()])

@meta.add_method(nodes.Terminal)
def to_c(self):
    return self.value
