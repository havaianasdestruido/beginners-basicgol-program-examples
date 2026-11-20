#include <basicgol.h>

INICIO
    INTEIRO num, sqr, temp, last;
    INTEIRO n = 0;
    ESCREVAL("Enter a number ");
    SE NAO LEIA_OK(num) ENTAO
        ERRO("Invalid input");
    FIM_SE
    sqr = num * num; // calculating square of num
    temp = num;
    // Counting number of digits
    ENQUANTO temp > 0 FACA
        n++;
        temp = temp / 10;
    FIM_ENQUANTO
    // Extracting last n digits
    INTEIRO den = PISO(POTENCIA(10, n));
    last = sqr MOD den;
    SE last == num ENTAO
        ESCREVAL("Automorphic number ");
    SENAO
        ESCREVAL("Not Automorphic ");
    FIM_SE
    RETORNE 0;
FIM
