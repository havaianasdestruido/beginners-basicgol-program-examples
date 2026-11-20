#include <basicgol.h>

// Swap two integers using third variable

INICIO
    INTEIRO a, b, c;
    ESCREVAL("Enter two no :");
    SE NAO LEIA_OK(a) OU NAO LEIA_OK(b) ENTAO
        ERRO("Invalid input");
    FIM_SE
    c = a;
    a = b;
    b = c;
    ESCREVA_FMT("After swapping value of a = %d\n b =%d", a, b);
    RETORNE 0;
FIM
