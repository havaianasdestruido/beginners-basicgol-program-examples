#include <basicgol.h>

INICIO
    INTEIRO n, i, j, sum1 = 0, sum2 = 0; // n denotes the number of rows and columns in the matrix arr.

    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE
    INTEIRO arr[n][n];
    PARA (i, 0, n - 1) {
        PARA (j, 0, n - 1) {
            SE NAO LEIA_OK(arr[i][j]) ENTAO
                ERRO("Invalid input");
            FIM_SE
            // Taking diagonal sum of the matrix arr from the both side
            SE arr[i][j] >= -100 E arr[i][j] <= 100 ENTAO
                SE i == j ENTAO
                    sum1 += arr[i][j];
                FIM_SE
                SE j == (n - 1 - i) ENTAO
                    sum2 += arr[i][j];
                FIM_SE
            FIM_SE
        }
    }
    // This code part belongs to the absolute difference between the sums of the matrix's along two
    // diagonals
    SE (sum1 - sum2) < 0 ENTAO
        ESCREVA_FMT("%d", (-((sum1) - (sum2))));
    SENAO
        ESCREVA_FMT("%d", ((sum1) - (sum2)));
    FIM_SE
    RETORNE 0;
FIM

/*
Sample Input

3
11 2 4
4 5 6
10 8 -12
Sample Output

15

Explanation

The primary diagonal is:

11
   5
     -12
Sum across the primary diagonal: 11 + 5 - 12 = 4

The secondary diagonal is:

     4
   5
10
Sum across the secondary diagonal: 4 + 5 + 10 = 19
Difference: |4 - 19| = 15
*/
