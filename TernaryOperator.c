#include <basicgol.h>

// Largest number among 3 numbers using ternary operator

INICIO
    REAL_CURTO a, b, c, large;
    ESCREVAL("Enter any 3 numbers");
    SE NAO LEIA_OK(a) OU NAO LEIA_OK(b) OU NAO LEIA_OK(c) ENTAO
        ERRO("Invalid input");
    FIM_SE
    large = a > b ? (a > c ? a : c) : (b > c ? b : c);
    ESCREVA_FMT("The larger no is :%f\n", large);
    RETORNE 0;
FIM
