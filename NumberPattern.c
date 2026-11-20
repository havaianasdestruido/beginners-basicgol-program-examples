#include <basicgol.h>

/*Prints the pattern
1
2 3
4 5 6
7 8 9 10
.
*/
INICIO
    INTEIRO i, j, rows, num = 1;

    ESCREVA("Enter number of rows: ");
    SE NAO LEIA_OK(rows) ENTAO
        ERRO("Invalid input");
    FIM_SE

    PARA (i, 1, rows) {
        PARA (j, 1, i) {
            ESCREVA_FMT("%3d ", num);
            num++;
        }
        ESCREVA_LINHA();
    }
    RETORNE 0;
FIM
