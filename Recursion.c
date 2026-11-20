#include <basicgol.h>

// Sum of natural numbers using recursion

FUNCAO INTEIRO sum(INTEIRO n);

INICIO
    INTEIRO number, result;

    ESCREVA("Enter a positive integer: ");
    SE NAO LEIA_OK(number) ENTAO
        ERRO("Invalid input");
    FIM_SE

    result = sum(number);

    ESCREVA_FMT("sum = %d", result);
    RETORNE 0;
FIM

FUNCAO INTEIRO sum(INTEIRO num) {
    SE num != 0 ENTAO
        RETORNE num + sum(num - 1); // sum() function calls itself
    SENAO
        RETORNE num;
    FIM_SE
}
