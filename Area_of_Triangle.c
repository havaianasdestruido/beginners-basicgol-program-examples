#include <basicgol.h>

INICIO
    REAL_CURTO a, b, h;
    ESCREVA("Enter the base : ");
    SE NAO LEIA_OK(b) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVA("Enter the height : ");
    SE NAO LEIA_OK(h) ENTAO
        ERRO("Invalid input");
    FIM_SE
    a = 0.5 * b * h;
    ESCREVA_FMT("Area is %f", a);
FIM
