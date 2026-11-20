#include <basicgol.h>

INICIO
    INTEIRO num1 = 5, num2 = 10;

    ESCREVA_FMT("The numbers are: %d and %d", num1, num2);

    num1 = num1 + num2; // num1=15 and num2=10
    num2 = num1 - num2; // num1=15 and num2=5
    num1 = num1 - num2; // num1=10 and num2=5

    ESCREVA_FMT("The numbers have been swapped with new positions: %d and %d", num1, num2);

    RETORNE 0;
FIM
