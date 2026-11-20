#include <basicgol.h>

INICIO
    // The resultant temperatures can be in decimals as well, so we use double
    REAL c, f, result;
    // We use an integer type data to run the switch statement
    INTEIRO choice;
    ESCREVAL("Select your choice: ");
    ESCREVAL("1. Celcius to Fahrenheit");
    ESCREVAL("2. Fahrenheit to Celcius");

    ESCREVA("Enter your choice: ");
    SE NAO LEIA_OK(choice) ENTAO
        ERRO("Invalid input");
    FIM_SE

    // We compute the temperatures for both the cases here respectively
    ESCOLHA(choice)
    CASO 1:
        ESCREVA("Enter the temperature in Celcius: ");
        SE NAO LEIA_OK(c) ENTAO
            ERRO("Invalid input");
        FIM_SE
        result = (9.0 / 5) * c + 32;
        PARE;
    CASO 2:
        ESCREVA("Enter the temperature in Fahrenheit: ");
        SE NAO LEIA_OK(f) ENTAO
            ERRO("Invalid input");
        FIM_SE
        result = (5.0 / 9) * (f - 32);
        PARE;

    // This case gets activated when the user inputs anything othrer than 1 or 2
    CONTRARIO:
        ERRO("Invalid case!");
    FIM_ESCOLHA

    // Printing out the result according to the computation
    ESCREVA_FMT("The resultant temperature is: %lf", result);
    RETORNE 0;
FIM
