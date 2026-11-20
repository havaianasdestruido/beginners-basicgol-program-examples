#include <basicgol.h>
#include <inttypes.h>

// Count each input once, then write that many copies of each value back to the array.
PROCEDIMENTO countingSort(INTEIRO64 arr[], INTEIRO_LONGO n, INTEIRO_LONGO m) {
    INTEIRO_LONGO *counts = calloc(m + 1, TAMANHO_DE(INTEIRO_LONGO));
    AFIRME(counts != NULL, "Allocation failed");
    INTEIRO_LONGO i, value, copy, next = 0;
    PARA (i, 0, n - 1) {
        counts[arr[i]]++;
    }
    PARA (value, 0, m) {
        PARA (copy, 1, counts[value]) {
            arr[next++] = value;
        }
    }
    free(counts);
}

INICIO
    /* Enter the size of the array */
    INTEIRO_LONGO n = 0;
    ESCREVA("Enter the number of elements to be sorted: ");
    SE NAO LEIA_OK(n) OU n < 1 OU n > 1000000 ENTAO
        ERRO("Invalid input");
    FIM_SE

    /* Enter the range of the array [0 .. m] */
    INTEIRO_LONGO m = 0;
    ESCREVA("Enter the maximum value of the numbers to be sorted: ");
    SE NAO LEIA_OK(m) OU m < 0 OU m > 1000000 ENTAO
        ERRO("Invalid input");
    FIM_SE

    /* Enter the values of the array */
    ESCREVA("Enter the values to be sorted: ");
    INTEIRO64 *arr = malloc(n * TAMANHO_DE(INTEIRO64));
    AFIRME(arr != NULL, "Allocation failed");
    INTEIRO_LONGO i;
    PARA (i, 0, n - 1) {
        SE NAO LEIA_OK(arr[i]) OU arr[i] < 0 OU arr[i] > m ENTAO
            ERRO("Invalid input");
        FIM_SE
    }

    countingSort(arr, n, m);

    ESCREVAL("After sorting");
    PARA (i, 0, n - 1) {
        ESCREVA_FMT("%" PRId64 " ", arr[i]);
    }
    free(arr);
FIM
