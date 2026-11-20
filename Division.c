#include <basicgol.h>

INICIO
    INTEIRO a, b, c;
    ESCREVA("Enter two Numbers : ");
    SE NAO LEIA_OK(a) OU NAO LEIA_OK(b) ENTAO
        ERRO("Invalid input");
    FIM_SE
    AFIRME(b != 0, "Division by zero");
    c = a / b;
    ESCREVA_FMT("Division is %d", c);
FIM
