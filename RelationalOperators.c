#include <basicgol.h>

// Relational operators in c language

INICIO
    INTEIRO a, b;
    ESCREVAL("Enter two numbers a and b respectively");
    SE NAO LEIA_OK(a) OU NAO LEIA_OK(b) ENTAO
        ERRO("Invalid input");
    FIM_SE
    // Greater than operator
    SE a > b ENTAO
        ESCREVAL("a is greater than b");
    SENAO
        ESCREVAL("a is smaller than b");
    FIM_SE

    // Greater than equal to
    SE a >= b ENTAO
        ESCREVAL("a is greater than equal to b");
    SENAO
        ESCREVAL("a is not greater than equal to b");
    FIM_SE

    // Less than
    SE a < b ENTAO
        ESCREVAL("a is less than b");
    SENAO
        ESCREVAL("a is greater than b");
    FIM_SE

    // Lesser than equal to
    SE a <= b ENTAO
        ESCREVAL("a is less than equal to b");
    SENAO
        ESCREVAL("a is greater than equal to b");
    FIM_SE

    // equal to
    SE a == b ENTAO
        ESCREVAL("a is equal to b");
    SENAO
        ESCREVAL("a is not equal to b");
    FIM_SE

    // not equal to
    SE a != b ENTAO
        ESCREVAL("a is not equal to b");
    SENAO
        ESCREVAL("a is equal to b");
    FIM_SE

    RETORNE 0;
FIM
