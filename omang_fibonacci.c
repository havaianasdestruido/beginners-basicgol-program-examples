#include <basicgol.h>

PROCEDIMENTO printFibonacci(INTEIRO n) {
    ESTATICO INTEIRO n1 = 0, n2 = 1, n3;
    SE n > 0 ENTAO
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        ESCREVA_FMT("%d ", n3);
        printFibonacci(n - 1);
    FIM_SE
}
INICIO
    INTEIRO n;
    ESCREVA("Enter the number of elements: ");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVA("Fibonacci Series: ");
    ESCREVA_FMT("%d %d ", 0, 1);
    printFibonacci(n - 2);
    RETORNE 0;
FIM
