#include <basicgol.h>

INICIO
    INTEIRO n;
    ESCREVA("enter the value of n");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE
    SE n MOD 2 == 0 ENTAO
        ESCREVA("n is even number");
    SENAO
        ESCREVA("n is odd number");
    FIM_SE
FIM
