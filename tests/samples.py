import os
from os import path
import unittest
from pyrser.passes import to_yml
from cnorm.parsing import declaration
from cnorm.passes import to_c


class Samples_Test(unittest.TestCase):

    def test_all(self):
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
                cparse = declaration.Declaration()
                res = cparse.parse_file(fpath)
                if res:
                    self.assertTrue(res, "Failed to parse %s" % fpath)
                    fout = open(fpout, "w")
                    fout.write(str(res.to_c()))
                    fout.close()
                else:
                    print("* error see logs")
                    fout = open(fpath + ".log", "w")
                    fout.write(
                        res.diagnostic.get_content(
                            with_locinfos=True,
                            with_details=True
                        )
                    )
                    fout.close()
