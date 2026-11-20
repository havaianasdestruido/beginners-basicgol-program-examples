#include <basicgol.h>

FUNCAO INTEIRO checkAnagram(CARACTERE *str1, CARACTERE *str2);

INICIO
    CARACTERE str1[100], str2[100];

    ESCREVA("Function : whether two given strings are anagram :");
    ESCREVA("\nExample : pears and  spare, stone and tones :");

    ESCREVA(" Input the  first String : ");
    AFIRME(LEIA_TEXTO(str1, TAMANHO_DE(str1)), "Invalid string");
    ESCREVA(" Input the  second String : ");
    AFIRME(LEIA_TEXTO(str2, TAMANHO_DE(str2)), "Invalid string");

    SE checkAnagram(str1, str2) == 1 ENTAO
        ESCREVA_FMT(" %s and %s are Anagram.\n\n", str1, str2);
    SENAO
        ESCREVA_FMT(" %s and %s are not Anagram.\n\n", str1, str2);
    FIM_SE
    RETORNE 0;
FIM

// Function to check whether two passed strings are anagram or not

FUNCAO INTEIRO checkAnagram(CARACTERE *str1, CARACTERE *str2) {
    INTEIRO str1ChrCtr[256] = {0}, str2ChrCtr[256] = {0};
    INTEIRO ctr;

    /* check the length of equality of Two Strings */

    SE TAMANHO_TEXTO(str1) != TAMANHO_TEXTO(str2) ENTAO
        RETORNE 0;
    FIM_SE

    // count frequency of characters in str1

    ctr = 0;
    ENQUANTO str1[ctr] != '\0' FACA
        str1ChrCtr[(NATURAL8)str1[ctr]]++;
        ctr++;
    FIM_ENQUANTO

    // count frequency of characters in str2

    ctr = 0;
    ENQUANTO str2[ctr] != '\0' FACA
        str2ChrCtr[(NATURAL8)str2[ctr]]++;
        ctr++;
    FIM_ENQUANTO

    // compare character counts of both strings

    PARA (ctr, 0, 255) {
        SE str1ChrCtr[ctr] != str2ChrCtr[ctr] ENTAO
            RETORNE 0;
        FIM_SE
    }
    RETORNE 1;
}
