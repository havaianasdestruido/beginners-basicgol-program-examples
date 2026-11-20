#include <basicgol.h>

FUNCAO INTEIRO factorial(INTEIRO num) {
    SE num <= 1 ENTAO
        RETORNE 1;
    SENAO
        RETORNE num * factorial(num - 1);
    FIM_SE
}

INICIO
    INTEIRO number;

    ESCREVA("Type a positive number: ");
    SE NAO LEIA_OK(number) OU number < 0 OU number > 12 ENTAO
        ERRO("Invalid input");
    FIM_SE

    ESCREVA_FMT("%d! is equal to %d", number, factorial(number));

    RETORNE 0;
FIM
