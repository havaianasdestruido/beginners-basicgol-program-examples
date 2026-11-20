#include <basicgol.h>

// Program to input a character and check whether it is vowel or consonant using switch case
INICIO
    CARACTERE ch;
    ESCREVAL("Enter a character");
    SE NAO LEIA_OK(ch) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCOLHA(ch)
    CASO 'a':
    CASO 'e':
    CASO 'i':
    CASO 'o':
    CASO 'u':
    CASO 'A':
    CASO 'E':
    CASO 'I':
    CASO 'O':
    CASO 'U':
        ESCREVA("Entered character is a vowel");
        PARE;
    CONTRARIO:
        ESCREVA("Entered character is a consonant");
    FIM_ESCOLHA

    RETORNE 0;
FIM
