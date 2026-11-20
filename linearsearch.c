#include <basicgol.h>

INICIO
    INTEIRO n = 0;
    INTEIRO i, a[100];
    INTEIRO x, c = 0;
    ESCREVAL("ENTER SIZE OF ARRAY AND ARRAY ELEMENTS");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE
    SE n < 1 OU n > 100 ENTAO
        RETORNE 1;
    FIM_SE
    PARA (i, 0, n - 1) {
        SE NAO LEIA_OK(a[i]) ENTAO
            ERRO("Invalid input");
        FIM_SE
    }
    ESCREVAL("ENTER ELEMENT TO SEARCH");
    SE NAO LEIA_OK(x) ENTAO
        ERRO("Invalid input");
    FIM_SE
    PARA (i, 0, n - 1) {
        SE a[i] == x ENTAO
            ESCREVA_FMT("FOUND AT INDEX %d", i);
            c = 1;
            PARE;
        FIM_SE
    }
    SE c == 0 ENTAO
        ESCREVA("ELEMENT NOT FOUND");
    FIM_SE
    RETORNE 0;
FIM
