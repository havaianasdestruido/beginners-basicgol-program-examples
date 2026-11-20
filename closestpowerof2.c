#include <basicgol.h>

// Program for printing closest of 2 of a number.

INICIO
    INTEIRO num, b, c, d = 0;
    SE NAO LEIA_OK(num) ENTAO
        ERRO("Invalid input");
    FIM_SE
    PARA_PASSO (b, 31, 0, -1) {
        c = num >> b;
        SE c & 1 ENTAO
            d++;
            SE d > 1 ENTAO
                num = num - POTENCIA(2, b);
            FIM_SE
        FIM_SE
    }
    ESCREVA_FMT("%d", num);
    RETORNE 0;
FIM
// not working for negative no.
