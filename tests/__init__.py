import unittest

from tests.internal_cnorm import InternalCnorm_Test
from tests.internal_parsing import InternalParsing_Test


__all__ = [
    'InternalCnorm_Test',
    'InternalParsing_Test'
    ]


# Use cases in order
use_cases = (
    InternalCnorm_Test,
    InternalParsing_Test,
)


def load_tests(loader, standard_tests, pattern):
    standard_tests.addTest(loader.discover('tests/cnorm'))
    for use_case in use_cases:
        tests = loader.loadTestsFromTestCase(use_case)
        standard_tests.addTests(tests)
    return standard_tests
