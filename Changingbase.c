#include <basicgol.h>
#include <inttypes.h>

INICIO
    INTEIRO64 n, x, y, b, j = -1, c, d, e, a = 0, k = -1, f = 0;

    ESCREVAL("This program converts the no. from one base to another");

    ESCREVAL("enter the no. you want to convert");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE

    ESCREVAL("enter the base of no.");
    SE NAO LEIA_OK(x) ENTAO
        ERRO("Invalid input");
    FIM_SE

    ESCREVAL("enter the base to which you want to convert");
    SE NAO LEIA_OK(y) ENTAO
        ERRO("Invalid input");
    FIM_SE

    ENQUANTO n > 0 FACA
        b = n MOD 10;
        n = n / 10;
        j++;
        d = b * POTENCIA(x, j);
        a = d + a; // converted the no. to base 10
    FIM_ENQUANTO

    ENQUANTO a > 0 FACA
        c = a MOD y;
        a = a / y;
        k++;
        e = c * POTENCIA(10, k);
        f = e + f; // converted the no. to base user wanted
    FIM_ENQUANTO

    ESCREVA_FMT("%" PRId64 "\n", f);
    RETORNE 0;
FIM
