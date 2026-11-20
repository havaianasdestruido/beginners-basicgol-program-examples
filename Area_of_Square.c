#include <basicgol.h>

INICIO
    REAL_CURTO a, s;
    ESCREVA("Enter the side : ");
    SE NAO LEIA_OK(s) ENTAO
        ERRO("Invalid input");
    FIM_SE
    a = s * s;
    ESCREVA_FMT("Area is %f", a);
FIM
