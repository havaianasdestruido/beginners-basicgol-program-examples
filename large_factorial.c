#include <basicgol.h>

// c program to find factorial upto input of 5000

INICIO
    VETOR(INTEIRO, ans, 16500);
    INTEIRO testcases;
    ESCREVA("Enter no of test cases: ");
    SE NAO LEIA_OK(testcases) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ENQUANTO testcases-- FACA
        INTEIRO num;
        ESCREVA("Enter number:");
        SE NAO LEIA_OK(num) OU num < 0 OU num > 5000 ENTAO
            ERRO("Invalid input");
        FIM_SE
        INTEIRO i;
        PARA (i, 0, 16499) {
            ans[i] = 0;
        }
        ans[0] = 1;
        INTEIRO m, carry;
        PARA (i, 2, num) {
            carry = 0;
            INTEIRO j;
            PARA (j, 0, 16499) {
                m = i * ans[j];
                m += carry;
                ans[j] = m MOD 10;
                carry = m / 10;
            }
        }
        i = 16500 - 1;
        ENQUANTO i >= 0 E ans[i] == 0 FACA
            i--;
        FIM_ENQUANTO
        ESCREVA_FMT("\t%d! =", num);
        ENQUANTO i >= 0 FACA
            ESCREVA_FMT("%d", ans[i]);
            i--;
        FIM_ENQUANTO
        ESCREVA_LINHA();
    FIM_ENQUANTO
FIM
