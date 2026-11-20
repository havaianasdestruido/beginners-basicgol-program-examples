#include <basicgol.h>

#define Row 4
#define Col 3
PROCEDIMENTO spiral_matrix(INTEIRO r, INTEIRO c, INTEIRO arr[Row][Col]) {
    INTEIRO i;
    INTEIRO k = 0, l = 0;
    ENQUANTO k < r E l < c FACA
        PARA (i, l, c - 1) {
            ESCREVA_FMT("%d\t", arr[k][i]);
        }
        k++;

        PARA (i, k, r - 1) {
            ESCREVA_FMT("%d\t", arr[i][c - 1]);
        }
        c--;
        SE k < r ENTAO
            PARA_PASSO (i, c - 1, l, -1) {
                ESCREVA_FMT("%d\t", arr[r - 1][i]);
            }
            r--;
        FIM_SE
        SE l < c ENTAO
            PARA_PASSO (i, r - 1, k, -1) {
                ESCREVA_FMT("%d\t", arr[i][l]);
            }
            l++;
        FIM_SE
    FIM_ENQUANTO
}

INICIO
    INTEIRO a[Row][Col] = {{1, 2, 3}, {10, 20, 30}, {110, 220, 330}, {1100, 2200, 3300}};

    spiral_matrix(Row, Col, a);
    RETORNE (0);
FIM
