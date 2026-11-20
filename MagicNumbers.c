#include <basicgol.h>

// C program to check if a number is magic number or not
// Magic Number:A number is said to be a magic number
// if the product of the sum and the reverse number of the sum is the given number then the number is the
// magic number. Ex:1729 is a magic number Code:

/* sum of digits of a number */
FUNCAO INTEIRO sumOfDigits(INTEIRO num) {
    INTEIRO sum = 0;
    ENQUANTO num > 0 FACA
        sum = sum + (num MOD 10);
        num = num / 10;
    FIM_ENQUANTO
    RETORNE sum;
}

/* returns reverse of a given number */
FUNCAO INTEIRO reverse(INTEIRO num) {
    INTEIRO rev = 0;
    ENQUANTO num > 0 FACA
        rev = (rev * 10) + (num MOD 10);
        num = num / 10;
    FIM_ENQUANTO
    RETORNE rev;
}

INICIO
    INTEIRO num, sum, rev;

    ESCREVA("Enter the value for a number:");
    SE NAO LEIA_OK(num) ENTAO
        ERRO("Invalid input");
    FIM_SE

    /* find sum of digits by calling function */
    sum = sumOfDigits(num);

    // if the value is single digit, then
    // the value and its reverse are same
    SE sum < 10 ENTAO
        SE (sum * sum) == num ENTAO
            ESCREVA_FMT("%d is a magic number\n", num);
        SENAO
            ESCREVA_FMT("%d is not a magic number\n", num);
        FIM_SE
        RETORNE 0;
    FIM_SE

    /* reverse of the given number */
    rev = reverse(sum); // calling reverse function

    /* printing the outputs */
    SE (sum * rev) == num ENTAO
        ESCREVA_FMT("%d is a magic number\n", num);
    SENAO
        ESCREVA_FMT("%d is not a magic number\n", num);
    FIM_SE

    RETORNE 0;
FIM
