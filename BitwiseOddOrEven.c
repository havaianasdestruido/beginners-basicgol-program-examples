#include <basicgol.h>

// Finding given number is Odd or Even using Bitwise AND(&) Operator
// Checking the Least Significent Bit, if 0 print Even, otherwise print Odd

INICIO
    INTEIRO num, mask = 0x1;

    ESCREVA("Enter a number: ");
    SE NAO LEIA_OK(num) ENTAO
        ERRO("Invalid input");
    FIM_SE

    num &= mask;

    SE 0 == num ENTAO
        ESCREVAL("Even Number");
    SENAO
        ESCREVAL("Odd Number");
    FIM_SE

    RETORNE 0;
FIM
