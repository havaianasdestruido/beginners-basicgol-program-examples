#include <basicgol.h>

// Program to find if a number is mirror number or not
INICIO
    INTEIRO num, reverse1, reverse2, remainder1, remainder2, square, sqroot;
    reverse1 = 0;
    reverse2 = 0;
    /*If we don't initialize than without a initial value,reverse1 and
    reverse2 will contain garbage values so that run time error will occur.
    */
    ESCREVAL("Enter a number");
    SE NAO LEIA_OK(num) ENTAO
        ERRO("Invalid input");
    FIM_SE
    square = POTENCIA(num, 2);
    ENQUANTO square != 0 FACA
        remainder1 = square MOD 10;
        reverse1 = reverse1 * 10 + remainder1;
        square = square / 10;
    FIM_ENQUANTO
    sqroot = RAIZ(reverse1);

    ENQUANTO sqroot != 0 FACA
        remainder2 = sqroot MOD 10;
        reverse2 = reverse2 * 10 + remainder2;
        sqroot = sqroot / 10;
    FIM_ENQUANTO

    SE reverse2 == num ENTAO
        ESCREVA("number is mirror");
    SENAO
        ESCREVA("Not a mirror number");
    FIM_SE

    RETORNE 0;
FIM
