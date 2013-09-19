import os
import argparse
from cnorm.parsing.declaration import Declaration
from cnorm.passes import to_c
from pyrser.passes import to_yml

parser = argparse.ArgumentParser(prog="cnorm", description="CNORM a C language front-end in python")
parser.add_argument("filenames", help="process FILE with cnorm",
                    metavar="FILE", type=str, nargs='+')
parser.add_argument("-y", "--yml", dest="yml", help="show AST nodes as yml", action='store_true')
parser.add_argument("-d", "--dump", dest="dump", help="show AST nodes as vars", action='store_true')

args = parser.parse_args()

for f in args.filenames:
    if f != '-' and os.path.exists(f):
        cparse = Declaration()
        ast = cparse.parse_file(f)
        if args.dump:
            print(vars(ast))
        if args.yml:
            print(ast.to_yml())
        if ast:
            print(ast.to_c())
        else:
            print("something goes wrong")
