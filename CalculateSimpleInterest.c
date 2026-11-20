#include <basicgol.h>

INICIO
    INTEIRO principleAmount;
    INTEIRO numberOfYears;
    INTEIRO rateOfInterest;
    INTEIRO SimpleInterest;
    ESCREVAL("enter principleAmount");
    SE NAO LEIA_OK(principleAmount) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVAL("enter number of year");
    SE NAO LEIA_OK(numberOfYears) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVAL("enter rate of interest");
    SE NAO LEIA_OK(rateOfInterest) ENTAO
        ERRO("Invalid input");
    FIM_SE

    SimpleInterest = (principleAmount * numberOfYears * rateOfInterest) / 100;
    ESCREVA_FMT("Simple interest is %d", SimpleInterest);
FIM
