#include <basicgol.h>

INICIO
    REAL_CURTO p, r, t, s;
    ESCREVA("Enter the principal : ");
    SE NAO LEIA_OK(p) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVA("Enter the rate : ");
    SE NAO LEIA_OK(r) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVA("Enter the time : ");
    SE NAO LEIA_OK(t) ENTAO
        ERRO("Invalid input");
    FIM_SE
    s = (p * r * t) / 100;
    ESCREVA_FMT("SI is %f", s);
FIM
