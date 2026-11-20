#include <basicgol.h>

INICIO
    REAL a, b;
    ESCREVA("Enter the degree : ");
    SE NAO LEIA_OK(a) ENTAO
        ERRO("Invalid input");
    FIM_SE
    a = (a * 3.14) / 180;
    b = sin(a);
    ESCREVA_FMT("Sine is %lf", b);
FIM
