#
# Makefile de pilotage de version du Cnorm
#
#

DISTRIB_STUDENT = $(wildcard ../src/*.cw{s,p})
DISTRIB_ALL = ${DISTRIB_STUDENT} $(wildcard ../src/*.cwt)
VERSION = 3.0
ALPHA = ${VERSION}.3

all:
	@echo "Usage:"
	@echo "$> [NOT USABLE] make cpp // generate C++ files from Cnorm"
	@echo "$> [NOT USABLE] make comp // generate and compile C++ files from Cnorm"
	@echo "$> make dist // create a distribuable tarball"

cpp: ${DISTRIB_ALL}
	@echo "Generate C++ files..."
	@codeworker -nologo -script geneCPP.cws

comp: cpp
	@echo "Making binary..."
	@cd src/;make

wikirule:
	@echo "Push Grammar in wiki"
	@cat ../src/cnormStatements.cwp | grep -F -v "/**/" |grep -v ^#|sed -e s/\(.*\)// > ../../wiki/grammar.wiki
	@cat ../src/cnormExpressions.cwp | grep -F -v "/**/" |grep -v ^#|sed -e s/\(.*\)// >> ../../wiki/grammar.wiki
	@cat ../src/cnormLiteral.cwp | grep -F -v "/**/" |grep -v ^#| sed -e s/\(.*\)// >> ../../wiki/grammar.wiki

dist: clean
	@echo "Making a tarball for student..."
	@rm -rf /tmp/cnorm_${VERSION}
	@mkdir /tmp/cnorm_${VERSION}
	@cp -rL ../* /tmp/cnorm_${VERSION}
	@rm -rf /tmp/cnorm_${VERSION}/doc
	@rm -rf /tmp/cnorm_${VERSION}/dist
	@rm -rf /tmp/cnorm_${VERSION}/src/TODO
	@find /tmp/cnorm_${VERSION} -name ".svn" | xargs rm -rf
	@rm -f ../../cnorm_${ALPHA}.tbz
	@tar cvjf ../../cnorm_${ALPHA}.tbz -C /tmp cnorm_${VERSION}

clean : 
	@rm -rf src
	@find ../.. -name "*~" |xargs rm -f
	@find ../.. -name "*.c_*" |xargs rm -f
	@find ../.. -name "*.c.pp" |xargs rm -f
	@echo "All are cleaned"
