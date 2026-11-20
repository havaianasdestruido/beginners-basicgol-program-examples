#include <basicgol.h>

// Quick sort Algorithm

PROCEDIMENTO quick_sort(INTEIRO[], INTEIRO, INTEIRO);
FUNCAO INTEIRO partition(INTEIRO[], INTEIRO, INTEIRO);

INICIO
    INTEIRO a[50], n, i;
    ESCREVA("How many elements?");
    SE NAO LEIA_OK(n) OU n < 0 OU n > 50 ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVA("\nEnter array elements:");

    PARA (i, 0, n - 1) {
        SE NAO LEIA_OK(a[i]) ENTAO
            ERRO("Invalid input");
        FIM_SE
    }

    quick_sort(a, 0, n - 1);
    ESCREVA("\nArray after sorting:");

    PARA (i, 0, n - 1) {
        ESCREVA_FMT("%d ", a[i]);
    }

    RETORNE 0;
FIM

PROCEDIMENTO quick_sort(INTEIRO a[], INTEIRO l, INTEIRO u) {
    INTEIRO j;
    SE l < u ENTAO
        j = partition(a, l, u);
        quick_sort(a, l, j - 1);
        quick_sort(a, j + 1, u);
    FIM_SE
}

FUNCAO INTEIRO partition(INTEIRO a[], INTEIRO l, INTEIRO u) {
    INTEIRO v, i, j, temp;
    v = a[l];
    i = l;
    j = u + 1;

    REPITA
        REPITA
            i++;
        ATE_QUE(i > u OU a[i] >= v);

        REPITA
            j--;
        ATE_QUE(a[j] <= v);

        SE i < j ENTAO
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        FIM_SE
    ATE_QUE(i >= j);

    a[l] = a[j];
    a[j] = v;

    RETORNE (j);
}
