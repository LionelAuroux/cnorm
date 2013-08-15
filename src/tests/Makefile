##
## Makefile for unit testing of Cnorm library
## Cnorm v3.0 
## author : L. Auroux


SRC		:= $(wildcard *.cws)

TESTED		= $(SRC:.cws=.tested)

.SUFFIXES	: .cws .tested

.cws.tested	:
	@codeworker -nologo -I ${CNORM_PATH}/src -script $< > $@ && echo $@ || cat $@

all		: message ${TESTED}
	@echo "All tests are done"

message		: test_var ${CNORM_PATH}/src
	@echo Test using cnorm found in ${CNORM_PATH}/src

test_var	:
	@test -n "${CNORM_PATH}" || echo "Set CNORM_PATH in your environment. Ignore following lines."

clean		:
	@rm -f *.out *~ *.xml *.tree *.c *.c_* *.pp ${TESTED}
	@echo "All are cleaned"
