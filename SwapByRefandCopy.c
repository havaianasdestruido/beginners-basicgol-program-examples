#include <basicgol.h>

// Swap_ref creates a temporary variable temp and dereffrences the address that was sent to it(this is
// done to get the actual value of the int in the memory space). the dereffrencing allows us to change
// the actual values.
PROCEDIMENTO swap_ref(INTEIRO *a, INTEIRO *b) {
    INTEIRO temp = *a;

    *a = *b;
    *b = temp;
}

// Swap however does not use addresses and reffrences and only alters the ints within it's own scope
PROCEDIMENTO swap(INTEIRO a, INTEIRO b) {
    INTEIRO temp = a;
    a = b;
    b = temp;
}

INICIO
    // Declare 2 int variables that are going to be swapped by reference
    INTEIRO a = 1;
    INTEIRO b = 2;

    ESCREVA_FMT("%d\n", a);
    ESCREVA_FMT("%d\n", b);

    // Pass the Address of the Values to the Swap function
    swap_ref(&a, &b);

    ESCREVA_FMT("%d\n", a);
    ESCREVA_FMT("%d\n", b);

    INTEIRO c = 5;
    INTEIRO d = 10;
    ESCREVA_FMT("%d\n", c);
    ESCREVA_FMT("%d\n", d);

    swap(c, d);

    ESCREVA_FMT("%d\n", c);
    ESCREVA_FMT("%d\n", d);
FIM
