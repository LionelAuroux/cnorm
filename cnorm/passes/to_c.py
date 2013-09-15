from pyrser import meta
from cnorm.passes import fmt_old as fmt
from cnorm import nodes


# DECL

@meta.add_method(nodes.CType)
def ctype_to_c(self, func_var_name=""):
    # our global declarator
    declarator = fmt.sep(' ', [])
    # typename or full decl
    if func_var_name != "":
        declarator.lsdata.append(func_var_name)
    # intern prototype
    if hasattr(self, 'params'):
        # param list
        pf = fmt.sep(", ", [])
        for p in self.params:
            if p.ctype != None:
                if hasattr(p.ctype, 'ctype_to_c'):
                    pf.lsdata.append(p.ctype.ctype_to_c(p._name))
        declarator.lsdata.append(fmt.block('(', ')',  [pf]))
    # for externalize the last qualifier
    qualextern = None
    # final output
    decl_ls = fmt.sep(" ", [])
    if self.link() != None:
        if len(declarator.lsdata) > 0:
            qual_list = declarator
        else:
            qual_list = fmt.sep("", [])
        unqual_list = self.link()
        # qualification of declaration
        while unqual_list != None:
            if isinstance(unqual_list, nodes.ArrayType):
                if unqual_list.expr != None:
                    qual_list.lsdata.append(fmt.block("[", "]", [unqual_list.expr.to_c()]))
                else:
                    qual_list.lsdata.append("[]")
            if isinstance(unqual_list, nodes.ParenType):
                qual_list.lsdata.append(fmt.block("(", ")", [qual_list]))
                if len(unqual_list.params) > 0:
                    pf = fmt.sep(", ", [])
                    for p in unqual_list.params:
                         pf.lsdata.append(p.ctype.ctype_to_c(p._name))
                    qual_list.lsdata.append(fmt.block('(', ')', [pf]))
            if isinstance(unqual_list, nodes.PointerType):
                qual_list.lsdata.insert(0, "*")
            if isinstance(unqual_list, nodes.QualType):
                if unqual_list._qualifier != nodes.Qualifiers.AUTO:
                    if unqual_list.link() == None:
                        qualextern = unqual_list
                    else:
                        qual_list.lsdata.insert(0, nodes.Qualifiers.rmap[unqual_list._qualifier].lower())
            unqual_list = unqual_list.link()
        # add qualified declarator
        print("QUALS: %s" % str(qual_list))
        return
        decl_ls.lsdata.append(qual_list)
    elif len(declarator.lsdata) > 0:
        decl_ls.lsdata.append(declarator)
    print("IIIDDDD")
    if hasattr(self, 'identifier'):
        decl_ls.lsdata.insert(0, self.identifier)
    # specifier
    if self._specifier != nodes.Specifiers.AUTO:
        if self._specifier == nodes.Specifiers.LONGLONG:
            decl_ls.lsdata.insert(0, "long long")
        else:
            decl_ls.lsdata.insert(0, nodes.Specifiers.rmap[self._specifier].lower())
    # sign
    if hasattr(self, '_sign') and self._sign != nodes.Signs.AUTO:
        decl_ls.lsdata.insert(0, nodes.Signs.rmap[self._sign].lower())
    # qualifier externalized
    if qualextern != None:
        decl_ls.lsdata.insert(0, nodes.Qualifiers.rmap[qualextern._qualifier].lower())
    # End by storage
    if self._storage != nodes.Storages.AUTO:
        decl_ls.lsdata.insert(0, nodes.Storages.rmap[self._storage].lower())
    print("DECLS: %s" % str(decl_ls))
    return decl_ls

@meta.add_method(nodes.Decl)
def to_c(self):
    if hasattr(self, 'body') and self.body != None:
        return fmt.sep("\n", [self.ctype.ctype_to_c(self._name), self.body.to_c()])
    else:
        return fmt.end(';\n', [self.ctype.ctype_to_c(self._name)])

# STATEMENT

@meta.add_method(nodes.For)
def to_c(self):
    lsfor = [
                fmt.sep(" ", ["for", fmt.block('(', ') ', 
                    [fmt.sep("; ",
                        [
                            self.init.to_c(),
                            self.condition.to_c(),
                            self.increment.to_c()
                        ])
                    ])]),
                self.body.to_c()
            ]
    return fmt.end("", lsfor)

@meta.add_method(nodes.If)
def to_c(self):
    lsif = [
                fmt.sep(" ", ["if", fmt.block('(', ') ', [self.condition.to_c()])]),
                self.thencond.to_c()
            ]
    if self.elsecond != None:
        lsif.append("else ")
        lsif.append(self.elsecond.to_c())
    return fmt.end("", lsif)

@meta.add_method(nodes.While)
def to_c(self):
    lswh = [
                fmt.sep(" ", ["while", fmt.block('(', ') ', [self.condition.to_c()])]),
                self.body.to_c()
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
                fmt.sep(" ", ["switch", fmt.block('(', ')', [self.condition.to_c()])]),
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
    lsbody = []
    for e in self.body:
        lsbody.append(e.to_c())
    return fmt.block("{\n", "}\n", [fmt.tab(lsbody)])

@meta.add_method(nodes.RootBlockStmt)
def to_c(self):
    lsbody = []
    for e in self.body:
        print("ROOT %s" % vars(e))
        lsbody.append(e.to_c())
    return fmt.sep("", lsbody)

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
