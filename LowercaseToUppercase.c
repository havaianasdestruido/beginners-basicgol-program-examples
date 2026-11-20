#include <basicgol.h>

// Lowercase character to Uppercase conversion

INICIO
    CARACTERE ch;
    INTEIRO no;
    ESCREVAL("Enter a lowercase character :");
    SE NAO LEIA_OK(ch) ENTAO
        ERRO("Invalid input");
    FIM_SE
    no = ch - 32;
    ESCREVA_FMT("Letter in capital  : %c", no);
    RETORNE 0;
FIM
