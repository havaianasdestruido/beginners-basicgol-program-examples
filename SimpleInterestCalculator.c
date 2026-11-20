#include <basicgol.h>

// Program to calculate simple interest

INICIO
    REAL_CURTO PrincipleAmount, Rate, Time, SimpleInterest;
    ESCREVAL("Enter Principal Amount, Rate of interest and Time Respectively");
    SE NAO LEIA_OK(PrincipleAmount) OU NAO LEIA_OK(Rate) OU NAO LEIA_OK(Time) ENTAO
        ERRO("Invalid input");
    FIM_SE
    SimpleInterest = (PrincipleAmount * Rate * Time) / 100;
    ESCREVA_FMT("Simple Interest is :%f", SimpleInterest);
    RETORNE 0;
FIM
