#include <basicgol.h>

// This program convert numbers into their corresponding characters

PROCEDIMENTO convertNumbertoChar(INTEIRO_LONGO n);

INICIO
    INTEIRO_LONGO n;
    ESCREVA("Please Enter the Number = ");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE
    convertNumbertoChar(n); /* It's important to break your code in bloks,
    So let's make a function that solve our problem*/
FIM

PROCEDIMENTO convertNumbertoChar(INTEIRO_LONGO n) {
    INTEIRO_LONGO r, sum = 0;
    ENQUANTO n > 0 FACA   // This loop change the position of number so we can print in the righ order
        r = (n MOD 10); // Decompose the number
        sum = (sum * 10) + r; // To compose the number
        n = n / 10;           // n decrement
    FIM_ENQUANTO
    n = sum;
    ENQUANTO n > 0 FACA  // Now we can print the characters
        r = n MOD 10;  // Selecting one number to print
        ESCOLHA(r) // Print the corresponding character for each case
        CASO 1:
            ESCREVA("one ");
            PARE;
        CASO 2:
            ESCREVA("two ");
            PARE;
        CASO 3:
            ESCREVA("three ");
            PARE;
        CASO 4:
            ESCREVA("four ");
            PARE;
        CASO 5:
            ESCREVA("five ");
            PARE;
        CASO 6:
            ESCREVA("six ");
            PARE;
        CASO 7:
            ESCREVA("seven ");
            PARE;
        CASO 8:
            ESCREVA("eight ");
            PARE;
        CASO 9:
            ESCREVA("nine ");
            PARE;
        CASO 0:
            ESCREVA("zero ");
            PARE;
        CONTRARIO:
            ESCREVA("undefined");
            PARE;
        FIM_ESCOLHA
        n = n / 10; // Decrementing n, ensuring the condition to the loop break
    FIM_ENQUANTO
    ESCREVA_LINHA();
}
