#!/usr/bin/env python3.3
import setuptools


setuptools.setup(
    name='cnorm',
    version='4.0.1',
    url='https://code.google.com/p/cnorm/',
    license='GPLv3',
    author='Lionel Auroux',
    author_email='lionel.auroux@gmail.com',
    description='CNORM a C Front-end in Python',
    keywords=['parsing', 'grammar', 'C'],
    classifiers=[
        'Development Status :: 5 - Production/Stable',
        'Intended Audience :: Developers',
        'License :: OSI Approved :: GNU General Public License v3 (GPLv3)',
        'Programming Language :: Python :: 3.3',
        'Topic :: Software Development :: Code Generators',
        'Topic :: Software Development :: Compilers',
        'Topic :: Software Development :: Libraries :: Python Modules',
    ],
    install_requires=['pyrser'],
    packages=['cnorm', 'cnorm.parsing', 'cnorm.passes', 'cnorm.type_handling'],
#    test_loader='unittest:TestLoader',
#    test_suite='tests'
)
