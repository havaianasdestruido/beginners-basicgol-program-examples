#include <basicgol.h>

// Program to check type of input character

INICIO
    CARACTERE ch;
    ESCREVAL("Enter a character");
    SE NAO LEIA_OK(ch) ENTAO
        ERRO("Invalid input");
    FIM_SE
    SE (ch >= 65 E ch <= 90) OU (ch >= 97 E ch <= 122) ENTAO
        ESCREVA("Entered character is an alphabet");
    SENAO_SE ch >= 48 E ch <= 57 ENTAO
        ESCREVA("Entered character is a digit");
    SENAO
        ESCREVA("Entered character is a special symbol");
    FIM_SE
    RETORNE 0;
FIM
