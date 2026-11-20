#include <basicgol.h>

// Merge sort Algorithm

PROCEDIMENTO mergesort(INTEIRO a[], INTEIRO i, INTEIRO j);
PROCEDIMENTO merge(INTEIRO a[], INTEIRO i1, INTEIRO j1, INTEIRO i2, INTEIRO j2);

INICIO
    INTEIRO a[30], n, i;
    ESCREVA("Enter no of elements:");
    SE NAO LEIA_OK(n) OU n < 0 OU n > 30 ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVA("Enter array elements:");

    PARA (i, 0, n - 1) {
        SE NAO LEIA_OK(a[i]) ENTAO
            ERRO("Invalid input");
        FIM_SE
    }

    mergesort(a, 0, n - 1);

    ESCREVA("\nSorted array is :");
    PARA (i, 0, n - 1) {
        ESCREVA_FMT("%d ", a[i]);
    }

    RETORNE 0;
FIM

PROCEDIMENTO mergesort(INTEIRO a[], INTEIRO i, INTEIRO j) {
    INTEIRO mid;

    SE i < j ENTAO
        mid = (i + j) / 2;
        mergesort(a, i, mid);         // left recursion
        mergesort(a, mid + 1, j);     // right recursion
        merge(a, i, mid, mid + 1, j); // merging of two sorted sub-arrays
    FIM_SE
}

PROCEDIMENTO merge(INTEIRO a[], INTEIRO i1, INTEIRO j1, INTEIRO i2, INTEIRO j2) {
    VETOR(INTEIRO, temp, 50); // array used for merging
    INTEIRO i, j, k;
    i = i1; // beginning of the first list
    j = i2; // beginning of the second list
    k = 0;

    ENQUANTO i <= j1 E j <= j2 FACA // while elements in both lists
        SE a[i] < a[j] ENTAO
            temp[k++] = a[i++];
        SENAO
            temp[k++] = a[j++];
        FIM_SE
    FIM_ENQUANTO

    ENQUANTO i <= j1 FACA // copy remaining elements of the first list
        temp[k++] = a[i++];
    FIM_ENQUANTO

    ENQUANTO j <= j2 FACA // copy remaining elements of the second list
        temp[k++] = a[j++];
    FIM_ENQUANTO

    // Transfer elements from temp[] back to a[]
    PARA (i, i1, j2) {
        a[i] = temp[i - i1];
    }
}
