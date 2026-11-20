#include <basicgol.h>

// Greatest number using nested if

INICIO
    INTEIRO a, b, c;
    ESCREVAL("enter three integer number");
    SE NAO LEIA_OK(a) OU NAO LEIA_OK(b) OU NAO LEIA_OK(c) ENTAO
        ERRO("Invalid input");
    FIM_SE
    SE a > b ENTAO
        SE a > c ENTAO
            ESCREVA("a is greatest");
        SENAO
            ESCREVA("c is greatest");
        FIM_SE
    SENAO_SE b > c ENTAO
        ESCREVA("b is greatest");
    SENAO
        ESCREVA("c is greatest");
    FIM_SE
    RETORNE 0;
FIM
