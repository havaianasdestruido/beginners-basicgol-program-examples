#include <basicgol.h>

INTEIRO64 max = 1000005;
INICIO
    // Defining a string to take input of the number
    TEXTO_FIXO(number, max);

    INTEIRO64 len, i, count = 0;

    // Taking the inputin form of a string
    ESCREVA("Enter a Number: ");
    AFIRME(scanf("%1000004s", number) == 1, "Invalid input");

    // Finding the number of digits by calculating the lenght of the string
    len = TAMANHO_TEXTO(number);

    // Checking if the number is a palindrome or not
    PARA (i, 0, len / 2 - 1) {
        SE number[i] == number[len - i - 1] ENTAO
            count++;
        FIM_SE
    }
    SE count == len / 2 ENTAO
        ESCREVA_FMT("The entered number %s is a palindrome\n", number);
    SENAO
        ESCREVA_FMT("The entered number %s is not a palindrome\n", number);
    FIM_SE
    RETORNE 0;
FIM
