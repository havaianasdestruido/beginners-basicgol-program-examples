#include <basicgol.h>

INICIO
    /** Program to print the following pattern:

                            *
                            **
                            ***
                            ****
                            *****
    **/
    INTEIRO i, j, k; // Declaration of variable
    PARA (i, 1, 5) {
        PARA (j, 1, i) {
            ESCREVA("*");
        }
        ESCREVA_LINHA();
    }

    /** Program to print the following pattern:

        1
       123
      12345
     1234567
    123456789
     1234567
      12345
       123
        1

        **/
    PARA (i, 1, 5) {
        PARA (j, i, 4) {
            ESCREVA(" ");
        }
        PARA (k, 1, (i * 2) - 1) {
            ESCREVA_FMT("%d", k);
        }
        ESCREVA_LINHA();
    }

    PARA_PASSO (i, 4, 1, -1) {
        PARA_PASSO (j, 5, i + 1, -1) {
            ESCREVA(" ");
        }
        PARA (k, 1, (i * 2) - 1) {
            ESCREVA_FMT("%d", k);
        }
        ESCREVA_LINHA();
    }

    RETORNE 0;
FIM
