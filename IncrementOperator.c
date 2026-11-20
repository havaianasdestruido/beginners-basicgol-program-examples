#include <basicgol.h>

// Increment operator

INICIO
    INTEIRO a = 5, b, c;
    b = a++; // Capture the old value, then increment.
    c = ++a; // Increment first, then capture the new value.

    ESCREVA_FMT("Value of b = %d\n Value of c = %d\n", b, c);
    RETORNE 0;
FIM
