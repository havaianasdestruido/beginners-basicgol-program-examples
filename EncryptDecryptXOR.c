#include <basicgol.h>

CARACTERE XORkey[12] = {'F', 'P', 'k', 'k', 'Y', 'P', 'l', 'p', 'V', 'P', 'L', 'z'};
PROCEDIMENTO encryptDecrypt(CARACTERE inputString[]);

INICIO
    CARACTERE sampleString[] = " This contains highly sensitive message\n"
                          " coordinates : 23.445, 34.443\n"
                          " All further messages MUST be send via\n"
                          " XOR encryption only - Long Live Revolution!!\n";

    ESCREVAL("\nEncrypted String :");
    encryptDecrypt(sampleString);

    ESCREVAL("\nDecyrpted String :");
    encryptDecrypt(sampleString);

    RETORNE 0;
FIM

PROCEDIMENTO encryptDecrypt(CARACTERE inputString[]) {
    INTEIRO i = 0;

    INTEIRO len = TAMANHO_TEXTO(inputString);
    PARA (i, 0, len - 1) {
        inputString[i] = inputString[i] ^ XORkey[i MOD (TAMANHO_DE(XORkey) / TAMANHO_DE(CARACTERE))];
        ESCREVA_FMT("%c", inputString[i]);
    }
}
