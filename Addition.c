#include <basicgol.h>

INICIO
    INTEIRO a, b, c;
    ESCREVA("Enter two Numbers : ");
    SE NAO LEIA_OK(a) OU NAO LEIA_OK(b) ENTAO
        ERRO("Invalid input");
    FIM_SE
    c = a + b;
    ESCREVA_FMT("The Sum is %d", c);
FIM
