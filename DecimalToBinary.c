#include <basicgol.h>

// Convert base10(decimal) values to base2(binary)

PROCEDIMENTO PrintBits(INTEIRO power, INTEIRO num) {
    // firstOne is a flag that stops "0" being printed before a "1" is printed
    INTEIRO firstOne = 0;

    // Conversion loop
    ENQUANTO power > 0 FACA
        SE num >= power ENTAO
            firstOne = 1;
            ESCREVA("1");
            num %= power;
        SENAO_SE firstOne == 1 ENTAO
            ESCREVA("0");
        FIM_SE
        power /= 2;
    FIM_ENQUANTO
    ESCREVA_LINHA();
}

INICIO
    INTEIRO num = 0;
    INTEIRO power = 1;

    // Getting input
    ESCREVA("Please enter a numeric value: ");
    SE NAO LEIA_OK(num) OU num < 0 ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVA_FMT("%d represented in binary is: ", num);

    // Determine highest order of magnitude needed for the base2 conversion
    ENQUANTO power <= num / 2 FACA
        power *= 2;
    FIM_ENQUANTO

    // Edge case in event of 0 being entered
    SE num == 0 ENTAO
        ESCREVAL("0");
    SENAO
        PrintBits(power, num);
    FIM_SE
    RETORNE (0);
FIM
