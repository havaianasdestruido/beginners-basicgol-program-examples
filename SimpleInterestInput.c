#include <basicgol.h>

// Program to Calculate Simple Interest

INICIO
    REAL_CURTO P, R, T, SI;
    SE NAO LEIA_OK(P) OU NAO LEIA_OK(R) OU NAO LEIA_OK(T) ENTAO
        ERRO("Invalid input");
    FIM_SE
    SI = (P * R * T) / 100;
    ESCREVA_FMT("%f", SI);
FIM
