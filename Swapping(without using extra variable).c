#include <basicgol.h>

INICIO
    INTEIRO a, b;
    ESCREVAL("Enter a and b");
    SE NAO LEIA_OK(a) OU NAO LEIA_OK(b) ENTAO
        ERRO("Invalid input");
    FIM_SE
    a = a + b;
    b = a - b;
    a = a - b;
    ESCREVA_FMT("After swapping a and b are %d %d", a, b);
FIM
