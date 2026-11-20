#include <basicgol.h>

// Function that takes a string "haystack" and a string "needle"
// and checks if needle appears in haystack

FUNCAO INTEIRO SubString(CARACTERE *haystack, CARACTERE *needle) {
    INTEIRO bigIndex = 0;
    INTEIRO littleIndex = 0;

    // Iterate through Haystack until a match is found
    // then iterate through both strings until the end of needle
    // or a difference is found
    ENQUANTO haystack[bigIndex] != '\0' FACA
        ENQUANTO haystack[bigIndex + littleIndex] == needle[littleIndex] FACA
            SE needle[littleIndex + 1] == '\0' ENTAO
                RETORNE (1);
            FIM_SE
            littleIndex++;
        FIM_ENQUANTO
        littleIndex = 0;
        bigIndex++;
    FIM_ENQUANTO
    RETORNE (0);
}

INICIO
    TEXTO_FIXO(needle, 100);
    TEXTO_FIXO(haystack, 100);

    // Getting input
    ESCREVA("Please enter your Haystack string (< 100 characters): ");
    AFIRME(scanf("%99s", haystack) == 1, "Invalid input");
    ESCREVA("Please enter your Needle string (< 100 characters): ");
    AFIRME(scanf("%99s", needle) == 1, "Invalid input");

    SE SubString(haystack, needle) ENTAO
        ESCREVAL("Needle was found in Haystack!");
    SENAO
        ESCREVAL("Needle not found in Haystack");
    FIM_SE
    RETORNE (0);
FIM
