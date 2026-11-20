#include <basicgol.h>

FUNCAO INTEIRO gcd(INTEIRO x, INTEIRO y) {
    INTEIRO r = 0, a, b;
    a = (x > y) ? x : y; // a is greater number
    b = (x < y) ? x : y; // b is smaller number
    r = b;

    ENQUANTO a MOD b != 0 FACA
        r = a MOD b;
        a = b;
        b = r;
    FIM_ENQUANTO
    RETORNE r;
}

FUNCAO INTEIRO lcm(INTEIRO x, INTEIRO y) {
    INTEIRO a;
    a = (x > y) ? x : y; // a is greater number
    ENQUANTO VERDADEIRO FACA
        SE a MOD x == 0 E a MOD y == 0 ENTAO
            RETORNE a;
        FIM_SE
        ++a;
    FIM_ENQUANTO
}

INICIO
    ESCREVA("Enter the two numbers: ");
    INTEIRO x, y;
    SE NAO LEIA_OK(x) ENTAO
        ERRO("Invalid input");
    FIM_SE
    SE NAO LEIA_OK(y) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVA_FMT("The GCD of two numbers is: %d", gcd(x, y));
    ESCREVA_FMT("The LCM of two numbers is: %d", lcm(x, y));
    RETORNE 0;
FIM
