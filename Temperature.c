#include <basicgol.h>

INICIO
    REAL_CURTO c, f;
    ESCREVA("Enter the Temperature in Celcius : ");
    SE NAO LEIA_OK(c) ENTAO
        ERRO("Invalid input");
    FIM_SE
    f = c * (9.0 / 5) + 32;
    ESCREVA_FMT("Temperature in Fahernheit is %f", f);
FIM
