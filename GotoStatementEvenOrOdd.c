#include <basicgol.h>

// Program to input an integer number and check whether it is
// even or odd and positive or negative using goto  statements

INICIO
    INTEIRO n;

    ESCREVAL("enter a number");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE
    SE n MOD 2 == 0 E n > 0 ENTAO
        goto a;
    SENAO_SE n MOD 2 != 0 E n < 0 ENTAO
        goto b;
    SENAO_SE n MOD 2 == 0 E n < 0 ENTAO
        goto c;
    SENAO_SE n MOD 2 != 0 E n > 0 ENTAO
        goto d;
    SENAO
        goto e;
    FIM_SE
a:
    ESCREVA("number is even and positive");
    goto stop;
b:
    ESCREVA("number is odd and negative");
    goto stop;
c:
    ESCREVA("number is even and negative");
    goto stop;
d:
    ESCREVA("number is odd and positive");
    goto stop;
e:
    ESCREVA("special number");
    goto stop;
stop:
    RETORNE 0;
FIM
