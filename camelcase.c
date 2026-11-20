#include <basicgol.h>
#include <ctype.h>

INICIO
    CARACTERE s[100], fs[200];
    SE NAO LEIA_TEXTO(s, TAMANHO_DE(s)) ENTAO
        RETORNE 1;
    FIM_SE

    INTEIRO k = 0, i;
    PARA (i, 0, (INTEIRO)TAMANHO_TEXTO(s) - 1) {
        SE s[i] >= 'A' E s[i] <= 'Z' ENTAO
            fs[k++] = '_';
            fs[k++] = CARACTERE_MINUSCULO(s[i]);
        SENAO
            fs[k++] = s[i];
        FIM_SE
    }
    fs[k] = '\0';
    ESCREVAL(fs);
    RETORNE 0;
FIM
