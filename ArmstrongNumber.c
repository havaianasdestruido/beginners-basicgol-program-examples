#include <basicgol.h>

// To check whether the given number is Armstrong number or not
// Armstrong number: An n -digit number equal to the sum of the nth powers of its digits.
// Example: (1^3) + (5^3) + (3^3)= 153

INICIO
    INTEIRO number, sum = 0, rem = 0, nthPower = 0, digits = 0, temp;
    ESCREVA("Enter a number");
    SE NAO LEIA_OK(number) ENTAO
        ERRO("Invalid input");
    FIM_SE
    temp = number;
    // to calculate the number of digits in the number
    ENQUANTO number != 0 FACA
        number = number / 10;
        digits++;
    FIM_ENQUANTO
    number = temp;
    // to get the nth power of each digit and add it to the sum
    ENQUANTO number != 0 FACA
        rem = number MOD 10;
        nthPower = POTENCIA(rem, digits);
        sum = sum + nthPower;
        number = number / 10;
    FIM_ENQUANTO
    // to check if obtained sum is equal to the original number
    SE sum == temp ENTAO
        ESCREVA("The given number is an Armstrong number");
    SENAO
        ESCREVA("The given number is not an Armstrong number");
    FIM_SE
FIM
