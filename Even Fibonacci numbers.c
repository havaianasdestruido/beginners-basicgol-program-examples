#include <basicgol.h>

INICIO
    INTEIRO i;         // loop counter
    INTEIRO n;         // max value
    INTEIRO t1 = 1;    // First term
    INTEIRO t2 = 1;    // Second term
    INTEIRO nextTerm;  // Next term
    INTEIRO sum = 0;   // Summation of total even Fibonacci number
    INTEIRO count = 0; // counter to count the number of even Fibonacci numbers
    ESCREVA("Enter the max value up to which you want to print the values: ");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVA("The listed even Fibonacci number are: ");
    ESCREVA("\nSlno.\t\tFibonacci number");
    PARA (i, 1, n) {
        SE t1 >= 1 E t1 <= n ENTAO
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;

            SE t1 MOD 2 == 0 E t1 <= n ENTAO
                sum = sum + t1;
                count++;
                ESCREVA_FMT("\n %d\t\t\t%d", count, t1);
            FIM_SE
        FIM_SE
    }
    ESCREVA_FMT("\n\nThe required sum of the total even Fibonacci number is: %u\n\n\n", sum);
FIM
