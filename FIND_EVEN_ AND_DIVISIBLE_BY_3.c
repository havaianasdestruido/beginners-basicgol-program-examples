#include <basicgol.h>

#define MAX 5

PROCEDIMENTO printEven(INTEIRO[MAX], INTEIRO);
PROCEDIMENTO printMultiple(INTEIRO[MAX], INTEIRO);
INICIO
    INTEIRO i, j = 0, num[MAX];
    ESCREVAL("Enter numbers in the range of 1 to 9 ");
    i = 0;
    ENQUANTO i < MAX FACA
        SE NAO LEIA_OK(num[i]) ENTAO
            ERRO("Invalid input");
        FIM_SE
        ESCOLHA(num[i])
        CASO 1:
        CASO 2:
        CASO 3:
        CASO 4:
        CASO 5:
        CASO 6:
        CASO 7:
        CASO 8:
        CASO 9:
            i++;
            PARE;
        CONTRARIO: {
            j = 1;
            PARE;
        }
        FIM_ESCOLHA
        SE j == 1 ENTAO
            ESCREVA("NO MORE INPUT");
            PARE;
        FIM_SE
    FIM_ENQUANTO
    ESCREVAL("Multiple of 3's \n");
    printMultiple(num, i);

    ESCREVAL("\n\n");
    ESCREVAL("EVEN numbers\n\n");
    printEven(num, i);
FIM

PROCEDIMENTO printMultiple(INTEIRO num[MAX], INTEIRO len) {

    INTEIRO i;
    PARA (i, 0, len - 1) {
        INTEIRO ans3 = num[i] MOD 3;
        ESCOLHA(ans3)
        CASO 0:
            ESCREVA_FMT("%d \n", num[i]);
        FIM_ESCOLHA
    }
}

PROCEDIMENTO printEven(INTEIRO num[MAX], INTEIRO len) {

    INTEIRO i;
    PARA (i, 0, len - 1) {
        INTEIRO ans_even = num[i] MOD 2;
        ESCOLHA(ans_even)
        CASO 0:
            ESCREVA_FMT("%d \n", num[i]);
        FIM_ESCOLHA
    }
}
