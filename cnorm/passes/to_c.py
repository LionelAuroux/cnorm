from pyrser import meta
from pyrser import fmt
from pyrser.passes import to_yml
from cnorm import nodes


# DECL

@meta.add_method(nodes.CType)
def ctype_to_c(self, func_var_name=""):
    # our global declarator
    declarator = fmt.sep("", [])
    # typename or full decl
    if func_var_name != "":
        declarator.lsdata.append(func_var_name)
    # intern prototype
    if hasattr(self, 'params'):
        # param list
        pf = fmt.sep(", ", [])
        for p in self.params:
            if p.ctype != None:
                if isinstance(p.ctype, nodes.CType):
                    pf.lsdata.append(p.ctype.ctype_to_c(p._name))
        if hasattr(self, '_ellipsis'):
            pf.lsdata.append('...')
        if len(pf.lsdata) > 0:
            declarator.lsdata.append(fmt.block('(', ')',  pf))
        else:
            declarator.lsdata.append('()')
    # for externalize the last qualifier
    qualextern = None
    # final output
    decl_ls = fmt.sep(" ", [])
    if self.link() != None:
        # add all qualifiers
        if len(declarator.lsdata) > 0:
            qual_list = declarator
        else:
            qual_list = fmt.sep(" ", [])
        unqual_list = self.link()
        # qualification of declaration
        while unqual_list != None:
            if isinstance(unqual_list, nodes.ParenType):
                # surround previous defs by ()
                qual_list = fmt.sep("", [fmt.block("(", ")", [qual_list])])
                # () provide param for function pointers
                if len(unqual_list.params) > 0:
                    pf = fmt.sep(", ", [])
                    for p in unqual_list.params:
                         pf.lsdata.append(p.ctype.ctype_to_c(p._name))
                    if hasattr(unqual_list, '_ellipsis'):
                        pf.lsdata.append('...')
                    qual_list.lsdata.append(fmt.block('(', ')', pf))
            if isinstance(unqual_list, nodes.PointerType):
                qual_list.lsdata.insert(0, "*")
            if isinstance(unqual_list, nodes.AttrType):
                qual_list.lsdata.insert(0, unqual_list._attr + " ")
            if isinstance(unqual_list, nodes.QualType):
                if unqual_list._qualifier != nodes.Qualifiers.AUTO:
                    if unqual_list.link() == None:
                        qualextern = unqual_list
                    else:
                        qual_list.lsdata.insert(0, nodes.Qualifiers.rmap[unqual_list._qualifier].lower() + " ")
            if isinstance(unqual_list, nodes.ArrayType):
                # collect all consecutive array
                consec_ary = []
                consec_ary.append(unqual_list)
                unqual_list = unqual_list.link()
                while unqual_list != None and isinstance(unqual_list, nodes.ArrayType):
                    consec_ary.append(unqual_list)
                    unqual_list = unqual_list.link()
                reordered = []
                for ary in consec_ary:
                    if ary.expr != None:
                        reordered.insert(0, fmt.block("[", "]", [ary.expr.to_c()]))
                    else:
                        reordered.insert(0, "[]")
                qual_list.lsdata.extend(reordered)
                # rewind one for last sentence
                unqual_list = consec_ary[-1]
            unqual_list = unqual_list.link()
        # add qualified declarator
        decl_ls.lsdata.append(qual_list)
    elif len(declarator.lsdata) > 0:
        # no qualifiers just the name
        decl_ls.lsdata.append(declarator)
    # for enum
    if hasattr(self, 'enums'):
        enums = fmt.sep(",\n", [])
        for enum in self.enums:
            if enum.expr != None:
                enums.lsdata.append(fmt.sep(" = ", [enum.ident, enum.expr.to_c()]))
            else:
                enums.lsdata.append(enum.ident)
        decl_ls.lsdata.insert(0, fmt.tab(fmt.block("{\n", "}", enums)))
    # for struct
    if hasattr(self, 'fields'):
        fields = []
        for field in self.fields:
            fields.append(field.to_c())
        decl_ls.lsdata.insert(0, fmt.tab(fmt.block("{\n", "}", fields)))
    # just the type name
    if hasattr(self, 'identifier'):
        decl_ls.lsdata.insert(0, self.identifier)
    # attributes composed
    if hasattr(self, '_attr_composed'):
        decl_ls.lsdata.insert(0, fmt.sep(" ", self._attr_composed))
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
    return decl_ls

def decl_to_c(self):
    decl_ls = self.ctype.ctype_to_c(self._name)
    # add bitfield
    if hasattr(self, '_colon_expr'):
        decl_ls.lsdata.append(":")
        decl_ls.lsdata.append(self._colon_expr.to_c())
    # attributes decl
    if hasattr(self, '_attr_decl'):
        decl_ls.lsdata.extend(self._attr_decl)
    # add initializers
    if hasattr(self, '_assign_expr'):
        decl_ls.lsdata.append("=")
        decl_ls.lsdata.append(self._assign_expr.to_c())
    return decl_ls

@meta.add_method(nodes.Decl)
def to_c(self):
    if hasattr(self, 'body') and self.body != None:
        return fmt.sep("\n", [self.ctype.ctype_to_c(self._name), self.body.to_c()])
    else:
        return fmt.end(';\n', decl_to_c(self))

# STATEMENT

@meta.add_method(nodes.For)
def to_c(self):
    init_body = None
    if type(self.init) is nodes.Decl:
        init_body = decl_to_c(self.init)
    elif self.init != None:
        init_body = self.init.expr.to_c()
    cond_body = None
    if self.condition != None:
        cond_body = self.condition.expr.to_c()
    inc_body = None
    if self.increment != None:
        inc_body = self.increment.to_c()
    lsfor = [
                fmt.sep(" ", ["for", fmt.block('(', ')\n', 
                    [fmt.sep("; ",
                        [
                            init_body,
                            cond_body,
                            inc_body
                        ])
                    ])]),
                fmt.tab(self.body.to_c())
            ]
    return fmt.end("", lsfor)

@meta.add_method(nodes.If)
def to_c(self):
    thenbody = ';\n'
    if self.thencond != None:
        thenbody = fmt.tab(self.thencond.to_c())
    lsif = [
                fmt.sep(" ", ["if", fmt.block('(', ')\n', [self.condition.to_c()])]),
                thenbody
            ]
    if self.elsecond != None:
        lsif.append("else\n")
        lsif.append(fmt.tab(self.elsecond.to_c()))
    return fmt.end("", lsif)

@meta.add_method(nodes.While)
def to_c(self):
    body = ';\n'
    if self.body != None:
        body = fmt.tab(self.body.to_c())
    lswh = [
                fmt.sep(" ", ["while", fmt.block('(', ')\n', [self.condition.to_c()])]),
                body
            ]
    return fmt.sep("", lswh)

@meta.add_method(nodes.Do)
def to_c(self):
    body = ';\n'
    if self.body != None:
        body = fmt.tab(self.body.to_c())
    lsdo = [
                fmt.sep("\n", ["do", body]),
                fmt.sep(" ", ["while", fmt.block('(', ');\n', [self.condition.to_c()])]),
           ]
    return fmt.sep("", lsdo)

@meta.add_method(nodes.Switch)
def to_c(self):
    body = ';\n'
    if self.body != None:
        body = fmt.tab(self.body.to_c())
    lswh = [
                fmt.sep(" ", ["switch", fmt.block('(', ')\n', [self.condition.to_c()])]),
                body
            ]
    return fmt.sep("", lswh)

@meta.add_method(nodes.Label)
def to_c(self):
    return fmt.end(":\n", [self.value])

@meta.add_method(nodes.LoopControl)
def to_c(self):
    return fmt.end(";\n", [self.value])

@meta.add_method(nodes.Branch)
def to_c(self):
    body = ';\n'
    if self.expr != None:
        body = self.expr.to_c()
    return fmt.end(";\n", [fmt.sep(" ", [self.value, body])])

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
        if e != None:
            lsbody.append(e.to_c())
    return fmt.block("{\n", "}\n", fmt.tab(lsbody))

@meta.add_method(nodes.BlockExpr)
def to_c(self):
    lsbody = []
    for e in self.body:
        if e != None:
            lsbody.append(e.to_c())
    return fmt.block("({\n", "})", fmt.tab(lsbody))

@meta.add_method(nodes.RootBlockStmt)
def to_c(self):
    lsbody = []
    for e in self.body:
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

@meta.add_method(nodes.BlockInit)
def to_c(self):
    lsbody = []
    i = 0
    for it in self.body:
        subbody = it.to_c()
        if hasattr(it, 'designation'):
            subbody = fmt.sep("", [it.designation, subbody])
        if isinstance(subbody, fmt.block):
            lsbody.append(fmt.tab(["\n", subbody]))
        else:
            lsbody.append(subbody)
        i += 1
        if i > 8:
            lsbody[-1] = "\n" + str(lsbody[-1])
            i = 0
    return fmt.block("{ ", " }", fmt.tab(fmt.sep(', ', lsbody)))

@meta.add_method(nodes.Ternary)
def to_c(self):
    condexpr = None
    if self.params[0] != None:
        condexpr = self.params[0].to_c()
    thenexpr = None
    if self.params[1] != None:
        thenexpr = self.params[1].to_c()
    content = fmt.sep("", [condexpr, ' ? ', thenexpr])
    if len(self.params) > 2:
        elseexpr = None
        if self.params[2] != None:
            elseexpr = self.params[2].to_c()
        content.lsdata.append(' : ')
        content.lsdata.append(elseexpr)
    return content

@meta.add_method(nodes.Binary)
def to_c(self):
    lsparams = []
    for p in self.params:
        lsparams.append(p.to_c())
    if type(self.call_expr) is nodes.Raw and self.call_expr.value == ",":
        return fmt.sep(str(self.call_expr.to_c()) + ' ', lsparams)
    return fmt.sep(' ' + str(self.call_expr.to_c()) + ' ', lsparams)

@meta.add_method(nodes.Cast)
def to_c(self):
    return fmt.sep(" ", [fmt.block("(", ")", self.params[0].ctype_to_c()), self.params[1].to_c()])

@meta.add_method(nodes.Unary)
def to_c(self):
    return fmt.sep("", [self.call_expr.to_c(), self.params[0].to_c()])

@meta.add_method(nodes.Sizeof)
def to_c(self):
    if isinstance(self.params[0], nodes.CType):
        return fmt.sep(" ", [self.call_expr.to_c(), fmt.block("(", ")", self.params[0].ctype_to_c())])
    else:
        return fmt.sep(" ", [self.call_expr.to_c(), self.params[0].to_c()])

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
