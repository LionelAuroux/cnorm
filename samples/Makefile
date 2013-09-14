## Makefile de test pour le C normalise !
## author : L. Auroux

SRC := $(wildcard tests/*.c)

TESTED = ${SRC:.c=.i}

.SUFFIXES : .c .i

.c.i : 
	@../bin/cnorm $< > $<.log && echo $< "Success" || echo $< "FAIL"
	@../bin/cnormValidator $< >> $<.log && echo $< "valid Success" || echo $< "valid FAIL"
	@../bin/cnorm -u $< > $<.log && echo $< "unstrict Success" || echo $< "unstrict FAIL"
	@../bin/cnormValidator $< >> $<.log && echo $< "unstrict valid Success" || echo $< "unstrict valid FAIL"
	@touch $@

all : ${TESTED}
	@echo "All tests are done"

clean : 
	@rm -f \
		*~ \
		tests/*~ \
		tests/*.c_* \
                tests/*.c.log\
		tests/*.c.pp \
                tests/*.i \
	@echo "All are cleaned"
