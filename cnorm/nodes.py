from pyrser import parsing, meta

Storages = meta.enum('AUTO', 'REGISTER', 'TYPEDEF', 'STATIC', 'EXTERN')
Qualifiers = meta.enum('AUTO', 'CONST', 'VOLATILE', 'RESTRICT')
Specifiers = meta.enum('AUTO', 'INLINE', 'STRUCT', 'UNION', 'ENUM', 'LONG',
                       'LONGLONG', 'SHORT', 'VIRTUAL', 'EXPLICIT')

# EXPRESSION PART

class Expr(parsing.Node):
    """All expression"""

class Func(Expr):
    """For almost everything"""

    def __init__(self, call_expr: Expr, params: list):
        Expr.__init__(self)
        self.call_expr = call_expr
        self.params = params

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

class Binary(Func):
    """For binary operator"""

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

class DeclType(parsing.Node):
    """For type in declaration"""


class PointerType(DeclType):
    """For pointer in declaration"""


class ArrayType(DeclType):
    """For array in declaration"""

    def __init__(self, expr=None):
        DeclType.__init__(self)
        self._expr = expr

class ParenType(DeclType):
    """For parenthesis in declaration"""


class QualType(DeclType):
    """For qualifier in declaration"""

    def __init__(self, qualifier: Qualifiers= Qualifiers.AUTO):
        DeclType.__init__(self)
        # qualifier in (auto, const, volatile, restrict)
        self._qualifier = qualifier


class CType(parsing.Node):
    """Base for primary/func
        
        TODO: 
            - add a function that iter decltypes and delete unnecessary parenthesis
    """

    def __init__(self):
        parsing.Node.__init__(self)
        self._decltypes = []
        # only one storage by declaration (auto, register, typedef, static, extern)
        self._storage = Storages.AUTO

    def add_out(self, t: DeclType):
        if not isinstance(t, DeclType):
            raise Exception("add only C type declarator")
        self._decltypes.append(t)

    def add_in(self, t: DeclType):
        if not isinstance(t, DeclType):
            raise Exception("add only C type declarator")
        self._decltypes.insert(0, t)

class PrimaryType(CType):
    """For primary type in declaration"""

    def __init__(self, identifier: str):
        CType.__init__(self)
        # identifier (void, char, int, float, double, typedefname)
        self._identifier = identifier


class FuncType(CType):
    """For function in declaration"""

    def __init__(self, rt: CType=PrimaryType('int'), params=[]):
        CType.__init__(self)
        self._params = params
        self._return_type = rt
        # TODO: func definition
        # self.body

    @property
    def return_type(self):
        return self._return_type

    @property
    def params(self):
        return self._params

class Decl(Expr):
    """For basic declaration"""

    def __init__(self, name: str, ct=PrimaryType('int')):
        Expr.__init__(self)
        self._name = name
        self._ctype = ct

    @property
    def ctype(self) -> CType:
        return self._ctype

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

    def __init__(self, block: [ExprStmt]):
        parsing.Node.__init__(self)
        self.block = block

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

    def __init__(self, block: [ExprStmt]):
        BlockStmt.__init__(self, block)

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

