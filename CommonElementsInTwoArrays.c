#include <basicgol.h>

INICIO
    INTEIRO i, j, n;
    ESCREVAL("enter the number of elements in an arrays");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE
    INTEIRO a[n], b[n];
    ESCREVAL("enter the elements of 1st array");
    PARA (i, 0, n - 1) {
        SE NAO LEIA_OK(a[i]) ENTAO
            ERRO("Invalid input");
        FIM_SE
    }
    ESCREVAL("enter the elements of 2nd array");
    PARA (j, 0, n - 1) {
        SE NAO LEIA_OK(b[j]) ENTAO
            ERRO("Invalid input");
        FIM_SE
    }
    ESCREVA("The common numbers are: ");
    PARA (i, 0, n - 1) {
        PARA (j, 0, n - 1) {
            SE a[i] == b[j] ENTAO
                ESCREVA_FMT("%d\n", b[j]);
            FIM_SE
        }
    }
FIM
