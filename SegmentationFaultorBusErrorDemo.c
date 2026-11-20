#include <basicgol.h>

// A string literal is not writable. Rotate the cards in a mutable array instead.
INICIO
    CARACTERE cards[] = "JQK";

    CARACTERE first = cards[0];
    cards[0] = cards[1];
    cards[1] = cards[2];
    cards[2] = first;

    ESCREVAL(cards);

    RETORNE 0;
FIM
