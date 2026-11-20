#include <basicgol.h>

// Evaluate total, average and percentage of a student

INICIO
    INTEIRO a, b, c, d, e;
    REAL_CURTO total, average, percentage;
    ESCREVAL("Enter marks of 5 subjects : ");
    SE NAO LEIA_OK(a) OU NAO LEIA_OK(b) OU NAO LEIA_OK(c) OU NAO LEIA_OK(d) OU NAO LEIA_OK(e) ENTAO
        ERRO("Invalid input");
    FIM_SE
    total = a + b + c + d + e;
    average = total / 5;
    percentage = (total / 500) * 100;
    ESCREVA_FMT("Total marks = %f\n", total);
    ESCREVA_FMT("Average marks = %f\n", average);
    ESCREVA_FMT("Net percentage = %f\n", percentage);
    RETORNE 0;
FIM
