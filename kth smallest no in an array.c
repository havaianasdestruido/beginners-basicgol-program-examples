#include <basicgol.h>

PROCEDIMENTO merge(INTEIRO a[], INTEIRO f, INTEIRO m, INTEIRO l) {
    INTEIRO n1 = m + 1 - f;
    INTEIRO n2 = l - m;
    INTEIRO t1[n1], t2[n2];
    INTEIRO i;
    PARA (i, 0, n1 - 1) {
        t1[i] = a[f + i];
    }
    INTEIRO j;
    PARA (j, 0, n2 - 1) {
        t2[j] = a[m + 1 + j];
    }
    INTEIRO k = f;
    i = 0;
    j = 0;
    ENQUANTO i < n1 E j < n2 FACA
        SE t1[i] > t2[j] ENTAO
            a[k] = t2[j];
            j++;
        SENAO
            a[k] = t1[i];
            i++;
        FIM_SE
        k++;
    FIM_ENQUANTO
    ENQUANTO i < n1 FACA
        a[k] = t1[i];
        i++;
        k++;
    FIM_ENQUANTO
    ENQUANTO j < n2 FACA
        a[k] = t2[j];
        j++;
        k++;
    FIM_ENQUANTO
}

PROCEDIMENTO sort(INTEIRO a[], INTEIRO f, INTEIRO l) {
    SE f < l ENTAO
        INTEIRO m = (f + l) / 2;
        sort(a, f, m);
        sort(a, m + 1, l);

        merge(a, f, m, l);
    FIM_SE
}
INICIO
    INTEIRO n;
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE
    AFIRME(n >= 0, "Negative case count");
    ENQUANTO n-- > 0 FACA
        INTEIRO num;
        SE NAO LEIA_OK(num) ENTAO
            ERRO("Invalid input");
        FIM_SE
        AFIRME(num >= 1 E num <= 10000, "Expected 1..10000 elements");
        VETOR(INTEIRO, a, num);
        INTEIRO i;
        PARA (i, 0, num - 1) {
            SE NAO LEIA_OK(a[i]) ENTAO
                ERRO("Invalid input");
            FIM_SE
        }
        INTEIRO r;
        SE NAO LEIA_OK(r) ENTAO
            ERRO("Invalid input");
        FIM_SE
        AFIRME(r > 0 E r <= num, "Rank out of range");
        sort(a, 0, num - 1);
        ESCREVA_FMT("%d\n", a[r - 1]);
    FIM_ENQUANTO
FIM
