#include <basicgol.h>

INICIO
    INTEIRO a, k = 1, i, c, d, n, arr[10];

    ESCREVAL("Enter the no of elements:");
    SE NAO LEIA_OK(n) OU n < 0 OU n > 10 ENTAO
        ERRO("Invalid input");
    FIM_SE
    PARA (a, 0, n - 1) {
        ESCREVA_FMT("Enter %d: \n", a + 1);
        SE NAO LEIA_OK(arr[a]) ENTAO
            ERRO("Invalid input");
        FIM_SE
    }
    PARA (d, 0, n - 1) {
        i = 0;
        PARA (c, 0, n - 1) {
            SE arr[c] == d + 1 ENTAO
                i = 1;
            FIM_SE
        }
        SE i == 0 ENTAO
            ESCREVA_FMT("Missing %d ", d + 1);
            k = 0;
            PARE;
        FIM_SE
    }
    SE k == 1 ENTAO
        ESCREVA_FMT("Missing %d", d + 1);
    FIM_SE
    RETORNE 0;
FIM
