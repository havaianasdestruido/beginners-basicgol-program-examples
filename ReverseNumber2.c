#include <basicgol.h>

// Reverse of a number - 2nd program
INICIO
    INTEIRO num, reverse = 0, remainder;
    ESCREVAL("Enter a number");
    SE NAO LEIA_OK(num) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ENQUANTO num != 0 FACA
        remainder = num MOD 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    FIM_ENQUANTO
    ESCREVA_FMT("Reverse of the number is : %d\n", reverse);
    RETORNE 0;
FIM
