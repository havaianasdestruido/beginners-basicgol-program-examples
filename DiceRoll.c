#include <basicgol.h>

// Simulate a diceroll with an adjustable number of sides using the rand() function.

#include <time.h>

FUNCAO INTEIRO Diceroll(INTEIRO DiceSides) {
    INICIA_SORTEIO(time(NULL));
    RETORNE 1 + SORTEIA(DiceSides);
}

INICIO
    INTEIRO DiceSides;
    ESCREVAL("Enter the number of sides your die has. ");
    SE NAO LEIA_OK(DiceSides) OU DiceSides <= 0 ENTAO
        ERRO("Invalid input");
    FIM_SE

    INTEIRO Dice = Diceroll(DiceSides);
    ESCREVA_FMT("you rolled a %d \n", Dice);
    RETORNE 0;
FIM
