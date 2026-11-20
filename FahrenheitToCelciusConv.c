#include <basicgol.h>

// Fahrenheit to celcius temp converter

INICIO
    REAL_CURTO c, f;
    ESCREVAL("Enter temp in fahrenheit :");
    SE NAO LEIA_OK(f) ENTAO
        ERRO("Invalid input");
    FIM_SE
    c = (f - 32) * 5 / 9;
    ESCREVA_FMT("Temp in celcius is : %f", c);
FIM
