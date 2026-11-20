#include <basicgol.h>
#include <inttypes.h>

/*Russian peasant multiplication is an interesting way to multiply
numbers that uses a process of halving and doubling. Like standard
 multiplication and division*/

INICIO
    INTEIRO64 a, b, k, l, sum = 0, i = 0;

    // input variables
    ESCREVAL("ENTER TWO NUMBERS:");
    SE NAO LEIA_OK(a) OU NAO LEIA_OK(b) ENTAO
        ERRO("Invalid input");
    FIM_SE
    k = a;
    l = b;

    // working of algorithm
    ENQUANTO a > 0 FACA
        SE a MOD 2 == 1 ENTAO
            sum = sum + b;
        FIM_SE
        a = a >> 1;
        b = b << 1;
        i++;
    FIM_ENQUANTO

    // output
    ESCREVA_FMT("PRODUCT OF %" PRId64 " AND %" PRId64 " IS = %" PRId64 " \n", k, l, sum);

    RETORNE 0;
FIM
