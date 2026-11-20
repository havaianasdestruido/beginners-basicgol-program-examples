#include <basicgol.h>

INICIO
    INTEIRO i, n, c = 0;
    ESCREVA("Enter a Number : ");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE
    SE n < 2 ENTAO
        ESCREVA("NOT a prime number");
        RETORNE 0;
    FIM_SE
    PARA (i, 2, n - 1) {
        SE n MOD i == 0 ENTAO
            ESCREVA("NOT a prime number");
            c++;
            PARE;
        FIM_SE
    }
    SE c == 0 ENTAO
        ESCREVA_FMT("%d is a prime number", n);
    FIM_SE
FIM
