from pyrser import meta, directives
from pyrser.hooks import copy, echo
from pyrser.parsing.node import Node
from cnorm import nodes
from pyrser.grammar import Grammar
from cnorm.parsing.expression import Expression

class Statement(Grammar, Expression):
    """
        interaction with other CNORM PART:

        Declaration.init_declarator -> compound_statement
        Expression.primary_expression -> block_item_list
    """
    entry = "single_statement"
    grammar = """

        /*
            Comment works as in C/C++
        */

        single_statement ::=
            compound_statement:_
            | labeled_statement:_
            | expression_statement:_
        ;

        compound_statement ::=
            '{'
                [
                    line_of_code:lc
                    #add_list(l, lc)
                ]*:l
                #new_blockstmt(_, l)
            '}'
        ;

        line_of_code ::=
            single_statement:_
        ;

        labeled_statement ::=
            rootidentifier:id
            [
            #check_stmt(id, "if") if_statement:_
            | #check_stmt(id, "for") for_statement:_
            | #check_stmt(id, "while") while_statement:_
            | #check_stmt(id, "switch") switch_statement:_
            | #check_stmt(id, "do") do_statement:_
            | #check_stmt(id, "return") return_statement:_
            | #check_stmt(id, "goto") goto_statement:_
            | #check_stmt(id, "case") case_statement:_
            | ':' #new_label(_, id)
            ]
        ;

        if_statement ::=
            '(' expression:cond ')'
            single_statement:then
            ["else"
            // TODO: explain variable forwarding of 'else'
            single_statement:else 
            ]?:else
            #new_if(_, cond, then, else)
        ;

        for_statement ::=
            '(' // TODO: optionals
                expression:init ';'
                expression:cond ';'
                expression:inc
            ')'
            single_statement:body
            #new_for(_, init, cond, inc, body)
        ;

        while_statement ::=
            '(' expression:cond ')'
            single_statement:body
            #new_while(_, cond, body)
        ;

        switch_statement ::=
            '(' expression:cond ')'
            compound_statement:body
            #new_switch(_, cond, body)
        ;

        do_statement ::=
            single_statement:body
            "while" '(' expression:cond ')' ';'
            #new_do(_, cond, body)
        ;

        return_statement ::=
            [expression:e ]?:e ';'
            #new_return(_, e)
        ;

        goto_statement ::=
            [expression:e ]?:e ';'
            #new_goto(_, e)
        ;

        case_statement ::=
            [expression:e ]?:e ':'
            #new_case(_, e)
        ;

        expression_statement ::=
            [expression:e #new_expr(_, e) ]? ';'
        ;

    """

    def parse(self, source, entry=None):
        res = Grammar.parse(self, source, entry)
        if hasattr(res, 'node'):
            return res.node
        return res

@meta.hook(Statement)
def new_expr(self, ast, expr):
    ast.node = nodes.ExprStmt(expr.node)
    return True

@meta.hook(Statement)
def new_if(self, ast, cond_expr, then_expr, else_expr):
    if hasattr(else_expr, 'node'):
        ast.node = nodes.If(cond_expr.node, then_expr.node, else_expr.node)
    else:
        ast.node = nodes.If(cond_expr.node, then_expr.node)
    return True

@meta.hook(Statement)
def new_for(self, ast, init, cond, inc, body):
    ast.node = nodes.For(init.node, cond.node, inc.node, body.node)
    return True

@meta.hook(Statement)
def new_while(self, ast, cond, body):
    ast.node = nodes.While(cond.node, body.node)
    return True

@meta.hook(Statement)
def new_switch(self, ast, cond, body):
    ast.node = nodes.Switch(cond.node, body.node)
    return True

@meta.hook(Statement)
def new_do(self, ast, cond, body):
    ast.node = nodes.Do(cond.node, body.node)
    return True

@meta.hook(Statement)
def new_return(self, ast, expr):
    ast.node = nodes.Return(expr.node)
    return True

@meta.hook(Statement)
def new_goto(self, ast, expr):
    ast.node = nodes.Goto(expr.node)
    return True

@meta.hook(Statement)
def new_case(self, ast, expr):
    ast.node = nodes.Case(expr.node)
    return True

@meta.hook(Statement)
def new_label(self, ast, ident):
    ast.node = nodes.Label(ident.value)
    return True

@meta.hook(Statement)
def new_blockstmt(self, ast, lsblock):
    if not hasattr(lsblock, 'node'):
        return False
    ast.node = nodes.BlockStmt(lsblock.node)
    return True

@meta.hook(Statement)
def add_list(self, lst, item):
    if not hasattr(lst, 'node'):
        lst.node = []
    lst.node.append(item.node)
    return True

@meta.hook(Statement)
def check_stmt(self, ident, val):
    return ident.value == val
