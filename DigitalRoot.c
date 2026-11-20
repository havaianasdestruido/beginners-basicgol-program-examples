#include <basicgol.h>

// Program to find the digital root of a number in C
// The digital root of a number is the single digit that you get by adding
// all of the digits of the original number together. If the result of that
// is multiple digits, you add those digits together, repeating the process
// until you get a single digit. That digit is the digital root of the original number.

INICIO
    NATURAL number, temp, droot = 0;
    ESCREVA("Enter a positive number: ");
    SE NAO LEIA_OK(number) ENTAO
        ERRO("Invalid input");
    FIM_SE
    temp = number;
    ENQUANTO temp != 0 FACA
        INTEIRO digit = temp MOD 10;
        droot += digit;
        temp /= 10;
        SE temp == 0 E droot > 9 ENTAO
            temp = droot;
            droot = 0;
        FIM_SE
    FIM_ENQUANTO
    ESCREVA_FMT("The digital root of %u is %u\n", number, droot);
    RETORNE 0;
FIM
