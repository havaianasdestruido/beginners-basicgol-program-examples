#include <basicgol.h>

INICIO
    REAL_CURTO agp, b, da, gs;
    ESCREVAL("Enter the Basic Salary : ");
    SE NAO LEIA_OK(b) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVAL("Enter the AGP : ");
    SE NAO LEIA_OK(agp) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVAL("Enter the DA in Percentage : ");
    SE NAO LEIA_OK(da) ENTAO
        ERRO("Invalid input");
    FIM_SE
    gs = (b + agp) * (1 + (da / 100));
    ESCREVA_FMT("Gross Salary is %f", gs);
FIM
