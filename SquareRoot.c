#include <basicgol.h>

/* Program to find the square root of a number
 * - the current implementation uses the Newton-Raphson method
 * - mathematical explanation can be found online, and requires basic calculus knowledge
 */

CONSTANTE REAL MAX_ERROR = 1e-7; // equivalent to 10^-7 -> accurate upto 7 decimal places
                               // can be set according to need or even taken in as input

FUNCAO REAL squareRoot(INTEIRO x) {
    SE x == 0 ENTAO
        RETORNE 0;
    FIM_SE
    REAL r = 1; // initial guess for the root
    ENQUANTO fabs(r * r - x) > MAX_ERROR * x FACA
        r = (r + x / r) / 2;
        // value of 'r' moves closer and closer to the actual root value
    FIM_ENQUANTO

    RETORNE r;
}

INICIO
    // the number for which we expect to compute the root
    INTEIRO num;
    SE NAO LEIA_OK(num) OU num < 0 ENTAO
        ERRO("Invalid input");
    FIM_SE

    ESCREVA_FMT("%lf \n", squareRoot(num));

    RETORNE 0;
FIM
