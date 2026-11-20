#include <basicgol.h>

/*
 * Handling of pointers in a C program
 * A pointer in the C language is an object that stores the address of another
 * object.
 * A pointer in C is used to allocate memory dynamically i.e. at run time.
 */

INICIO
    INTEIRO *pc; /* the '*' is used to make pointer */
    INTEIRO c;

    c = 22;
    ESCREVA_FMT("Address of c: %p\n", (VAZIO *)&c);
    ESCREVA_FMT("Value of c: %d\n\n", c);

    pc = &c;
    ESCREVA_FMT("Address of c: %p\n", (VAZIO *)pc);
    ESCREVA_FMT("Content of c: %d\n\n", *pc);

    c = 11;
    ESCREVA_FMT("Address of c: %p\n", (VAZIO *)pc);
    ESCREVA_FMT("Content of c: %d\n\n", *pc);

    *pc = 2;
    ESCREVA_FMT("Address of c: %p\n", (VAZIO *)&c);
    ESCREVA_FMT("Value of c: %d\n\n", c);
    RETORNE 0;
FIM
