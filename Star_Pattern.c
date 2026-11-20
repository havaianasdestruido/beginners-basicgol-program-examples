#include <basicgol.h>

INICIO
    INTEIRO n, i, j;

    ESCREVA("Enter number of rows : ");
    AFIRME(LEIA_OK(n), "Invalid input");

    PARA (i, 1, n) {
        PARA (j, 1, i) {
            ESCREVA("* ");
        }
        ESCREVA_LINHA();
    }
    RETORNE 0;
FIM
