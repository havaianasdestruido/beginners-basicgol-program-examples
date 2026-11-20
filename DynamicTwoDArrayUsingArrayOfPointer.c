#include <basicgol.h>

INICIO
    INTEIRO r = 3, c = 4, i, j, count;

    INTEIRO *arr[r];
    PARA (i, 0, r - 1) {
        arr[i] = (INTEIRO *)malloc(c * TAMANHO_DE(INTEIRO));
    }

    // Note that arr[i][j] is same as *(*(arr+i)+j)
    count = 0;
    PARA (i, 0, r - 1) {
        PARA (j, 0, c - 1) {
            arr[i][j] = ++count; // Or *(*(arr+i)+j) = ++count
        }
    }

    PARA (i, 0, r - 1) {
        PARA (j, 0, c - 1) {
            ESCREVA_FMT("%d ", arr[i][j]);
        }
    }

    PARA (i, 0, r - 1) {
        free(arr[i]);
    }

    RETORNE 0;
FIM
