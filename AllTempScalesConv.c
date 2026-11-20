#include <basicgol.h>

// Function that performs the conversion
FUNCAO REAL convertTemp(REAL initValue, INTEIRO initScale, INTEIRO finalScale) {
    REAL finalValue = 0;
    ESCOLHA(initScale)
    // Celsius
    CASO 1:
        // Celsius to Kelvin
        SE finalScale == 1 ENTAO
            finalValue = initValue + 273.15;

        // Celsius to Fahrenheit
        SENAO_SE finalScale == 2 ENTAO
            finalValue = (initValue * 9 / 5) + 32;
        FIM_SE
        PARE;
    CASO 2:
        // Kelvin to Celsius
        SE finalScale == 1 ENTAO
            finalValue = initValue - 273.15;

        // Kelvin to Fahrenheit
        SENAO_SE finalScale == 2 ENTAO
            finalValue = ((initValue - 273.15) * 9 / 5) + 32;
        FIM_SE
        PARE;
    CASO 3:
        // Fahrenheit to Celsius
        SE finalScale == 1 ENTAO
            finalValue = (initValue - 32) * 5 / 9;

        // Fahrenheit to Kelvin
        SENAO_SE finalScale == 2 ENTAO
            finalValue = ((initValue - 32) * 5 / 9) + 273.15;
        FIM_SE
        PARE;
    FIM_ESCOLHA
    RETORNE finalValue;
}

INICIO
    INTEIRO option;
    REAL initialValue, finalValue;
    ENQUANTO VERDADEIRO FACA
        // main menu
        ESCREVAL("\n0 - Exit");
        ESCREVAL("1 - Convert from Celsius to Kelvin");
        ESCREVAL("2 - Convert from Celsius to Fahrenheit");
        ESCREVAL("3 - Convert from Kelvin to Celsius");
        ESCREVAL("4 - Convert from Kelvin to Fahrenheit");
        ESCREVAL("5 - Convert from Fahrenheit to Celsius");
        ESCREVAL("6 - Convert from Fahrenheit to Kelvin");

        ESCREVA("Select a number: ");
        SE NAO LEIA_OK(option) ENTAO
            ERRO("Invalid input");
        FIM_SE
        SE NAO option ENTAO
            ESCREVAL("Ending program");
            RETORNE 0;
        FIM_SE

        ESCREVA("Please enter the initial value: ");
        SE NAO LEIA_OK(initialValue) ENTAO
            ERRO("Invalid input");
        FIM_SE

        ESCOLHA(option)
        CASO 1:
            finalValue = convertTemp(initialValue, 1, 1);
            ESCREVA_FMT("Valor em Kelvin: %.2lf", finalValue);
            PARE;
        CASO 2:
            finalValue = convertTemp(initialValue, 1, 2);
            ESCREVA_FMT("Valor em Fahrenheit: %.2lf", finalValue);
            PARE;
        CASO 3:
            finalValue = convertTemp(initialValue, 2, 1);
            ESCREVA_FMT("Valor em Celsius: %.2lf", finalValue);
            PARE;
        CASO 4:
            finalValue = convertTemp(initialValue, 2, 2);
            ESCREVA_FMT("Valor em Fahrenheit: %.2lf", finalValue);
            PARE;
        CASO 5:
            finalValue = convertTemp(initialValue, 3, 1);
            ESCREVA_FMT("Valor em Celsius: %.2lf", finalValue);
            PARE;
        CASO 6:
            finalValue = convertTemp(initialValue, 3, 2);
            ESCREVA_FMT("Valor em Kelvin: %.2lf", finalValue);
            PARE;
        FIM_ESCOLHA
        ESCREVA_LINHA();
    FIM_ENQUANTO

    RETORNE 0;
FIM
