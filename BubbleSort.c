#include <basicgol.h>

// Bubble sort code

INICIO
    INTEIRO array[100], n, c, d, swap;

    ESCREVAL("Enter number of elements");
    SE NAO LEIA_OK(n) OU n < 0 OU n > 100 ENTAO
        ERRO("Invalid input");
    FIM_SE

    ESCREVA_FMT("Enter %d integers\n", n);

    PARA (c, 0, n - 1) {
        SE NAO LEIA_OK(array[c]) ENTAO
            ERRO("Invalid input");
        FIM_SE
    }

    PARA (c, 0, n - 2) {
        PARA (d, 0, n - c - 2) {
            SE array[d] > array[d + 1] ENTAO /* For decreasing order use < */
                swap = array[d];
                array[d] = array[d + 1];
                array[d + 1] = swap;
            FIM_SE
        }
    }

    ESCREVAL("Sorted list in ascending order:");

    PARA (c, 0, n - 1) {
        ESCREVA_FMT("%d\n", array[c]);
    }

    RETORNE 0;
FIM
