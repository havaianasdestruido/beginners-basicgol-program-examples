#include <basicgol.h>

INICIO
    INTEIRO t, A, B;
    INTEIRO rem = 0;
    AFIRME(LEIA_OK(t), "Invalid input");

    ENQUANTO t-- FACA

        AFIRME(LEIA_OK(A) E LEIA_OK(B), "Invalid input");
        AFIRME(B != 0, "Division by zero");
        rem = A MOD B;
        ESCREVA_FMT("%d\n", rem);
    FIM_ENQUANTO

    RETORNE 0;
FIM
