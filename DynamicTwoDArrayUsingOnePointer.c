#include <basicgol.h>

INICIO
    INTEIRO r = 3, c = 4;
    INTEIRO *arr = (INTEIRO *)malloc(r * c * TAMANHO_DE(INTEIRO));

    INTEIRO i, j, count = 0;
    PARA (i, 0, r - 1) {
        PARA (j, 0, c - 1) {
            *(arr + i * c + j) = ++count;
        }
    }

    PARA (i, 0, r - 1) {
        PARA (j, 0, c - 1) {
            ESCREVA_FMT("%d ", *(arr + i * c + j));
        }
    }

    free(arr);

    RETORNE 0;
FIM
