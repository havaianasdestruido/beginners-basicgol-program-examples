#include <basicgol.h>
#include <inttypes.h>

// Declaring a golbal variable as its going to be used again and again in the function
INTEIRO64 m;

FUNCAO INTEIRO64 modder(INTEIRO64 x, INTEIRO64 y) {
    // x to the power zero is 1
    SE y == 0 ENTAO
        RETORNE 1 MOD m;

    // x to the power one is x
    SENAO_SE y == 1 ENTAO
        RETORNE x MOD m;

    // We now split the problem in two parts
    // solve one of them and use its resultant for the second part
    SENAO
        INTEIRO64 ans = modder(x, y / 2);
        // If the power is not divisible by 2, we simply multiply by x
        // Using the concept: (a * b) % m = (a % m * b % m) % m
        // This concept is used repeatedly when y % 2 != 0

        SE y MOD 2 == 0 ENTAO
            RETORNE ((ans MOD m) * (ans MOD m)) MOD m;
        SENAO
            RETORNE (((ans MOD m) * (ans MOD m)) MOD m * (x MOD m)) MOD m;
        FIM_SE
    FIM_SE
}

INICIO
    ESCREVA("Enter three numbers, x to the power of y modulo m: ");
    INTEIRO64 x, y, result;
    SE NAO LEIA_OK(x) OU NAO LEIA_OK(y) OU NAO LEIA_OK(m) ENTAO
        ERRO("Invalid input");
    FIM_SE

    // We don't need to send m here now
    AFIRME(y >= 0 E m > 0 E m <= INT32_MAX, "Invalid exponent or modulus");
    result = modder(x, y);

    ESCREVA_FMT("The resultant is: %" PRId64 "\n", result);
    RETORNE 0;
FIM
