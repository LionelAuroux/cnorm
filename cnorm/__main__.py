import os
import argparse
from cnorm.parsing.declaration import Declaration
from cnorm.passes import to_c

parser = argparse.ArgumentParser(prog="cnorm", description="CNORM a C language front-end in python")
parser.add_argument("filenames", help="process FILE with cnorm",
                    metavar="FILE", type=str, nargs='+')
#parser.add_argument("-q", "--quiet", dest="filename", help="process FILE with cnorm", metavar="FILE")

args = parser.parse_args()

for f in args.filenames:
    if os.path.exists(f):
        cparse = Declaration()
        ast = cparse.parse_file(f)
        print(ast.to_c())
