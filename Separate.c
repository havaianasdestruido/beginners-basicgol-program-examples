#include <basicgol.h>

INICIO
    REAL_CURTO a, c;
    INTEIRO b;
    ESCREVA("Enter the Number : ");
    SE NAO LEIA_OK(a) ENTAO
        ERRO("Invalid input");
    FIM_SE
    b = a / 1;
    c = a - b;
    ESCREVA_FMT("Integer Part is : %d\n", b);
    ESCREVA_FMT("Decimal Part is : %f", c);
FIM
