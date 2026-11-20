#include <basicgol.h>

// Integer calculator: division truncates toward zero.

INICIO
    INTEIRO a, b, c;
    CARACTERE ch;
    ESCREVAL("enter two number");
    SE NAO LEIA_OK(a) OU NAO LEIA_OK(b) ENTAO
        ERRO("Invalid input");
    FIM_SE

    ESCREVAL("enter your choice");
    ESCREVAL("1. enter 1 for addition");
    ESCREVAL("2. enter 2 for subtraction");
    ESCREVAL("3. enter 3 for multiplication");
    ESCREVAL("4. Enter 4 for division");
    ESCREVAL("5. enter 5 for modulo division");
    SE NAO LEIA_OK(ch) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCOLHA(ch)
    CASO '1':
        c = a + b;
        PARE;
    CASO '2':
        c = a - b;
        PARE;
    CASO '3':
        c = a * b;
        PARE;
    CASO '4':
        AFIRME(b != 0, "Division by zero");
        c = a / b;
        PARE;
    CASO '5':
        AFIRME(b != 0, "Division by zero");
        c = a MOD b; // Modulus division only works with integers.
        PARE;
    CONTRARIO:
        ERRO("wrong choice");
    FIM_ESCOLHA
    ESCREVA_FMT("calculated value=%d", c);

    RETORNE 0;
FIM
