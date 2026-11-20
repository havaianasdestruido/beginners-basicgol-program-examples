#include <basicgol.h>

// sizeof() operator in c is used to calculate the size of a variable
// used inside the program and return the size in integer in the form
// of memory bytes

INICIO
    INTEIRO a = 5;
    CARACTERE ch = 'X'; // Capital X
    ESCREVA_FMT("Size of a : %zu Bytes\n", TAMANHO_DE(a));
    ESCREVA_FMT("Size of X : %zu Bytes\n", TAMANHO_DE(ch));
    RETORNE 0;
FIM
