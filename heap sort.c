#include <basicgol.h>

PROCEDIMENTO create(INTEIRO[]);
PROCEDIMENTO down_adjust(INTEIRO[], INTEIRO);

INICIO
    INTEIRO heap[30], n, i, last, temp;
    ESCREVA("Enter no. of elements:");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE
    AFIRME(n >= 0 E n <= 29, "Expected 0..29 elements");
    ESCREVA("\nEnter elements:");
    PARA (i, 1, n) {
        SE NAO LEIA_OK(heap[i]) ENTAO
            ERRO("Invalid input");
        FIM_SE
    }

    // create a heap
    heap[0] = n;
    create(heap);

    // sorting
    ENQUANTO heap[0] > 1 FACA
        // swap heap[1] and heap[last]
        last = heap[0];
        temp = heap[1];
        heap[1] = heap[last];
        heap[last] = temp;
        heap[0]--;
        down_adjust(heap, 1);
    FIM_ENQUANTO

    // print sorted data
    ESCREVAL("\nArray after sorting:");
    PARA (i, 1, n) {
        ESCREVA_FMT("%d ", heap[i]);
    }
FIM

PROCEDIMENTO create(INTEIRO heap[]) {
    INTEIRO i, n;
    n = heap[0]; // no. of elements
    PARA_PASSO (i, n / 2, 1, -1) {
        down_adjust(heap, i);
    }
}

PROCEDIMENTO down_adjust(INTEIRO heap[], INTEIRO i) {
    INTEIRO j, temp, n, flag = 1;
    n = heap[0];

    ENQUANTO 2 * i <= n E flag == 1 FACA
        j = 2 * i; // j points to left child
        SE j + 1 <= n E heap[j + 1] > heap[j] ENTAO
            j = j + 1;
        FIM_SE
        SE heap[i] > heap[j] ENTAO
            flag = 0;
        SENAO
            temp = heap[i];
            heap[i] = heap[j];
            heap[j] = temp;
            i = j;
        FIM_SE
    FIM_ENQUANTO
}
