from pyrser import meta, fmt
from cnorm import nodes


# DECL

def flat(l, out):
    for i in l:
        if type(i) is list:
            flat(i, out)
        else:
            out.append(i)

def catlist(l):
    t = ""
    for i in l:
        if t == "":
            t = i
        elif t[-1] == "(" or t[-1] == ")" or t[-1] == "[" \
            or t[-1] == "]" or t[-1] == "*" or i[0] == "[" or i[0] == ")" or i[0] == "(":
            t += i
        else:
            t += ' ' + i
    return t

@meta.add_method(nodes.CType)
def ctype_to_c(self, func_var_name=""):
    declarator = []
    if func_var_name != "":
        declarator = [func_var_name]
    if hasattr(self, 'params'):
        pf = []
        for p in self.params:
             pf.append(p.ctype.ctype_to_c(p._name))
        declarator.append('(' + ", ".join(pf) + ')')
    qualextern = None
    decl_ls = []
    if self.link() != None:
        if len(declarator) > 0:
            qual_list = declarator
        else:
            qual_list = []
        unqual_list = self.link()
        while unqual_list != None:
            if isinstance(unqual_list, nodes.ArrayType):
                if unqual_list.expr != None:
                    qual_list.append("[" + str(unqual_list.expr.to_c()) + "]")
                else:
                    qual_list.append("[]")
            if isinstance(unqual_list, nodes.ParenType):
                qual_list = ["(", qual_list, ")"]
                if len(unqual_list.params) > 0:
                    pf = []
                    for p in unqual_list.params:
                         pf.append(p.ctype.ctype_to_c(p._name))
                    qual_list.append('(' + ", ".join(pf) + ')')
            if isinstance(unqual_list, nodes.PointerType):
                qual_list.insert(0, "*")
            if isinstance(unqual_list, nodes.QualType):
                if unqual_list._qualifier != nodes.Qualifiers.AUTO:
                    if unqual_list.link() == None:
                        qualextern = unqual_list
                    else:
                        qual_list.insert(0, nodes.Qualifiers.rmap[unqual_list._qualifier].lower())
            unqual_list = unqual_list.link()
        flat(qual_list, decl_ls)
    elif len(declarator) > 0:
        decl_ls = declarator
    if hasattr(self, 'identifier'):
        decl_ls.insert(0, self.identifier)
#    if hasattr(self, 'return_type'):
#        print("before %s" % decl_ls[-1])
#        decl_ls.insert(0, self.return_type.ctype_to_c())
#        print("after %s" % decl_ls[-1])
    # specifier
    if self._specifier != nodes.Specifiers.AUTO:
        if self._specifier == nodes.Specifiers.LONGLONG:
            decl_ls.insert(0, "long long")
        else:
            decl_ls.insert(0, nodes.Specifiers.rmap[self._specifier].lower())
    # sign
    if hasattr(self, '_sign') and self._sign != nodes.Signs.AUTO:
        decl_ls.insert(0, nodes.Signs.rmap[self._sign].lower())
    # qualifier externalized
    if qualextern != None:
        decl_ls.insert(0, nodes.Qualifiers.rmap[qualextern._qualifier].lower())
    # End by storage
    if self._storage != nodes.Storages.AUTO:
        decl_ls.insert(0, nodes.Storages.rmap[self._storage].lower())
    print("FIN: %r" % decl_ls)
    return catlist(decl_ls)

@meta.add_method(nodes.Decl)
def to_c(self):
    return fmt.end(';\n', [self.ctype.ctype_to_c(self._name)])

@meta.add_method(nodes.PrimaryType)
def type_to_c(self, fmtdecl: fmt.indentable):
    lsdecl = []
    # storage
    if self._storage != nodes.Storages.AUTO:
        lsdecl.append(nodes.Storages.rmap[self._storage].lower())
    # sign
    if hasattr(self, '_sign') and self._sign != nodes.Signs.AUTO:
        lsdecl.append(nodes.Signs.rmap[self._sign].lower())
    # specifier
    if self._specifier != nodes.Specifiers.AUTO:
        if self._specifier == nodes.Specifiers.LONGLONG:
            lsdecl.append("long long")
        else:
            lsdecl.append(nodes.Specifiers.rmap[self._specifier].lower())
    # iterator on declarator type
    itdt = reversed(self._decltypes)
    # add here FIRST?! QUAL if != pointer
    if len(self._decltypes) > 0 and type(self._decltypes[-1]) is nodes.QualType:
        item = next(itdt)
        lsdecl.append(nodes.Qualifiers.rmap[item._qualifier].lower())
    # type identifier
    lsdecl.append(self._identifier)
    # iter thru quals
    item = next(itdt, None)
    if item != None:
        item.type_to_c(itdt, lsdecl, fmtdecl)
    else:
        lsdecl.append(fmtdecl)
    return fmt.sep(' ', lsdecl)

@meta.add_method(nodes.FuncType)
def type_to_c(self, fmtdecl: fmt.indentable):
    #print("entre %s" % str(fmtdecl))
    lsp = []
    for p in self._params:
        ptoc = p._ctype.type_to_c(fmt.sep("", [p._name]))
        lsp.append(ptoc)
        #print("Param intern %s" % str(ptoc))
    fmtlist = fmt.sep(', ', lsp)
    fmtparams = fmt.block('(', ')', [fmtlist])
    itdt = reversed(self._decltypes)
    item = next(itdt, None)
    if item != None:
        # iterator on declarator type
        paren = fmt.block('(', ')', [])
        #print("param extern")
        item.type_to_c(itdt, paren.lsdata, fmtdecl)
        fmtdecl = paren
        #print("intern: %s" % str(fmtdecl))
    fmtdecl = fmt.sep("", [fmtdecl, fmtparams])
    #print("ajout return type")
    return self._return_type.type_to_c(fmtdecl)

@meta.add_method(nodes.PointerType)
def type_to_c(self, lstypes, lsres, fmtdecl: fmt.indentable):
    item = next(lstypes, None)
    if item != None:
        lsres.append('*')
        return item.type_to_c(lstypes, lsres, fmtdecl)
    lsres.append(fmt.sep("", ["*", fmtdecl]))

@meta.add_method(nodes.QualType)
def type_to_c(self, lstypes, lsres, fmtdecl: fmt.indentable):
    if self._qualifier != nodes.Qualifiers.AUTO:
        lsres.append(nodes.Qualifiers.rmap[self._qualifier].lower())
    item = next(lstypes, None)
    if item != None:
        return item.type_to_c(lstypes, lsres, fmtdecl)
    lsres.append(fmtdecl)

@meta.add_method(nodes.ParenType)
def type_to_c(self, lstypes, lsres, fmtdecl: fmt.indentable):
    paren = fmt.block('(', ')', [])
    lsres.append(paren)
    item = next(lstypes, None)
    if item != None:
        return item.type_to_c(lstypes, paren.lsdata, fmtdecl)
    paren.lsdata.append(fmtdecl)

@meta.add_method(nodes.ArrayType)
def type_to_c(self, lstypes: iter, lsres: fmt.indentable, fmtdecl: fmt.indentable):
    # add the placeholder for the array
    ary = fmt.block('[', ']', [])
    fmtdecl.lsdata.append(ary)
    # for expression in []
    subexpr = self._expr
    if subexpr != None:
        ary.lsdata.append(subexpr.to_c())
    # for expression following []
    item = next(lstypes, None)
    if item != None:
    #    if isinstance(item, nodes.ParenType):
    #        print("aft: %r" % lsres)
    #        print("fmt: %r" % fmtdecl)
    #        ptr = fmt.sep('', [])
    #        rest = []
    #        item.type_to_c(lstypes, ptr, rest)
    #        print("ffwaft: %r" % ptr)
    #        print("ffwfmt: %r" % rest)
    #        ptr.lsdata.append(fmtdecl.lsdata.pop())
    #        ptr.lsdata.append(fmtdecl)
    #        return ptr
        return item.type_to_c(lstypes, lsres, fmtdecl)
    lsres.append(fmtdecl)

# STATEMENT

@meta.add_method(nodes.For)
def to_c(self):
    lsfor = [
                fmt.sep(" ", ["for", fmt.block('(', ')\n', 
                    [fmt.sep("; ",
                        [
                            self.init.to_c(),
                            self.condition.to_c(),
                            self.increment.to_c()
                        ])
                    ])]),
                fmt.tab([self.body.to_c()])
            ]
    return fmt.sep("", lsfor)

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

@meta.add_method(nodes.While)
def to_c(self):
    lswh = [
                fmt.sep(" ", ["while", fmt.block('(', ')\n', [self.condition.to_c()])]),
                fmt.tab([self.body.to_c()])
            ]
    return fmt.sep("", lswh)

@meta.add_method(nodes.Do)
def to_c(self):
    lsdo = [
                fmt.sep("\n", ["do", fmt.tab([self.body.to_c()])]),
                fmt.sep(" ", ["while", fmt.block('(', ');\n', [self.condition.to_c()])]),
           ]
    return fmt.sep("", lsdo)

@meta.add_method(nodes.Switch)
def to_c(self):
    lswh = [
                fmt.sep(" ", ["switch", fmt.block('(', ')\n', [self.condition.to_c()])]),
                fmt.tab([self.body.to_c()])
            ]
    return fmt.sep("", lswh)

@meta.add_method(nodes.Label)
def to_c(self):
    return fmt.end(":\n", [self.value])

@meta.add_method(nodes.Branch)
def to_c(self):
    return fmt.end(";\n", [fmt.sep(" ", [self.value, self.expr.to_c()])])

@meta.add_method(nodes.Case)
def to_c(self):
    return fmt.end(":\n", [fmt.sep(" ", [self.value, self.expr.to_c()])])

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
    content = fmt.sep("", [self.params[0].to_c(), ' ? ', self.params[1].to_c()])
    if len(self.params) > 2:
        content.lsdata.append(' : ')
        content.lsdata.append(self.params[2].to_c())
    return content

@meta.add_method(nodes.Binary)
def to_c(self):
    lsparams = []
    for p in self.params:
        lsparams.append(p.to_c())
    if type(self.call_expr) is nodes.Raw and self.call_expr.value == ",":
        return fmt.sep(str(self.call_expr.to_c()) + ' ', lsparams)
    return fmt.sep(' ' + str(self.call_expr.to_c()) + ' ', lsparams)

@meta.add_method(nodes.Unary)
def to_c(self):
    return fmt.sep("", [self.call_expr.to_c(), self.params[0].to_c()])

@meta.add_method(nodes.Dot)
def to_c(self):
    return fmt.sep(".", [self.call_expr.to_c(), self.params[0].to_c()])

@meta.add_method(nodes.Arrow)
def to_c(self):
    return fmt.sep("->", [self.call_expr.to_c(), self.params[0].to_c()])

@meta.add_method(nodes.Paren)
def to_c(self):
    return fmt.block('(', ')', [self.params[0].to_c()])

@meta.add_method(nodes.Array)
def to_c(self):
    return fmt.sep("", [self.call_expr.to_c(), fmt.block('[', ']', [self.params[0].to_c()])])

@meta.add_method(nodes.Post)
def to_c(self):
    return fmt.sep("", [self.params[0].to_c(), self.call_expr.to_c()])

@meta.add_method(nodes.Terminal)
def to_c(self):
    return self.value
