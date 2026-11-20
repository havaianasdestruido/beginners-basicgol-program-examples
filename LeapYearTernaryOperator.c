#include <basicgol.h>

// Program to check for leap year using ternary operator
INICIO
    INTEIRO y;
    ESCREVAL("enter year for checking leap year or not");
    SE NAO LEIA_OK(y) ENTAO
        ERRO("Invalid input");
    FIM_SE
    // Using ternary operator
    (((y MOD 100 != 0) E (y MOD 4 == 0)) OU (y MOD 400 == 0)) ? ESCREVA_FMT("%d is leap year", y)
                                                         : ESCREVA_FMT("%d is not a leap year", y);
    RETORNE 0;
FIM
