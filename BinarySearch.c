#include <basicgol.h>

// Return 0 if the array contains the number, 1 otherwise.
FUNCAO INTEIRO binarySearch(INTEIRO[], INTEIRO, INTEIRO, INTEIRO);

INICIO
    INTEIRO arr[] = {5, 15, 24, 32, 56, 89};
    /* check length of array */
    INTEIRO size_of_array = TAMANHO_VETOR(arr);
    /* Check if 24 is into arr */
    ESCREVA_FMT("%d\n", binarySearch(arr, 24, 0, size_of_array - 1));
    /* Check if 118 is into arr */
    ESCREVA_FMT("%d\n", binarySearch(arr, 118, 0, size_of_array - 1));
    RETORNE 0;
FIM

FUNCAO INTEIRO binarySearch(INTEIRO array[], INTEIRO number, INTEIRO start, INTEIRO end) {
    /* if start index is get end index, check if that element is equals wanter nmber */
    SE start > end ENTAO
        RETORNE 1;
    FIM_SE
    SE start == end ENTAO
        RETORNE array[start] == number ? 0 : 1;
    FIM_SE

    INTEIRO tmp = start + (end - start) / 2;
    SE number == array[tmp] ENTAO
        RETORNE 0;
    SENAO_SE number < array[tmp] ENTAO
        RETORNE binarySearch(array, number, start, tmp - 1);
    SENAO
        RETORNE binarySearch(array, number, tmp + 1, end);
    FIM_SE
}
