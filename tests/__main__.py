import os
from os import path
import sys
import unittest

# Add parent directory in front of path to import pyrser and tests from sources
parent_dir = path.join(path.dirname(__file__), os.pardir)
if parent_dir not in sys.path:
    sys.path.insert(0, parent_dir)

from tests.internal_cnorm import InternalCnorm_Test
from tests.internal_parsing import InternalParsing_Test
from tests.samples import Samples_Test

# Test cases in order
test_cases = (
    InternalCnorm_Test,
    InternalParsing_Test,
    Samples_Test,
)


def load_tests(loader, standard_tests, pattern):
    loader = unittest.defaultTestLoader
    if test_unit:
        suite = loader.discover(parent_dir)
    else:
        suite = unittest.TestSuite()

    if test_integration:
        for test_case in test_cases:
            tests = loader.loadTestsFromTestCase(test_case)
            suite.addTests(tests)
    return suite

if __name__ == '__main__':
    test_unit, test_integration = False, True
    if 'all' in sys.argv[1:]:
        test_unit = True
        sys.argv.remove('all')
    elif 'unit' in sys.argv[1:]:
        test_integration, test_unit = test_unit, test_integration
        sys.argv.remove('unit')
    unittest.main()
