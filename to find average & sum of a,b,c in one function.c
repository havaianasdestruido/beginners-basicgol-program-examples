#include <basicgol.h>

INICIO
    INTEIRO a, b, c, sum, average;
    ESCREVA("enter the values of a,b,c");
    SE NAO LEIA_OK(a) ENTAO
        ERRO("Invalid input");
    FIM_SE
    SE NAO LEIA_OK(b) ENTAO
        ERRO("Invalid input");
    FIM_SE
    SE NAO LEIA_OK(c) ENTAO
        ERRO("Invalid input");
    FIM_SE
    sum = a + b + c;
    ESCREVA_FMT("%d\n", sum);
    {
        average = sum / 3;
        ESCREVA_FMT("%d\n", average);
    }
FIM
