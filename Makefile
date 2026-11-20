# Build each standalone M0 example against the official BASICGOL library.
BASICGOL_DIR ?= ../BASICGOL
LIB := $(BASICGOL_DIR)/build/libbasicgol.a
CC ?= cc

.PHONY: all check library
all: library
	@mkdir -p build
	@set -e; count=0; for src in ./*.c; do \
		$(CC) $(CPPFLAGS) $(CFLAGS) -std=c11 -I"$(BASICGOL_DIR)/include" "$$src" \
			$(LDFLAGS) "$(LIB)" -pthread -lm -o "build/$$(basename "$$src" .c)"; \
		count=$$((count + 1)); \
	done; echo "Built $$count BASICGOL examples in build/"

library:
	@test -f "$(BASICGOL_DIR)/include/basicgol.h" || { echo 'Set BASICGOL_DIR to the upstream BASICGOL checkout (see README.md).' >&2; exit 1; }
	$(MAKE) -C "$(BASICGOL_DIR)" biblioteca

check: all
	python3 tests/smoke.py
	python3 tests/arrays.py
