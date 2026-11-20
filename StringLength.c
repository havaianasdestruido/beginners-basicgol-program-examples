#include <basicgol.h>

// Implementation of the strlen function (for standard C strings)

FUNCAO INTEIRO stringLength(CARACTERE *word) {
    INTEIRO count = 0;

    // Increment our counter until NULL TERMINATOR is found
    ENQUANTO word[count] != '\0' FACA
        count++;
    FIM_ENQUANTO
    RETORNE (count);
}

INICIO
    TEXTO_FIXO(word, 100);

    // Gets single word as input
    ESCREVA("Please enter a word to get its length (< 100 characters): ");
    AFIRME(scanf("%99s", word) == 1, "Invalid input");

    // Prints output of stringLength()
    ESCREVA_FMT("\"%s\" has a length of %d\n", word, stringLength(word));

    RETORNE (0);
FIM
