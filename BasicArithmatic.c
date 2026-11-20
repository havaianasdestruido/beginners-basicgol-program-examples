#include <basicgol.h>

// A simple arithmetic operation on two integers

INICIO
    INTEIRO number1, number2, addition, subtraction, multiplication, division, modulo;
    ESCREVAL("Enter two numbers :");
    SE NAO LEIA_OK(number1) OU NAO LEIA_OK(number2) ENTAO
        ERRO("Invalid input");
    FIM_SE
    AFIRME(number2 != 0, "Division by zero");
    addition = number1 + number2;
    subtraction = number1 - number2;
    multiplication = number1 * number2;
    division = number1 / number2;
    modulo = number1 MOD number2;
    ESCREVA_FMT("Addition of number 1 and number 2 : %d\n", addition);
    ESCREVA_FMT("Subtraction of number 1 and number 2 : %d\n", subtraction);
    ESCREVA_FMT("Multiplication of number 1 and number 2 : %d\n", multiplication);
    ESCREVA_FMT("Division of number 1 and number 2 : %d\n", division);
    ESCREVA_FMT("Modulo of number 1 and number 2 : %d\n", modulo);
    RETORNE 0;
FIM
