#include <basicgol.h>

// A c program to print prime numbers from 1 to n

INICIO
    INTEIRO num, i, j;
    ESCREVA("Enter number: ");
    SE NAO LEIA_OK(num) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVAL("Prime numbers are:");
    // traversing all numbers from 2 to entered integer num
    PARA (i, 2, num) {
        // loop to check divisibility
        PARA (j, 2, i - 1) {
            // checking if it is divisible by any smaller number
            SE i MOD j == 0 ENTAO
                // if it is divisible exiting from loop
                PARE;
            FIM_SE
        }
        // printing the number if it is never divisible by numbers smaller than itself
        SE i == j ENTAO
            ESCREVA_FMT("%d\n", i);
        FIM_SE
    }
FIM
