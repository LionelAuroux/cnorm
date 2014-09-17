from pyrser import meta, directives
from pyrser.grammar import Grammar
from pyrser.hooks import echo
from pyrser.parsing.node import Node
from pyrser.directives import ignore
from cnorm import nodes
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

        single_statement = [
            [compound_statement
            | labeled_statement
            | expression_statement
            ]:>_
        ]

        compound_statement = [
            [
            '{'
                __scope__:current_block
                #new_blockstmt(_, current_block)
                [
                    line_of_code
                ]*
            '}'
            ]
        ]

        line_of_code = [
            single_statement:line
            #end_loc(current_block, line)
        ]

        labeled_statement = [
            Expression.rootidentifier:ident
            [ #check_stmt(ident, "if") if_statement:>_
            | #check_stmt(ident, "for") for_statement:>_
            | #check_stmt(ident, "while") while_statement:>_
            | #check_stmt(ident, "switch") switch_statement:>_
            | #check_stmt(ident, "do") do_statement:>_
            | #check_stmt(ident, "return") return_statement:>_
            | #check_stmt(ident, "goto") goto_statement:>_
            | #check_stmt(ident, "case") case_statement:>_
            | #check_stmt(ident, "break") ';' #new_break(_)
            | #check_stmt(ident, "continue") ';' #new_continue(_)
            | ':' #new_label(_, ident)
            ]
        ]

        if_statement = [
            '(' expression:cond ')'
            single_statement:then
            __scope__:else
            [
                "else"
                single_statement:>else
            ]?
            #new_if(_, cond, then, else)
        ]

        for_statement = [
            '('
                expression_statement:init
                expression_statement:cond
                expression?:inc
            ')'
            single_statement:body
            #new_for(_, init, cond, inc, body)
        ]

        while_statement = [
            '('
                expression:cond
            ')'
            single_statement:body
            #new_while(_, cond, body)
        ]

        switch_statement = [
            '(' expression:cond ')'
            single_statement:body
            #new_switch(_, cond, body)
        ]

        do_statement = [
            single_statement:body
            "while" '(' expression:cond ')' ';'
            #new_do(_, cond, body)
        ]

        return_statement = [
            expression?:e ';'
            #new_return(_, e)
        ]

        goto_statement = [
            expression:e ';'
            #new_goto(_, e)
        ]

        range_expression = [
            constant_expression:>_
            [
                "..."
                constant_expression:r
                #new_range(_, r)
            ]?
        ]

        case_statement = [
            range_expression:e #new_case(_, e)
            ':'
        ]

        expression_statement = [
            [expression:e #new_expr(_, e)]?
            ';'
        ]

    """


@meta.hook(Statement)
def new_expr(self, ast, expr):
    ast.set(nodes.ExprStmt(expr))
    return True


@meta.hook(Statement)
def new_if(self, ast, cond_expr, then_expr, else_expr):
    ast.set(nodes.If(cond_expr, then_expr, else_expr))
    return True


@meta.hook(Statement)
def new_for(self, ast, init, cond, inc, body):
    ast.set(nodes.For(init, cond, inc, body))
    return True


@meta.hook(Statement)
def new_while(self, ast, cond, body):
    ast.set(nodes.While(cond, body))
    return True


@meta.hook(Statement)
def new_switch(self, ast, cond, body):
    ast.set(nodes.Switch(cond, body))
    return True


@meta.hook(Statement)
def new_do(self, ast, cond, body):
    ast.set(nodes.Do(cond, body))
    return True


@meta.hook(Statement)
def new_return(self, ast, expr):
    ast.set(nodes.Return(expr))
    return True


@meta.hook(Statement)
def new_goto(self, ast, expr):
    ast.set(nodes.Goto(expr))
    return True


@meta.hook(Statement)
def new_range(self, ast, expr):
    begin = Node()
    begin.set(ast)
    ast.set(nodes.Range(nodes.Raw('...'), [begin, expr]))
    return True


@meta.hook(Statement)
def new_case(self, ast, expr):
    ast.set(nodes.Case(expr))
    return True


@meta.hook(Statement)
def new_break(self, ast):
    ast.set(nodes.Break())
    return True


@meta.hook(Statement)
def new_continue(self, ast):
    ast.set(nodes.Continue())
    return True


@meta.hook(Statement)
def new_label(self, ast, ident):
    ast.set(nodes.Label(self.value(ident)))
    return True


@meta.hook(Statement)
def new_blockstmt(self, ast, current_block):
    ast.set(nodes.BlockStmt([]))
    current_block.ref = ast
    parent = self.rule_nodes.parents
    if (('current_block' in parent
         and hasattr(parent['current_block'].ref, 'types'))):
        current_block.ref.types = parent['current_block'].ref.types.new_child()
    return True


@meta.hook(Statement)
def end_loc(self, current_block, line):
    current_block.ref.body.append(line)
    return True


@meta.hook(Statement)
def check_stmt(self, ident: Node, val: str) -> bool:
    stmt = self.value(ident)
    return stmt == val
