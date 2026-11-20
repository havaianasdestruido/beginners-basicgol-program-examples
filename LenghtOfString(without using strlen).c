#include <basicgol.h>

FUNCAO INTEIRO slength(CARACTERE name[30]);
INICIO
    INTEIRO len;
    TEXTO_FIXO(name, 30);
    ESCREVAL("Enter any string");
    SE NAO LEIA_TEXTO(name, TAMANHO_DE(name)) ENTAO
        RETORNE 1;
    FIM_SE
    len = slength(name);
    ESCREVA_FMT("lenght of '%s' is %d\n", name, len);
FIM
FUNCAO INTEIRO slength(CARACTERE name[30]) {
    INTEIRO i = 0, count = 0;
    ENQUANTO name[i] != '\0' FACA
        i++;
        count++;
    FIM_ENQUANTO
    RETORNE count;
}
