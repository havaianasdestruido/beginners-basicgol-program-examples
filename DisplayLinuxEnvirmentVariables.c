#include <basicgol.h>

EXTERNO CARACTERE **environ;

INICIO
    INTEIRO i = -1;

    ENQUANTO environ[++i] FACA
        ESCREVA_FMT("%s\n", environ[i]);
    FIM_ENQUANTO
FIM
