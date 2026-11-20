#include <basicgol.h>

INICIO
    INTEIRO size;
    INTEIRO i;
    VETOR(INTEIRO, arr, 100);
    ESCREVA("Enter the size of the array:");
    SE NAO LEIA_OK(size) OU size < 2 OU size > 100 ENTAO
        ERRO("Invalid input");
    FIM_SE
    PARA (i, 0, size - 1) {
        ESCREVA("Enter an element:");
        SE NAO LEIA_OK(arr[i]) ENTAO
            ERRO("Invalid input");
        FIM_SE
    }
    ESCREVAL("\n");
    ESCREVAL("The required entered array are:");
    ESCREVAL("Slno.     Array elements");
    PARA (i, 0, size - 1) {
        ESCREVA_FMT("%d\t\t%d\n", i + 1, arr[i]);
    }
    // Store indexes, not sentinel values: every integer is a valid input.
    INTEIRO first = 0, second = -1;
    PARA (i, 1, size - 1) {
        SE arr[i] > arr[first] ENTAO
            second = first;
            first = i;
        SENAO_SE arr[i] < arr[first] E (second == -1 OU arr[i] > arr[second]) ENTAO
            second = i;
        FIM_SE
    }

    ESCREVA_FMT("First max element :%d   at position:%d\n", arr[first], first + 1);
    SE second == -1 ENTAO
        ESCREVAL("No distinct second maximum");
    SENAO
        ESCREVA_FMT("Second max element:%d   at position:%d\n", arr[second], second + 1);
    FIM_SE
FIM
