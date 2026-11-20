#include <basicgol.h>

// C program to input a matrix of order MxN and find its transpose

INICIO
    ESTATICO INTEIRO array[10][10];
    INTEIRO i, j, row, col;

    ESCREVAL("Enter the order of the matrix ");
    SE NAO LEIA_OK(row) OU NAO LEIA_OK(col) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVAL("Enter the coefficients of the matrix");
    PARA (i, 0, row - 1) {
        PARA (j, 0, col - 1) {
            SE NAO LEIA_OK(array[i][j]) ENTAO
                ERRO("Invalid input");
            FIM_SE
        }
    }
    ESCREVAL("The given matrix is ");
    PARA (i, 0, row - 1) {
        PARA (j, 0, col - 1) {
            ESCREVA_FMT(" %d", array[i][j]);
        }
        ESCREVA_LINHA();
    }
    ESCREVAL("Transpose of matrix is ");
    PARA (j, 0, col - 1) {
        PARA (i, 0, row - 1) {
            ESCREVA_FMT(" %d", array[i][j]);
        }
        ESCREVA_LINHA();
    }

    RETORNE 0;
FIM
