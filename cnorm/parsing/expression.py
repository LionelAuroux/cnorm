from pyrser import meta, directives
from pyrser.hooks import echo
from pyrser.parsing.node import Node
from cnorm import nodes
from pyrser.grammar import Grammar
from cnorm.parsing.literal import Literal


# TODO: handle dialect differently
Idset = {
    # ASM
    "asm":                  "asm",
    "__asm":                "asm",
    "__asm__":              "asm",
    # ATTRIBUTE
    "attribute":            "attribute",
    "__attribute":          "attribute",
    "__attribute__":        "attribute",
    #      windows attribute
    "__declspec":           "attribute",
    ############
    "auto":                 "qualifier",
    # SPECIFIER
    #      sign
    "unsigned":             "sign_unsigned",
    "__unsigned":           "sign_unsigned",
    "__unsigned__":         "sign_unsigned",
    "signed":               "sign_signed",
    "__signed":             "sign_signed",
    "__signed__":           "sign_signed",
    #      size
    "short":                "specifier_size",
    "long":                 "specifier_size_size",
    #      composed
    "struct":               "specifier_block",
    "union":                "specifier_block",
    "enum":                 "specifier_enum",
    #      function
    "inline":               "funspecifier",
    "__inline":             "funspecifier",
    "__inline__":           "funspecifier",
    "__forceinline":        "funspecifier",
    # STORAGE
    "register":             "storage",
    "typedef":              "storage",
    "static":               "storage",
    "extern":               "storage",
    "__thread":             "storage",
    # QUALIFIER
    "const":                "qualifier",
    "volatile":             "qualifier",
    "restrict":             "qualifier",
    "__volatile":           "qualifier",
    "__volatile__":         "qualifier",
    "__const":              "qualifier",
    "__restrict":           "qualifier",
    #      windows qualifier
    "__cdecl":              "qualifier",
    "__stdcall":            "qualifier",
    "__fastcall":           "qualifier",
    "__w64":                "qualifier",
    "__ptr32":              "qualifier",
    "__ptr64":              "qualifier",
    # TYPE
    "void":                 "type",
    "char":                 "type",
    "int":                  "type",
    "float":                "type",
    "double":               "type",
    "_Complex":             "type",
    "__complex":            "type",
    "__complex__":          "type",
    "_Imaginary":           "type",
    "_Bool":                "type",
    "__label__":            "type",
    "__builtin_va_list":    "type",
    "__int8":               "type",
    "__int16":              "type",
    "__int32":              "type",
    "__int64":              "type",
    # SIZEOF/TYPEOF
    #      sizeof
    "sizeof":               "sizeof",
    "__alignof":            "sizeof",
    "__alignof__":          "sizeof",
    #      typeof
    "typeof":               "typeof",
    "__typeof":             "typeof",
    "__typeof__":           "typeof",
    # UNARY OP
    "__real":               "unary",
    "__real__":             "unary",
    "__imag":               "unary",
    "__imag__":             "unary",
    "__extension__":        "unary",
    # RESERVED KEYWORDS
    "switch":               "reserved",
    "case":                 "reserved",
    "default":              "reserved",
    "if":                   "reserved",
    "else":                 "reserved",
    "while":                "reserved",
    "do":                   "reserved",
    "for":                  "reserved",
    "goto":                 "reserved",
    "continue":             "reserved",
    "break":                "reserved",
    "return":               "reserved",
    "__builtin_offsetof":   "reserved"
}


class Expression(Grammar, Literal):
    """
        interaction with other CNORM PART:

    """
    entry = "expression"
    grammar = """

        /*
            Comment works as in C/C++
        */

        dummy_with_brace = [ @ignore('null')
            [
            '{' dummy_with_brace* '}'
            | Base.string
            | Base.char
            | Base.read_char:c #check_not_brace(c)
            ]
        ]

        dummy_with_paren = [ @ignore('null')
            [
            '(' dummy_with_paren* ')'
            | Base.string
            | Base.char
            | Base.read_char:c #check_not_paren(c)
            ]
        ]

        expression = [
            assignement_expression:>_
            [
                ',':op #new_raw(op, op)
                assignement_expression:param
                #new_binary(_, op, param)
            ]*
        ]

        assign_op = [
            @ignore('null')
            [
                '=' !'='
                | "+="
                | "-="
                | "*="
                | "/="
                | "%="
                | "<<="
                | ">>="
                | "&="
                | "^="
                | "|="
            ]:op
            #new_raw(_, op)
        ]
        assignement_expression = [
            conditional_expression:>_
            [
                assign_op:op
                assignement_expression:param
                #new_binary(_, op, param)
            ]*
        ]

        constant_expression = [ conditional_expression:>_ ]

        conditional_expression = [
            logical_or_expression:>_
            [
                '?'
                expression?:then
                ':'
                assignement_expression?:else
                #new_ternary(_, then, else)
            ]?
        ]

        logical_or_op = [ @ignore('null') ["||"]:op #new_raw(_, op) ]
        logical_or_expression = [
            logical_and_expression:>_
            [
                logical_or_op:op
                logical_and_expression:param
                #new_binary(_, op, param)
            ]*
        ]

        logical_and_op = [ @ignore('null') ["&&"]:op #new_raw(_, op) ]
        logical_and_expression = [
            or_expression:>_
            [
                logical_and_op:op
                or_expression:param
                #new_binary(_, op, param)
            ]*
        ]

        or_op = [ @ignore('null') ["|" !["|"|"="]]:op #new_raw(_, op) ]
        or_expression = [
            xor_expression:>_
            [
                or_op:op
                xor_expression:param
                #new_binary(_, op, param)
            ]*
        ]

        xor_op = [ @ignore('null') ["^" !"="]:op #new_raw(_, op) ]
        xor_expression = [
            and_expression:>_
            [
                xor_op:op
                and_expression:param
                #new_binary(_, op, param)
            ]*
        ]

        and_op = [ @ignore('null') ["&" !["&"|"="]]:op #new_raw(_, op) ]
        and_expression = [
            equality_expression:>_
            [
                and_op:op
                equality_expression:param
                #new_binary(_, op, param)
            ]*
        ]

        eqneq_op = [ @ignore('null') ["==" | "!="]:op #new_raw(_, op) ]
        equality_expression = [
            relational_expression:>_
            [
                eqneq_op:op
                relational_expression:param
                #new_binary(_, op, param)
            ]*
        ]

        cmp_op = [
            @ignore('null')
            [
                "<="
                | ">="
                | '<' !'<'
                | '>' !'>'
            ]:op
            #new_raw(_, op)
        ]
        relational_expression = [
            shift_expression:>_
            [
                cmp_op:op
                shift_expression:param
                #new_binary(_, op, param)
            ]*
        ]

        shift_op = [
            @ignore('null')
            [
                "<<" !"="
                | ">>" !"="
            ]:op
            #new_raw(_, op)
        ]
        shift_expression = [
            additive_expression:>_
            [
                shift_op:op
                additive_expression:param
                #new_binary(_, op, param)
            ]*
        ]

        add_op = [
            @ignore('null')
            [
                '+' !['+'|'=']
                | '-' !['-'|'='|'>']
            ]:op
            #new_raw(_, op)
        ]
        additive_expression = [
            multiplicative_expression:>_
            [
                add_op:op
                multiplicative_expression:param
                #new_binary(_, op, param)
            ]*
        ]

        mul_op = [ @ignore('null') [['*'|'/'|'%']:op !'='] #new_raw(_, op) ]
        multiplicative_expression = [
            unary_expression:>_
            [
                mul_op:op
                unary_expression:param
                #new_binary(_, op, param)
            ]*
        ]

        unary_op = [ @ignore('null')
            ["++"
            |"--"
            |"&&"
            | '&' !'='
            | '*' !'='
            | '~' !'='
            | '!' !'='
            | '+' !'='
            | '-' !['>'|'=']
            ]:op #new_raw(_, op)
        ]
        unary_expression =
        [
                postfix_expression:>_
            |
                __scope__:op
                [   unary_op:>op
                |   Base.id:i
                    #is_raw(op, i)
                ]
                unary_expression:expr
                #new_unary(_, op, expr)
        ]

        postfix_expression = [
            primary_expression:>_
            [
                __scope__:pres
                [
                '[' expression:expr ']' #new_array_call(pres, _, expr)
                | '(' func_arg_list?:args ')' #new_func_call(pres, _, args)
                | '.' identifier:i #new_dot(pres, _, i)
                | "->" identifier:i #new_arrow(pres, _, i)
                | ["++"|"--"]:op #new_raw(op, op) #new_post(pres, op, _)
                ]
                #bind('_', pres)
            ]*
        ]

        func_arg_list = [
            assignement_expression:a #new_arg(_, a)
            [   ','
                assignement_expression:a #new_arg(_, a)
            ]*
        ]

        primary_expression = [
            '(' expression:expr ')' #new_paren(_, expr)
            | [ Literal.literal | identifier ]:>_
        ]

        identifier = [
            @ignore('null')
            [
                rootidentifier:id
                #check_is_id(id)
                #new_id(_, id)
            ]
        ]

        rootidentifier = [ Base.id ]
    """


@meta.hook(Expression)
def new_ternary(self, ast, then_expr, else_expr):
    cond = Node()
    cond.set(ast)
    ast.set(nodes.Ternary([], [cond, then_expr, else_expr]))
    return True


@meta.hook(Expression)
def new_binary(self, ast, op, param):
    left = Node()
    left.set(ast)
    ast.set(nodes.Binary(op, [left, param]))
    return True


@meta.hook(Expression)
def is_raw(self, op, ident):
    ident_value = self.value(ident)
    if ident_value in Idset and Idset[ident_value] == "unary":
        op.set(nodes.Raw(ident_value + " "))
        return True
    return False


@meta.hook(Expression)
def new_unary(self, ast, op, param):
    opu = Node()
    opu.set(op)
    p = Node()
    p.set(param)
    ast.set(nodes.Unary(opu, [p]))
    return True


@meta.hook(Expression)
def new_paren(self, ast, expr):
    ast.set(nodes.Paren("()", [expr]))
    return True


@meta.hook(Expression)
def new_post(self, ast, op, param):
    ast.set(nodes.Post(op, [param]))
    return True


@meta.hook(Expression)
def new_arg(self, ast, arg):
    if not hasattr(ast, 'list'):
        ast.list = []
    ast.list.append(arg)
    return True


@meta.hook(Expression)
def new_array_call(self, ast, call, index):
    ast.set(nodes.Array(call, [index]))
    return True


@meta.hook(Expression)
def new_dot(self, ast, call, field):
    ast.set(nodes.Dot(call, [field]))
    return True


@meta.hook(Expression)
def new_arrow(self, ast, call, field):
    ast.set(nodes.Arrow(call, [field]))
    return True


@meta.hook(Expression)
def new_func_call(self, ast, call, args):
    if hasattr(args, 'list'):
        ast.set(nodes.Func(call, args.list))
    else:
        ast.set(nodes.Func(call, []))
    return True


@meta.hook(Expression)
def new_raw(self, ast, data):
    ast.set(nodes.Raw(self.value(data)))
    return True


@meta.hook(Expression)
def new_id(self, ast, identifier):
    ast.set(nodes.Id(self.value(identifier)))
    return True


@meta.hook(Expression)
def check_not_brace(self, c):
    c_value = self.value(c)
    return c_value != "{" and c_value != "}" \
        and c_value != "'" and c_value != '"'


@meta.hook(Expression)
def check_not_paren(self, c):
    c_value = self.value(c)
    return c_value != "(" and c_value != ")" \
        and c_value != "'" and c_value != '"'


@meta.hook(Expression)
def check_is_id(self, identifier):
    return self.value(identifier) not in Idset
