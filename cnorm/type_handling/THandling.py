#!/usr/bin/env python3
"""
        Type handling
"""

# scope contient toutes les surcharges
# f1(int,int)int ou f1(double, char)truc
# a as int ou a as double
# b as int ou b as toto
# c as int ou c as toto ou c as tata
scope = { 'f1': [
                {'symbol':'f1_int_int_int', 'param':['int', 'int'], 'type':'int'},
                {'symbol':'f1_truc_double_char', 'param':['double', 'char'], 'type':'truc'},
                ],
          'a':[{'type':'int', 'symbol':'a_int'}, {'type':'double', 'symbol':'a_double'}],
          'b':[{'type':'int', 'symbol':'b_int'}, {'type':'toto', 'symbol':'b_toto'}], 
          'c':[{'type':'int', 'symbol':'c_int'}, {'type':'tata', 'symbol':'c_tata'}, {'type':'toto', 'symbol':'c_toto'}]
        }
print("scope: %s" % repr(scope))

class   Log:
        indent = 0
        def     incdent():
                Log.indent += 1
        def     decdent():
                Log.indent -= 1
        def     log(s):
                print("%s%s" % ("\t" * Log.indent, s))

class   THandling:
        def     __init__(self, scope):
                self.scope = scope
        
        # retro propagation des types
        def     typeFeedback(self, expr, expr_type):
                Log.log("type this expr with symbol %s" % expr_type)
                expr['symbol'] = expr_type['symbol']
                expr['type'] = expr_type['type']
                # before remove candidates retro propagate parameter
                if 'param' in expr_type:
                        fun_arity = len(expr_type['param'])
                        for pidx in range(0, fun_arity):
                                Log.log("at INDEX %d = %s" % (pidx, repr(expr['param'])))
                                param_candidat = {tp['type']:tp for tp in expr['param'][pidx]['candidates']}
                                if expr_type['param'][pidx] in param_candidat:
                                        Log.incdent()
                                        self.typeFeedback(expr['param'][pidx], param_candidat[expr_type['param'][pidx]])
                                        Log.decdent()
                del expr['candidates']

        # type une expression
        def     typeExpr(self, expr):
                # result
                candidates = []
                Log.log("expr: %s" % repr(expr))
                # search all overloads for the function
                overloads = self.scope[expr['name']]
                Log.log("found overloads for function %s" % expr['name'])
                # get all thing overloads
                for thing in overloads:
                        Log.log("overload %s" % thing['symbol'])
                        # is just a var
                        if 'param' not in expr or len(expr['param']) == 0:
                                Log.log("Is JUST A THING:")
                                candidates.append(thing)
                        else:
                                # count function arity in expression
                                fun_arity = len(expr['param'])
                                # select only function overloads with same arity TODO: ellipsis
                                if (len(thing['param']) == fun_arity):
                                        Log.log("select %s for arity" % thing['symbol'])
                                        # result list param
                                        list_param = []
                                        # for all param fetch possible type
                                        for pidx in range(0, fun_arity):
                                                Log.log("idx: %s" % pidx)
                                                # get name of param
                                                pname = expr['param'][pidx]['name']
                                                # get types of this param
                                                Log.incdent()
                                                self.typeExpr(expr['param'][pidx])
                                                Log.decdent()
                                                types = set([tp['type'] for tp in expr['param'][pidx]['candidates']])
                                                Log.log("param %s is %s" % (pname, repr(types)))
                                                # intersect type of overload and types
                                                ptype = thing['param'][pidx]
                                                Log.log("intersect with %s" % ptype)
                                                if ptype in types:                                        
                                                        Log.log("FOUND: %s" % ptype)
                                                        list_param.append(ptype)
                                        # test the candidates
                                        if (len(list_param) == fun_arity):
                                                candidates.append(thing)
                # add candidates in expression
                if len(candidates) > 0:
                        expr['candidates'] = candidates
                        # TODO: retro propagation
                        if len(candidates) == 1:
                                Log.log("retro propagation")
                                Log.incdent()
                                self.typeFeedback(expr, expr['candidates'][0])
                                Log.decdent()
                        return True
                return False

typehandler = THandling(scope)

# expression
expr = {'name':'f1', 'param':[{'name':'a'}, {'name':'b'}]}
print("EXPR BEFORE:%s" % repr(expr))
# call type handling
if typehandler.typeExpr(expr):
        print("EXPR AFTER: %s" % repr(expr))

if __name__ == "__main__":
        import doctest
        doctest.testmod(verbose=True)
