## Makefile de test pour le C normalise !
## author : L. Auroux

SRC := $(wildcard tests/*.c)

TESTED = ${SRC:.c=.i}

.SUFFIXES : .c .i

.c.i : 
	@../bin/cnorm $< > $<.log && echo $< "Success"
	@echo -n ">> valid " $< " "
	@../bin/cnormValidator $< >> $<.log && echo "Success" || echo "FAIL"
	@../bin/cnorm -u $< > $<.log && echo $< "Success Unstrict"
#	@echo -n ">> valid UNSTRICT " $< " "
#	@../bin/cnormValidator $< >> $<.log && echo "Success" || echo "FAIL"
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
