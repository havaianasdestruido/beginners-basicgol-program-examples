#include <basicgol.h>

// Swap Values Without using Third Variable.
INICIO
    INTEIRO a, b; /*declaration of variables*/
    ESCREVAL("Enter Two Numbers");
    SE NAO LEIA_OK(a) OU NAO LEIA_OK(b) ENTAO
        ERRO("Invalid input");
    FIM_SE                                                      /*Taking input of Two Variables*/
    a = a + b;                                             /*swapping */
    b = a - b;                                             /* the two */
    a = a - b;                                             /*numbers*/
    ESCREVA_FMT("the number after swapping are %d %d\n", a, b); /*printing*/
    RETORNE 0;
FIM
