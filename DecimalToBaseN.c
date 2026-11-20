#include <basicgol.h>

// Convert base10(decimal) values any base

PROCEDIMENTO printDigit(INTEIRO, INTEIRO);

INICIO
    INTEIRO input, base;

    // Getting user input
    ESCREVA("Enter number: ");
    SE NAO LEIA_OK(input) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVA("Enter base: ");
    SE NAO LEIA_OK(base) ENTAO
        ERRO("Invalid input");
    FIM_SE

    ESCREVA_FMT("%d to base %d : ", input, base);

    AFIRME(input >= 0 E base >= 2 E base <= 36, "Expected a nonnegative number and base 2..36");
    SE input == 0 ENTAO
        ESCREVA("0");
    SENAO
        printDigit(input, base);
    FIM_SE

    RETORNE 0;
FIM

// This is a reccursive function that prints digit by digit
PROCEDIMENTO printDigit(INTEIRO num, INTEIRO base) {
    SE num > 0 ENTAO
        // getting current digit to be printed
        INTEIRO digit = num MOD base;
        num = num - digit;
        num = num / base;
        // Call to function to print next digit
        printDigit(num, base);
        // If the current digit is more than 9 (eg: 10=A, 11=B)
        SE digit > 9 ENTAO
            ESCREVA_FMT("%c", 55 + digit);

        // Else print the digit directly
        SENAO
            ESCREVA_FMT("%d", digit);
        FIM_SE
    SENAO
        RETORNE;
    FIM_SE
}
