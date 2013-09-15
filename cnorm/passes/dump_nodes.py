# This pass is for debug only
from pyrser import meta, fmt
from pyrser.parsing import node

scalar = {'bool': bool, 'int': int, 'float': float, 'str': str}
composed = {'list': list, 'dict': dict, 'set': set}

@meta.add_method(node.Node)
def to_yml(self):
    pp = fmt.sep("", [])
    to_yml_item(self, pp.lsdata, ".root")
    return str(pp)

def yml_attr(k, v):
    return fmt.sep(" = ", [k, v])

def to_yml_item(item, pp, name):
    global scalar
    if type(item).__name__ in scalar:
        tag = fmt.end('\n', [fmt.sep("", [name, " ", yml_attr(type(item).__name__, repr(item))])])
        pp.append(tag)
        return
    if isinstance(item, bytes) or isinstance(item, bytearray):
        inner = fmt.tab([])
        tag = fmt.block(name + " " + str(yml_attr('type', 'bytes')) + '\n',
                        '----' + name +'----\n', [inner])
        inner.lsdata.append(fmt.sep(" ", []))
        bindata = inner.lsdata[-1].lsdata
        i = 0
        for b in item:
            bindata.append("%02X" % b)
            i += 1
            if i > 16:
                bindata.append("\n")
                i = 0
        bindata.append("\n")
        pp.append(tag)
        return
    if isinstance(item, object) and hasattr(item, '__dict__'):
        inner = fmt.tab([])
        tag = fmt.block(name + " " + str(yml_attr('type', 'object')) + '\n',
                        '', [inner])
        for attr in sorted(vars(item)):
            to_yml_item(getattr(item, attr), inner.lsdata, attr)
        if len(vars(item)) == 0:
            inner.lsdata.append("\n")
        pp.append(tag)
        return
    if isinstance(item, list):
        inner = fmt.tab([])
        tag = fmt.tab([fmt.block(name + " " + str(yml_attr('type', 'list')) + '\n',
                        '', [inner])])
        i = 0
        for subitem in item:
            idxname = str(fmt.sep(" ", ['[', i, ']']))
            to_yml_item(subitem, inner.lsdata, idxname)
            i += 1
        if len(item) == 0:
            inner.lsdata.append("\n")
        pp.append(tag)
        return
    if isinstance(item, tuple):
        inner = fmt.tab([])
        tag = fmt.block(name + " " + str(yml_attr('type', 'tuple')) + '\n',
                        '', [inner])
        i = 0
        for subitem in item:
            idxname = str(fmt.sep(" ", ["[", i, "]"]))
            to_yml_item(subitem, inner.lsdata, idxname)
            i += 1
        if len(item) == 0:
            inner.lsdata.append("\n")
        pp.append(tag)
        return
    if isinstance(item, dict):
        inner = fmt.tab([])
        tag = fmt.block(name + " " + str(yml_attr('type', 'dict')) + '\n',
                        '', [inner])
        for k in sorted(item.keys()):
            idxname = str(fmt.sep(" ", ["[", repr(k), "]"]))
            to_yml_item(item[k], inner.lsdata, idxname)
        if len(item.keys()) == 0:
            inner.lsdata.append("\n")
        pp.append(tag)
        return
    if isinstance(item, set):
        inner = fmt.tab([])
        tag = fmt.block(name + " " + str(yml_attr('type', 'set')) + '\n',
                        '', [inner])
        for subitem in sorted(item):
            inner.lsdata.append(fmt.sep(", "[repr(subitem)]))
        if len(item) == 0:
            inner.lsdata.append("\n")
        pp.append(tag)
        return
    if item == None:
        tag = fmt.end('\n', [name])
        pp.append(tag)
        return
