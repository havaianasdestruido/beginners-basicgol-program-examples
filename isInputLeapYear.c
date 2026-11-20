#include <basicgol.h>

INICIO
    INTEIRO input;
    ESCREVA("Please input a year and I will tell you if it's a leap year: ");
    SE NAO LEIA_OK(input) ENTAO
        ERRO("Invalid input");
    FIM_SE
    SE (input MOD 4 == 0 E input MOD 100 != 0) OU input MOD 400 == 0 ENTAO
        ESCREVA_FMT("Your input (%d) IS a leap year.\n\n", input);
    SENAO
        ESCREVA_FMT("Your input (%d) is NOT a leap year.\n\n", input);
    FIM_SE
    RETORNE 0;
FIM
