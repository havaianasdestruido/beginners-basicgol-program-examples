#include <basicgol.h>

INICIO
    INTEIRO n, i, sum = 0;
    ESCREVAL("enter n");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE
    PARA (i, 1, n - 1) {
        SE n MOD i == 0 ENTAO
            sum = sum + i;
        FIM_SE
    }
    SE n == sum ENTAO
        ESCREVA("Entered no. is a perfect no. ");
    SENAO
        ESCREVA("Entered no. is not a perfect no.");
    FIM_SE

    RETORNE 0;
FIM
