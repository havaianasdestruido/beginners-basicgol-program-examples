#include <basicgol.h>

// Program to display the day name using switch case
INICIO
    INTEIRO day;
    ESCREVAL("Enter the day number");
    SE NAO LEIA_OK(day) ENTAO
        ERRO("Invalid input");
    FIM_SE

    ESCOLHA(day)
    CASO 1:
        ESCREVA("Day is Monday");
        PARE;
    CASO 2:
        ESCREVA("Day is Tuesday");
        PARE;
    CASO 3:
        ESCREVA("Day is Wednesday");
        PARE;
    CASO 4:
        ESCREVA("Day is Thrusday");
        PARE;
    CASO 5:
        ESCREVA("Day is Friday");
        PARE;
    CASO 6:
        ESCREVA("Day is Saturday");
        PARE;
    CASO 7:
        ESCREVA("Day is Sunday");
        PARE;
    CONTRARIO:
        ESCREVA("Wrong choice");
    FIM_ESCOLHA

    RETORNE 0;
FIM
