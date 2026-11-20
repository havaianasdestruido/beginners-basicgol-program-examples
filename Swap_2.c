#include <basicgol.h>

INICIO
    INTEIRO a, b;
    ESCREVA("Enter two Numbers : ");
    SE NAO LEIA_OK(a) OU NAO LEIA_OK(b) ENTAO
        ERRO("Invalid input");
    FIM_SE
    a = a + b;
    b = a - b;
    a = a - b;
    ESCREVA_FMT("Swap is %d %d", a, b);
FIM
