#include <basicgol.h>

INICIO
    INTEIRO64 a;
    ESCREVAL("enter the no in binary");
    AFIRME(LEIA_OK(a) E a >= 0, "Expected binary digits");
    INTEIRO b = 0, j = 0;
    INTEIRO c;
    ENQUANTO a != 0 FACA
        c = a MOD 10;
        AFIRME(c <= 1, "Expected binary digits");
        b = b + c * POTENCIA(2, j);
        j++;
        a = a / 10;
    FIM_ENQUANTO
    ESCREVA(b);
FIM
