#include <basicgol.h>

// Program to find employee grade
// Given TA : 5% , DA : 7.5% , HRA : 10%

INICIO
    REAL_CURTO BaseSalary, TA, DA, HRA, GrossSalary;

    ESCREVAL("Enter basic salary of employee");
    SE NAO LEIA_OK(BaseSalary) ENTAO
        ERRO("Invalid input");
    FIM_SE

    TA = 0.05 * BaseSalary;
    DA = 0.075 * BaseSalary;
    HRA = 0.1 * BaseSalary;
    GrossSalary = BaseSalary + TA + DA + HRA;

    SE GrossSalary >= 100000 ENTAO
        ESCREVA("A grade employee");
    SENAO_SE GrossSalary >= 75000 E GrossSalary < 100000 ENTAO
        ESCREVA("B grade employee");
    SENAO_SE GrossSalary >= 50000 E GrossSalary < 75000 ENTAO
        ESCREVA("C grade employee");
    SENAO_SE GrossSalary >= 20000 E GrossSalary < 50000 ENTAO
        ESCREVA("D grade employee");
    SENAO
        ESCREVA("E grade employee");
    FIM_SE
    RETORNE 0;
FIM
