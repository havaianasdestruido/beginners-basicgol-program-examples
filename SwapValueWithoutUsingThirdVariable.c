#include <basicgol.h>

// Swap two integers without using third variable

INICIO
    INTEIRO a, b;
    ESCREVAL("Enter two no :");
    SE NAO LEIA_OK(a) OU NAO LEIA_OK(b) ENTAO
        ERRO("Invalid input");
    FIM_SE
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    ESCREVA_FMT("After swapping value of a and b : %d,%d", a, b);
    RETORNE 0;
FIM
