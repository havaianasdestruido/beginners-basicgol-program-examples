#include <basicgol.h>

INICIO
    INTEIRO size, i, max;
    INTEIRO *array;
    ESCREVA("Enter number of numbers: ");
    SE NAO LEIA_OK(size) ENTAO
        ERRO("Invalid input");
    FIM_SE
    AFIRME(size > 0 E (size_t)size <= SIZE_MAX / TAMANHO_DE(INTEIRO), "Invalid array size");
    array = malloc(size * TAMANHO_DE(INTEIRO));
    AFIRME(array != NULL, "Allocation failed");
    ESCREVA_FMT("Enter %d numbers: \n", size);
    // accepting each number and adding them in the array
    PARA (i, 0, size - 1) {
        SE NAO LEIA_OK(array[i]) ENTAO
            ERRO("Invalid input");
        FIM_SE
    }
    max = array[0];
    // traversing the array and comparing each element to integer max
    PARA (i, 1, size - 1) {
        SE array[i] > max ENTAO
            max = array[i];
        FIM_SE
    }
    // printing the integer max
    ESCREVA_FMT("The largest number is %d\n", max);
    free(array);
FIM
