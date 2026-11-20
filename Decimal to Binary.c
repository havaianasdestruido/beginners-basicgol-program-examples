#include <basicgol.h>

INICIO
    ESCREVA("enter a decimal no");
    INTEIRO b;
    SE NAO LEIA_OK(b) OU b < 0 ENTAO
        RETORNE 1;
    FIM_SE
    INTEIRO c, e[100], count = 0, i = 0;
    ENQUANTO b > 1 FACA
        c = b MOD 2;
        b = b / 2;
        e[i] = c;
        count++;
        i++;
    FIM_ENQUANTO
    e[i] = b;

    INTEIRO j;
    PARA_PASSO (j, count, 0, -1) {
        ESCREVA(e[j]);
    }
FIM
