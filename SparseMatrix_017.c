#include <basicgol.h>

INICIO
    ESCREVAL("\n\n\t\tStudytonight - Best place to learn\n\n");
    INTEIRO n, m, c, d, matrix[10][10];
    INTEIRO counter = 0;
    ESCREVAL("\nEnter the number of rows and columns of the matrix \n");
    SE NAO LEIA_OK(m) OU NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE

    ESCREVA_FMT("\nEnter the %d elements of the matrix \n\n", m * n);
    PARA (c, 0, m - 1) // to iterate the rows
    {
        PARA (d, 0, n - 1) // to iterate the columns
        {
            SE NAO LEIA_OK(matrix[c][d]) ENTAO
                ERRO("Invalid input");
            FIM_SE
            SE matrix[c][d] == 0 ENTAO
                counter++; // same as counter=counter +1
            FIM_SE
        }
    }

    // printing the matrix
    ESCREVAL("\n\nThe entered matrix is: \n");
    PARA (c, 0, m - 1) // to iterate the rows
    {
        PARA (d, 0, n - 1) // to iterate the columns
        {
            ESCREVA_FMT("%d\t", matrix[c][d]);
        }
        ESCREVA_LINHA(); // to take the control to the next row
    }

    // checking if the matrix is sparse or not
    SE counter > (m * n) / 2 ENTAO
        ESCREVAL("\n\nThe entered matrix is a sparse matrix\n");
    SENAO
        ESCREVAL("\n\nThe entered matrix is not a sparse matrix\n");
    FIM_SE

    ESCREVAL("\n\n\t\t\tCoding is Fun !\n\n");
    RETORNE 0;
FIM
