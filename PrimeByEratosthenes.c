#include <basicgol.h>

#define limit 100 /*size of integers array*/

INICIO
    INTEIRO i, j;
    INTEIRO *primes; // pointer created for prime

    primes = malloc(TAMANHO_DE(INTEIRO) *
                    limit); // allocating 100 spaces in memory with the starting address to prime pointer

    PARA (i, 2, limit - 1) { // initializing the 100 memory spaces
        primes[i] = 1;
    }

    PARA (i, 2, limit - 1) { // Filling the array with prime numbers as per the method proposed by
                                  // seive of eratosthenes
        SE primes[i] ENTAO
            j = i;
            ENQUANTO i * j < limit FACA
                primes[i * j] = 0;
                j++;
            FIM_ENQUANTO
        FIM_SE
    }

    ESCREVAL("\nPrime numbers in range 1 to 100 are: ");

    PARA (i, 2, limit - 1) { // Printing the prime numbers in the range from 1 to 100
        SE primes[i] ENTAO
            ESCREVA_FMT("%d\n", i);
        FIM_SE
    }

    free(primes);
    RETORNE 0;
FIM
