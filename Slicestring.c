#include <basicgol.h>

PROCEDIMENTO slice(CARACTERE *st, INTEIRO m, INTEIRO n) {
    INTEIRO i = 0;
    ENQUANTO (m + i) < n FACA
        st[i] = st[m + i];
        i++;
    FIM_ENQUANTO
    st[i] = '\0';
}
INICIO
    CARACTERE st[] = "Hello";
    slice(st, 1, 4);
    ESCREVA_FMT("%s", st);
    RETORNE 0;
FIM
