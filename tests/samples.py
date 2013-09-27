import os
from os import path
import unittest
from pyrser.passes import to_yml
from cnorm.parsing import declaration
from cnorm.passes import to_c

class Samples_Test(unittest.TestCase):

    def test_all(self):
        cparse = declaration.Declaration()
        sample_path = path.join(path.dirname(__file__), 'samples')
        print("\nTest samples:")
        for f in sorted(os.listdir(sample_path)):
            if f.endswith(".c"):
                fpath = path.join(sample_path, f)
                fpout = fpath + "_out"
                print("- read: %s" % fpath)
                if path.exists(fpout):
                    print("* skip")
                    continue
                res = cparse.parse_file(fpath)
                self.assertTrue(res, "Failed to parse %s" % fpath)
                if res:
                    fout = open(fpout, "w")
                    fout.write(str(res.to_c()))
                    fout.close()

