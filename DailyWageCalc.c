#include <basicgol.h>

// Program to find the daily wages of a worker according to the following
// conditions using ladder else if statement
// Given below is the Pay according to hour
// ---------------------------------------------------------------------
// Duty in hours            Amount in rupees
// ----------------------------------------
// Within first 8 hours     100 Rupees
// Next 4 hours	            20 Rupees/hour
// Next 4 hours	            40 Rupees/hour
// Next 4 hours	            60 Rupees/hour
// Next 4 hours	            80 Rupees/hour
//-----------------------------------------------------------------------

INICIO
    INTEIRO hour, amount;
    ESCREVAL("Enter number of duty hours");
    SE NAO LEIA_OK(hour) OU hour < 1 OU hour > 24 ENTAO
        ERRO("Invalid input");
    FIM_SE
    SE hour >= 1 E hour <= 8 ENTAO
        amount = 100;
    SENAO_SE hour >= 9 E hour <= 12 ENTAO
        amount = 100 + (hour - 8) * 20;
    SENAO_SE hour >= 13 E hour <= 16 ENTAO
        amount = 180 + (hour - 12) * 40;
    SENAO_SE hour >= 17 E hour <= 20 ENTAO
        amount = 340 + (hour - 16) * 60;
    SENAO
        amount = 580 + (hour - 20) * 80;
    FIM_SE
    ESCREVA_FMT("Amount incurred by worker : %d", amount);
    RETORNE 0;
FIM
