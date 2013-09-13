import setuptools


setuptools.setup(
    name='cnorm',
    version='4.0.1a',
    url='https://code.google.com/p/cnorm/',
    license='GPLv3',
    author='Lionel Auroux',
    author_email='lionel.auroux@gmail.com',
    classifiers=[
        'Development Status :: 3 - Alpha',
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
