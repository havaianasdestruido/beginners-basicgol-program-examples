#include <basicgol.h>

INICIO
    INTEIRO i, j, k;
    TEXTO_FIXO(str, 100);
    TEXTO_FIXO(rev, 100);
    ESCREVA("Enter a string:\t");
    AFIRME(scanf("%99s", str) == 1, "Invalid input");
    ESCREVA_FMT("The original string is %s\n", str);
    i = TAMANHO_TEXTO(str);
    k = i - 1;
    PARA (j, 0, i - 1) {
        rev[j] = str[k];
        k--;
    }
    rev[i] = '\0';
    ESCREVA_FMT("The reverse string is %s\n", rev);
FIM
