#include <basicgol.h>

/*
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA

*/
INICIO
    INTEIRO ch = 65;
    INTEIRO i, j, k, m;
    PARA (i, 1, 5) {
        PARA_PASSO (j, 5, i, -1) {
            ESCREVA(" ");
        }
        PARA (k, 1, i) {
            ESCREVA_FMT("%c", ch++);
        }
        ch--;
        PARA (m, 1, i - 1) {
            ESCREVA_FMT("%c", --ch);
        }
        ESCREVA_LINHA();
        ch = 65;
    }
    RETORNE 0;
FIM
