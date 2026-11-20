#include <basicgol.h>

FUNCAO INTEIRO last_digit_fib_optimized(const INTEIRO index) {
    SE index < 2 ENTAO
        RETORNE index;
    FIM_SE
    INTEIRO first = 0;
    INTEIRO second = 1;
    INTEIRO current = 0;

    INTEIRO i;
    PARA (i, 2, index) {
        current = (first + second) MOD 10;
        first = second;
        second = current;
    }

    RETORNE (current);
}

/* This is the direct solution for reference */
FUNCAO INTEIRO last_digit_fib_naive(const INTEIRO index) {
    SE index < 2 ENTAO
        RETORNE index;
    FIM_SE
    INTEIRO *arr;
    arr = (INTEIRO *)malloc((index + 1) * TAMANHO_DE(INTEIRO));
    arr[0] = 0;
    arr[1] = 1;

    INTEIRO i;
    PARA (i, 2, index) { // store only the last digit of each index
        arr[i] = (arr[i - 1] + arr[i - 2]) MOD 10;
    }

    INTEIRO res = arr[index];
    free(arr);
    RETORNE res;
}

INICIO
    INTEIRO index = 0;
    SE NAO LEIA_OK(index) OU index < 0 ENTAO
        ERRO("Invalid input");
    FIM_SE

    ESCREVA_FMT("%d\n", last_digit_fib_optimized(index));

    RETORNE 0;
FIM
