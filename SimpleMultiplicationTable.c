#include <basicgol.h>

INICIO
    INTEIRO num, i = 1;

    ESCREVAL("Enter a number to calculate the multiplication table up to 10:");

    SE NAO LEIA_OK(num) ENTAO
        ERRO("Invalid input");
    FIM_SE

    PARA (i, 1, 10) {
        ESCREVA_FMT("%d x %d = %d\n", i, num, num * i);
    }

    RETORNE 0;
FIM
