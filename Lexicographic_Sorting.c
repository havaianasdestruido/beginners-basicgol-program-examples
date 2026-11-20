#include <basicgol.h>

// Lexicographic sorting is the way of sorting words based on the alphabetical order of their component
// letters.

INICIO
    CARACTERE str[20][20], temp[20];
    INTEIRO n, i, j;
    ESCREVAL("Enter the Number of Strings:");
    SE NAO LEIA_OK(n) OU n < 0 OU n > 20 ENTAO
        ERRO("Invalid input");
    FIM_SE

    // Getting strings input
    ESCREVAL("Enter the Strings:");
    PARA (i, 0, n - 1) {
        AFIRME(scanf("%19s", str[i]) == 1, "Invalid input");
    }

    // storing strings in the lexicographical order
    PARA (i, 0, n - 2) {
        PARA (j, 0, n - 1 - i - 1) {
            SE COMPARA_TEXTO(str[j], str[j + 1]) > 0 ENTAO
                // swapping strings if they are not in the lexicographical order
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            FIM_SE
        }
    }
    ESCREVAL("Strings in the Lexicographical Order is:");
    PARA (i, 0, n - 1) {
        ESCREVAL(str[i]);
    }
FIM
