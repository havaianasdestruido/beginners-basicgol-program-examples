#include <basicgol.h>

INICIO
    INTEIRO a, b, t;
    ESCREVA("Enter two Numbers : ");
    SE NAO LEIA_OK(a) OU NAO LEIA_OK(b) ENTAO
        ERRO("Invalid input");
    FIM_SE
    t = b;
    b = a;
    a = t;
    ESCREVA_FMT("Swap is %d %d", a, b);
FIM
