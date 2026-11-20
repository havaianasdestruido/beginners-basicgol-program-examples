#include <basicgol.h>

// program to find reverse of a number

INICIO
    INTEIRO n, reverse = 0;

    ESCREVAL("Enter a number to reverse");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE

    ENQUANTO n != 0 FACA
        reverse = reverse * 10;
        reverse = reverse + n MOD 10;
        n = n / 10;
    FIM_ENQUANTO

    ESCREVA_FMT("Reverse of entered number is = %d\n", reverse);

    RETORNE 0;
FIM
