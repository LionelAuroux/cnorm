Tutorial I: A little tour of CNORM
==================================

At least, for using CNORM, you just need few imports.::

    from cnorm.parsing.declaration import Declaration
    from cnorm.passes import to_c

    cparse = Declaration()
    ast = cparse.parse_file("test.c")
    print(ast.to_c())

This little script processes the file ``test.c``, creates an AST and prints a re-generated C source code:

    * The object ``Declaration`` is a pyrser grammar of a C parser.
    * ``parse_file()`` is provide by pyrser to parse a file and return an AST.
    * The ``to_c()`` method allow you to re-generate a C source code from an AST.

Let's code a little tool using CNORM called `hfile`. Our goal is to process a C implementation file (`.c`) and to generate an corresponding header file.

1- Going thru Declarations
--------------------------

We need to:

    * Parse a C file and get an AST.
    * Walk thru that AST and identify ``declaration``.
    * Create a new AST containing only external declaration for the future header file.
    * Re-generate C code from our new AST to get the header file.

We could begin with our typical minimal script.::

    import sys
    from cnorm.parsing.declaration import Declaration
    from cnorm.passes import to_c

    cparse = Declaration()
    ast = cparse.parse_file(sys.argv[1])

Now, we need to iterate thru the ast. By default, the nodes return by ``parse`` methods are RootBlockStmt. A RootBlockStmt is a special BlockStmt to hold
global scope definition. This class provide an iterable body.::

    for node in ast.body:
        print("%s" % type(node))

This kind of program show us that all things we could get from a RootBlockStmt is just ``<class 'cnorm.nodes.Decl'>`` instance.

See :doc:`nodes` for more information about AST nodes.

2- Modifying AST nodes
----------------------

For our header file we need to store all declaration and made some transformation:

    * Create a RootBlockStmt for our final header file.
    * Copy declaration nodes
    * Transform global variable definition into ``extern`` variable declaration.
    * Copy function prototype without the body.

To do safe transformation, we could use the module ``copy`` to do a swallow copy of each node and alter some flags.

- Begins by creating a variable to store our futur global scope.::

    from cnorm import nodes
    header_file = nodes.RootBlockStmt([])

- Copy safely the nodes.::

    from copy import copy
    for node in ast.body:
        futur_node = copy(node)
        futur_node._ctype = copy(node._ctype)

- Made some change.::

        # Function become prototype
        if hasattr(futur_node, 'body'):
            delattr(futur_node, 'body')
        # No assignement of variable
        if hasattr(futur_node, '_assign_expr'):
            delattr(futur_node, '_assign_expr')
        if hasattr(futur_node, '_colon_expr'):
            delattr(futur_node, '_colon_expr')
        # Add extern storage
        futur_node._storage = nodes.Storages.EXTERN

- Store the new node.::

        header_file.body.append(futur_node)

Understanding AST is essential to play with CNORM.
See below the complete example::

    import sys
    from cnorm.parsing.declaration import Declaration
    from cnorm.passes import to_c
    
    cparse = Declaration()
    ast = cparse.parse_file(sys.argv[1])
    
    from cnorm import nodes
    header_file = nodes.RootBlockStmt([])
    from copy import copy
    for node in ast.body:
        futur_node = copy(node)
        futur_node._ctype = copy(node._ctype)
        # Function become prototype
        if hasattr(futur_node, 'body'):
            delattr(futur_node, 'body')
        # No assignement of variable
        if hasattr(futur_node, '_assign_expr'):
            delattr(futur_node, '_assign_expr')
        if hasattr(futur_node, '_colon_expr'):
            delattr(futur_node, '_colon_expr')
        # Add extern storage
        futur_node.ctype._storage = nodes.Storages.EXTERN
        # store
        header_file.body.append(futur_node)
    
    fout = open(sys.argv[1].rpartition('.')[0] + ".h", "w")
    fout.write(str(header_file.to_c()))
    fout.close()
