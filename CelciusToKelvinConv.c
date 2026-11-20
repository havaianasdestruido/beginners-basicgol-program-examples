#include <basicgol.h>

// Celsius to Kelvin converter

INICIO
    REAL c, k;
    ESCREVAL("Enter the desired temperature in Celcius:");
    SE NAO LEIA_OK(c) ENTAO
        ERRO("Invalid input");
    FIM_SE
    k = c + 273.15;
    ESCREVA_FMT("Converted value: %f K\n", k);
    RETORNE 0;
FIM
