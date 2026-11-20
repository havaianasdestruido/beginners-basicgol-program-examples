#include <basicgol.h>
#include <inttypes.h>

FUNCAO INTEIRO convert_to_octal(INTEIRO64 binary);

INICIO
    INTEIRO64 binary;
    ESCREVA("Enter a binary number: ");
    SE NAO LEIA_OK(binary) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVA_FMT("%" PRId64 " in binary = %d in octal", binary, convert_to_octal(binary));
    RETORNE 0;
FIM

FUNCAO INTEIRO convert_to_octal(INTEIRO64 binary) {
    INTEIRO octal = 0, decimal = 0, i = 0;

    // Step 1> convert binary to decimal
    // Step 2> convert decimal to octal

    // converting binary to decimal
    ENQUANTO binary != 0 FACA
        decimal += (binary MOD 10) * POTENCIA(2, i);
        ++i;
        binary /= 10;
    FIM_ENQUANTO
    i = 1;

    // converting to decimal to octal
    ENQUANTO decimal != 0 FACA
        octal += (decimal MOD 8) * i;
        decimal /= 8;
        i *= 10;
    FIM_ENQUANTO
    RETORNE octal;
}
