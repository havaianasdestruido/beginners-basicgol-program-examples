#include <basicgol.h>

// Program to find ASCII value
INICIO
    CARACTERE c;
    ESCREVA("Enter a character: ");

    // Reads character input from the user
    SE NAO LEIA_OK(c) ENTAO
        ERRO("Invalid input");
    FIM_SE

    // %d displays the integer value of a character
    // %c displays the actual character
    ESCREVA_FMT("ASCII value of %c = %d", c, c);
    RETORNE 0;
FIM
