#include <basicgol.h>

// Uppercase character to lowercase character

INICIO
    CARACTERE a, u;
    ESCREVAL("Enter Uppercase letter :");
    SE NAO LEIA_OK(a) ENTAO
        ERRO("Invalid input");
    FIM_SE
    u = a + 32;
    ESCREVA_FMT("Lowercase is : %c", u);
    RETORNE 0;
FIM
