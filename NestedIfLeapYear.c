#include <basicgol.h>

// Leap year check using nested if statements

INICIO
    INTEIRO y;
    ESCREVA("Enter a year:");
    SE NAO LEIA_OK(y) ENTAO
        ERRO("Invalid input");
    FIM_SE
    SE y MOD 4 == 0 ENTAO
        SE y MOD 100 == 0 ENTAO // In case of century
            SE y MOD 400 == 0 ENTAO
                ESCREVA_FMT("\n%d is a leap year", y);
                exit(0);
            SENAO
                ESCREVA_FMT("\n%d is not a leap year", y);
                exit(0);
            FIM_SE
        SENAO
            ESCREVA_FMT("\n%d is a leap year", y);
        FIM_SE
    SENAO
        ESCREVA_FMT("\n%d is not a leap year", y);
    FIM_SE
FIM
