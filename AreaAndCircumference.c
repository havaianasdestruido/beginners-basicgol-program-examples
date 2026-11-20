#include <basicgol.h>

// To calculate Area and Circumference of a circle

INICIO
    REAL_CURTO r, a, c;
    ESCREVAL("enter radius :");
    SE NAO LEIA_OK(r) ENTAO
        ERRO("Invalid input");
    FIM_SE
    a = 3.14 * r * r;
    c = 2 * 3.14 * r;
    ESCREVA_FMT("Area = %f\n circumference = %f\n", a, c);
    RETORNE 0;
FIM
