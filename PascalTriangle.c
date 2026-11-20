#include <basicgol.h>
#include <inttypes.h>

INICIO
    INTEIRO64 r, k, j, i, coeff = 1;
    // input nuber of rows
    SE NAO LEIA_OK(r) ENTAO
        ERRO("Invalid input");
    FIM_SE

    PARA (i, 0, r - 1) {
        ESCREVA_LINHA();

        // for maintaing the space in initial par
        PARA (j, 0, r - i - 2) {
            ESCREVA("  ");
        }

        // algorithm
        PARA (k, 0, i) {
            SE i == 0 OU k == 0 ENTAO
                coeff = 1;
            SENAO
                coeff = coeff * (i - k + 1) / k;
            FIM_SE
            ESCREVA_FMT("%4" PRId64, coeff);
        }
        ESCREVA_LINHA();
    }
    RETORNE 0;
FIM
