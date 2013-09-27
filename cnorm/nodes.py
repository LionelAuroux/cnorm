from pyrser import parsing, meta

Storages = meta.enum('AUTO', 'REGISTER', 'TYPEDEF', 'STATIC', 'EXTERN', 'INLINE', 'VIRTUAL', 'EXPLICIT', 'FORCEINLINE', 'THREAD')
Qualifiers = meta.enum('AUTO', 'CONST', 'VOLATILE', 'RESTRICT', 'W64', 'STDCALL', 'CDECL', 'PTR32', 'PTR64', 'FASTCALL')
Specifiers = meta.enum('AUTO', 'STRUCT', 'UNION', 'ENUM', 'LONG',
                       'LONGLONG', 'SHORT')
Signs = meta.enum('AUTO', 'SIGNED', 'UNSIGNED')

# EXPRESSION PART

class Expr(parsing.Node):
    """All expression"""

class Func(Expr):
    """For almost everything"""

    def __init__(self, call_expr: Expr, params: list):
        Expr.__init__(self)
        self.call_expr = call_expr
        self.params = params

class BlockInit(Expr):
    """Initializer Block Expression"""

    def __init__(self, body: [Expr]):
        self.body = body

class BlockExpr(Expr):
    """Compound Block Expression"""

    def __init__(self, body: [Expr]):
        self.body = body

class Unary(Func):
    """For unary operator"""

class Paren(Unary):
    """For () expression"""

class Array(Unary):
    """For [] expression"""

class Dot(Unary):
    """For . expression"""

class Arrow(Unary):
    """For -> expression"""

class Post(Unary):
    """For post{inc,dec} expression"""

class Sizeof(Unary):
    """For sizeof expr/type expression"""

class Binary(Func):
    """For binary operator"""

class Cast(Binary):
    """For cast operator"""

class Range(Binary):
    """For range expression"""

class Ternary(Func):
    """For ternary operator"""

class Terminal(Expr):
    """For Terminal expression"""

    def __init__(self, value: str):
        Expr.__init__(self)
        self.value = value

class Id(Terminal):
    """Terminal Id"""

class Literal(Terminal):
    """Terminal Literal"""

class Raw(Terminal):
    """Terminal Raw"""


# DECLARATION PART

class Enumerator(parsing.Node):
    """Enumerator A=x in enums"""

    def __init__(self, ident: str, expr: Expr):
        self.ident = ident
        self.expr = expr

class DeclType(parsing.Node):
    """For type in declaration"""
    
    def __init__(self):
        self._decltype = None

    def link(self, t: 'DeclType'=None):
        if t != None:
            if not isinstance(t, DeclType):
                raise Exception("add only C type declarator")
            self._decltype = t
        return self._decltype

    def push(self, t: 'DeclType'=None):
        if t != None:
            if not isinstance(t, DeclType):
                raise Exception("add only C type declarator")
            old = self._decltype
            self._decltype = t
            self._decltype.link(old)
        return self._decltype


class PointerType(DeclType):
    """For pointer in declaration"""


class ArrayType(DeclType):
    """For array in declaration"""

    def __init__(self, expr=None):
        DeclType.__init__(self)
        self._expr = expr
    
    @property
    def expr(self):
        return self._expr

class ParenType(DeclType):
    """For parenthesis in declaration"""

    def __init__(self, params=None):
        DeclType.__init__(self)
        if params == None:
            params = []
        self._params = params

    @property
    def params(self):
        return self._params

class QualType(DeclType):
    """For qualifier in declaration"""

    def __init__(self, qualifier: Qualifiers= Qualifiers.AUTO):
        DeclType.__init__(self)
        # qualifier in (auto, const, volatile, restrict)
        self._qualifier = qualifier

class AttrType(DeclType):
    """For attribute specifier in declaration"""

    def __init__(self, raw: str):
        DeclType.__init__(self)
        self._attr = raw


class CType(parsing.Node):
    """Base for primary/func"""

    def __init__(self):
        parsing.Node.__init__(self)
        self._decltype = None
        # only one storage by declaration (auto, register, typedef, static, extern, ...)
        self._storage = Storages.AUTO
        # only one specifier by declaration (auto, short, long, struct, union, enum)
        self._specifier = Specifiers.AUTO

    def copy(self):
        import copy
        theclone = copy.copy(self)
        theclone._decltype = None
        return theclone


    def link(self, t: DeclType=None):
        if t != None:
            if not isinstance(t, DeclType):
                raise Exception("add only C type declarator")
            self._decltype = t
        return self._decltype

    def push(self, t: DeclType=None):
        if t != None:
            if not isinstance(t, DeclType):
                raise Exception("add only C type declarator")
            old = self._decltype
            self._decltype = t
            self._decltype.link(old)
        return self._decltype

class PrimaryType(CType):
    """For primary type in declaration"""

    def __init__(self, identifier: str):
        CType.__init__(self)
        # identifier (void, char, int, float, double, typedefname)
        self._identifier = identifier

    @property
    def identifier(self):
        return self._identifier

class ComposedType(CType):
    """For composed type in declaration"""

    def __init__(self, identifier: str):
        CType.__init__(self)
        # identifier (name of the struct/union/enum)
        self._identifier = identifier
        # if struct
        #self.fields = []
        # if enum
        #self.enums = []

    @property
    def identifier(self):
        return self._identifier


class FuncType(PrimaryType):
    """For function in declaration"""

    def __init__(self, identifier: str, params=[], decltype=None):
        PrimaryType.__init__(self, identifier)
        self.opened = True
        if decltype != None:
            self._decltype = decltype
        self._params = params
        # when defined
        #self.body = BlockStmt([])

    @property
    def params(self):
        return self._params

# helper to create a CType from previous one
def makeCType(declspecifier: str, ctype=None):
    from cnorm.parsing.expression import Idset
    #print("%s %s" %(declspecifier, ctype))
    if ctype == None:
        ctype = PrimaryType('int')
    if Idset[declspecifier] == "type":
        ctype._identifier = declspecifier
    if Idset[declspecifier] == "storage":
        cleantxt = declspecifier.strip("_")
        ctype._storage = Storages.map[cleantxt.upper()]
    if Idset[declspecifier] == "qualifier":
        cleantxt = declspecifier.strip("_")
        ctype.link(QualType(Qualifiers.map[cleantxt.upper()]))
    if Idset[declspecifier] == "funspecifier":
        cleantxt = declspecifier.strip("_")
        ctype._storage = Storages.map[cleantxt.upper()]
    if Idset[declspecifier] == "sign_unsigned":
        cleantxt = declspecifier.strip("_")
        ctype._sign = Signs.map[cleantxt.upper()]
    if Idset[declspecifier] == "sign_signed":
        cleantxt = declspecifier.strip("_")
        ctype._sign = Signs.map[cleantxt.upper()]
    if Idset[declspecifier] == "specifier_block":
        cleantxt = declspecifier.strip("_")
        ctype._specifier = Specifiers.map[cleantxt.upper()]
    if Idset[declspecifier] == "specifier_enum":
        cleantxt = declspecifier.strip("_")
        ctype._specifier = Specifiers.map[cleantxt.upper()]
    if Idset[declspecifier] == "specifier_size":
        cleantxt = declspecifier.strip("_")
        ctype._specifier = Specifiers.map[cleantxt.upper()]
    if Idset[declspecifier] == "specifier_size_size":
        cleantxt = declspecifier.strip("_")
        if ctype._specifier == Specifiers.AUTO:
            ctype._specifier = Specifiers.map[cleantxt.upper()]
        else:
            ctype._specifier = Specifiers.LONGLONG
    return ctype

class Decl(Expr):
    """For basic declaration
    
        A declaration contains the following attributes:

        * _name: name of the declaration
        * _ctype: the CType describing the type of the declaration
        * _assign_expr: when the declaration have a value
        * _colon_expr: When it's a bitfield
        * body: when it's function definition

    """

    def __init__(self, name: str, ct=None):
        if ct == None:
            ct = PrimaryType('int')
        Expr.__init__(self)
        self._name = name
        self._ctype = ct

    @property
    def ctype(self) -> CType:
        return self._ctype

    def assign_expr(self, expr=None):
        if not hasattr(self, '_assign_expr'):
            self._assign_expr = None
        if expr != None:
            self._assign_expr = expr
        return self._assign_expr

    def colon_expr(self, expr=None):
        if not hasattr(self, '_colon_expr'):
            self._colon_expr = None
        if expr != None:
            self._colon_expr = expr
        return self._colon_expr

# STATEMENT PART

class Stmt(parsing.Node):
    """For statement"""

class ExprStmt(Stmt):
    """Expression statement"""

    def __init__(self, expr: Expr):
        parsing.Node.__init__(self)
        self.expr = expr

class BlockStmt(Stmt):
    """Block statement"""

    def __init__(self, body: [ExprStmt]):
        parsing.Node.__init__(self)
        self.body = body

    def func(self, name: str):
        """return the func defined named name"""

    def var(self, name: str):
        """return the var instancied named name"""

    def type(self, name: str):
        """return the complete definition of type 'name'"""

    def declfuncs(self, name: str):
        """return all declaration of function 'name'"""

    def declvars(self, name: str):
        """return all declaration of variable 'name'"""

    def decltypes(self, name: str):
        """return all declaration of type 'name'"""

class RootBlockStmt(BlockStmt):
    """Root Block statement"""

    def __init__(self, body: [ExprStmt]):
        BlockStmt.__init__(self, body)
        from collections import ChainMap
        self.types = ChainMap()


class Label(Stmt):
    """Label statement"""

    def __init__(self, value: str):
        Stmt.__init__(self)
        self.value = value

class Branch(Label):
    """branch statement"""

    def __init__(self, value:str, expr: Expr):
        Label.__init__(self, value)
        self.expr = expr

class Case(Branch):
    """Case statement"""

    def __init__(self, expr: Expr):
        Branch.__init__(self, "case", expr)

class Return(Branch):
    """Return statement"""

    def __init__(self, expr: Expr):
        Branch.__init__(self, "return", expr)

class Goto(Branch):
    """Goto statement"""

    def __init__(self, expr: Expr):
        Branch.__init__(self, "goto", expr)

class LoopControl(Label):
    """loop control statement"""

class Break(LoopControl):
    """break statement"""

    def __init__(self):
        Label.__init__(self, "break")

class Continue(LoopControl):
    """continue statement"""

    def __init__(self):
        Label.__init__(self, "continue")

class Conditional(Stmt):
    """Conditional statement"""

    def __init__(self, condition: Expr):
        Stmt.__init__(self)
        self.condition = condition

class If(Conditional):
    """If statement"""

    def __init__(self, condition: Expr, thencond: Stmt, elsecond: Stmt=None):
        Conditional.__init__(self, condition)
        self.thencond = thencond
        self.elsecond = elsecond

class While(Conditional):
    """While statement"""
    
    def __init__(self, condition: Expr, body: Stmt):
        Conditional.__init__(self, condition)
        self.body = body

class Switch(Conditional):
    """Switch statement"""
    
    def __init__(self, condition: Expr, body: Stmt):
        Conditional.__init__(self, condition)
        self.body = body

class Do(Conditional):
    """Do statement"""

    def __init__(self, condition: Expr, body: Stmt):
        Conditional.__init__(self, condition)
        self.body = body

class For(Stmt):
    """For statement"""

    def __init__(self, init: Expr, condition: Expr, increment: Expr, body: Stmt):
        Stmt.__init__(self)
        self.init= init
        self.condition = condition
        self.increment = increment
        self.body = body

