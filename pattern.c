#include <basicgol.h>

INICIO
    INTEIRO row, c, n, s;

    ESCREVAL("Enter the number of rows in pyramid of stars you wish to see");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE

    s = n;

    PARA (row, 1, n) // Loop to print rows
    {
        PARA (c, 1, s - 1) { // Loop to print spaces in a row
            ESCREVA(" ");
        }

        s--;

        PARA (c, 1, 2 * row - 1) { // Loop to print stars in a row
            ESCREVA("*");
        }

        ESCREVA_LINHA();
    }

    RETORNE 0;
FIM
