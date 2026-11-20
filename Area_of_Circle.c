#include <basicgol.h>

INICIO
    REAL_CURTO a, r;
    ESCREVA("Enter the Radius : ");
    SE NAO LEIA_OK(r) ENTAO
        ERRO("Invalid input");
    FIM_SE
    a = 3.14 * r * r;
    ESCREVA_FMT("Area is %f", a);
FIM
