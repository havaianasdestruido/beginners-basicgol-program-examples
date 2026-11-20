#include <basicgol.h>
#include <inttypes.h>

INICIO
    INTEIRO n, i;
    NATURAL64 factorial = 1;

    ESCREVA("Enter a number: ");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE

    // Show error if number is less than 0
    AFIRME(n <= 20, "Result exceeds 64 bits");
    SE n < 0 ENTAO
        ESCREVA("Error! Factorial of a negative number doesn't exist.");
    SENAO
        PARA (i, 1, n) {
            factorial *= i; // factorial = factorial*i;
        }
        ESCREVA_FMT("Factorial of %d = %" PRIu64, n, factorial);
    FIM_SE

    RETORNE 0;
FIM
