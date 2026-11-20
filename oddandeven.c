#include <basicgol.h>

// Program to tell if an integer number is even or odd

INICIO
    INTEIRO number;
    ESCREVAL("Enter an integer number");
    SE NAO LEIA_OK(number) ENTAO
        ERRO("Invalid input");
    FIM_SE
    SE number MOD 2 == 0 ENTAO
        ESCREVA_FMT("The number %d is even\n", number);
    SENAO
        ESCREVA_FMT("The number %d is odd\n", number);
    FIM_SE
    RETORNE 0;
FIM
