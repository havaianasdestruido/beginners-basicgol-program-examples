#include <basicgol.h>

INICIO
    REAL_CURTO principal, rate, time, emi;

    ESCREVA("Enter principal amount: ");
    SE NAO LEIA_OK(principal) ENTAO
        ERRO("Invalid input");
    FIM_SE

    ESCREVA("Enter rate of interest: ");
    SE NAO LEIA_OK(rate) ENTAO
        ERRO("Invalid input");
    FIM_SE

    ESCREVA("Enter time in years: ");
    SE NAO LEIA_OK(time) ENTAO
        ERRO("Invalid input");
    FIM_SE

    rate = rate / (12 * 100); /*one month interest*/
    time = time * 12;         /*one month period*/

    emi = (principal * rate * POTENCIA(1 + rate, time)) / (POTENCIA(1 + rate, time) - 1);

    ESCREVA_FMT("Monthly EMI is= %f\n", emi);

    RETORNE 0;
FIM
