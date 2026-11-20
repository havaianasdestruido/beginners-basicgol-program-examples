#include <basicgol.h>

INICIO
    INTEIRO num;
    SE NAO LEIA_OK(num) ENTAO
        ERRO("Invalid input");
    FIM_SE
    AFIRME(num >= 0, "Negative case count");
    ENQUANTO num-- > 0 FACA
        INTEIRO n;
        SE NAO LEIA_OK(n) ENTAO
            ERRO("Invalid input");
        FIM_SE
        AFIRME(n >= 1 E n <= 1000, "Expected 1..1000 elements");
        INTEIRO a[n], t[n], tmp, k = 0;
        INTEIRO i, j;
        PARA (i, 0, n - 1) {
            SE NAO LEIA_OK(a[i]) ENTAO
                ERRO("Invalid input");
            FIM_SE
            t[i] = a[i];
        }
        PARA (i, 0, n - 1) {
            PARA (j, 0, n - i - 2) {
                SE t[j] > t[j + 1] ENTAO
                    tmp = t[j];
                    t[j] = t[j + 1];
                    t[j + 1] = tmp;
                FIM_SE
            }
        }
        // Each value's rank is the number of distinct smaller values.
        PARA (i, 0, n - 1) {
            k = 0;
            PARA (j, 0, n - 1) {
                SE t[j] >= a[i] ENTAO
                    PARE;
                FIM_SE
                SE j == 0 OU t[j] != t[j - 1] ENTAO
                    k++;
                FIM_SE
            }
            a[i] = k;
        }
        PARA (i, 0, n - 1) {
            ESCREVA_FMT("%d ", a[i]);
        }
        ESCREVA_LINHA();
    FIM_ENQUANTO
FIM
