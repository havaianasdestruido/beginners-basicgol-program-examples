#include <basicgol.h>

// Fibonacci Series using Recursion

// fib function with argument n to generate nth Fibanocci Number
FUNCAO INTEIRO fib(INTEIRO n) {
    // Base case defined
    SE n <= 1 ENTAO
        RETORNE n;
    FIM_SE

    // Recursive Calls to fib function
    RETORNE fib(n - 1) + fib(n - 2);
}

INICIO
    // Sample input
    INTEIRO n = 11;

    // Printing the nth Fibanocci Number
    ESCREVA_FMT("%d", fib(n));
FIM
