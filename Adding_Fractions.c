#include <basicgol.h>

INICIO
    /* variable declaration */
    INTEIRO numerator1, numerator2, denominator1, denominator2, num_result, denom_result;
    /* Read each fraction */
    ESCREVAL("Please provide the first numerator:");
    SE NAO LEIA_OK(numerator1) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVAL("Please provide the first denominator:");
    SE NAO LEIA_OK(denominator1) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVAL("Please provide the second numerator:");
    SE NAO LEIA_OK(numerator2) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVAL("Please provide the second denominator:");
    SE NAO LEIA_OK(denominator2) ENTAO
        ERRO("Invalid input");
    FIM_SE
    /*compare the demonators*/
    SE denominator1 == denominator2 ENTAO
        num_result = numerator1 + numerator2;
        denom_result = denominator1; /*  or 2, they are equal */
    SENAO
        num_result = (numerator1 * denominator2) + (numerator2 * denominator1);
        denom_result = denominator1 * denominator2;
    FIM_SE
    ESCREVA_FMT("The result of %d / %d  + %d / %d  is: %d / %d \n", numerator1, denominator1, numerator2,
           denominator2, num_result, denom_result);
    RETORNE 0;
FIM
