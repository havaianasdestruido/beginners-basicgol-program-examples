#include <basicgol.h>

// Insertion sort ascending order

INICIO
    INTEIRO n, array[1000], c, d, t;

    ESCREVAL("Enter number of elements");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE

    AFIRME(n >= 0 E n <= 1000, "Expected 0..1000 elements");
    ESCREVA_FMT("Enter %d integers\n", n);

    PARA (c, 0, n - 1) {
        SE NAO LEIA_OK(array[c]) ENTAO
            ERRO("Invalid input");
        FIM_SE
    }

    PARA (c, 1, n - 1) {
        d = c;

        ENQUANTO d > 0 E array[d - 1] > array[d] FACA
            t = array[d];
            array[d] = array[d - 1];
            array[d - 1] = t;

            d--;
        FIM_ENQUANTO
    }

    ESCREVAL("Sorted list in ascending order:");

    PARA (c, 0, n - 1) {
        ESCREVA_FMT("%d\n", array[c]);
    }

    RETORNE 0;
FIM
