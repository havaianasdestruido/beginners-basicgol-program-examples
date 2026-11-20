#include <basicgol.h>

// function for swapping two numbers
PROCEDIMENTO swap(INTEIRO *xp, INTEIRO *yp) {
    INTEIRO temp = *xp;
    *xp = *yp;
    *yp = temp;
}

PROCEDIMENTO selectionSort(INTEIRO arr[], INTEIRO n) {
    INTEIRO i, j, min_idx;

    // One by one move boundary of unsorted subarray
    PARA (i, 0, n - 2) {
        // Find the minimum element in unsorted array
        min_idx = i;
        PARA (j, i + 1, n - 1) {
            SE arr[j] < arr[min_idx] ENTAO
                min_idx = j;
            FIM_SE
        }

        // Swap the found minimum element with the first element
        // so that the minimum element of unsorted subarray
        // comes to first position
        swap(&arr[min_idx], &arr[i]);
    }
}

INICIO
    INTEIRO n, i; // n is size of array
    ESCREVA("Enter the number of elements ");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE
    AFIRME(n >= 0 E n <= 1000, "Expected 0..1000 elements");
    VETOR(INTEIRO, a, 1000);
    ESCREVA("Enter the elements ");
    PARA (i, 0, n - 1) {
        SE NAO LEIA_OK(a[i]) ENTAO
            ERRO("Invalid input");
        FIM_SE
    }

    selectionSort(a, n); // calling the function to sort the array
    // printing sorted array
    PARA (i, 0, n - 1) {
        ESCREVA_FMT("%d ", a[i]);
    }

    RETORNE 0;
FIM
