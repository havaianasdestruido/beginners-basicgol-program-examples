#include <basicgol.h>

//  Number guessing Game

INICIO
    INTEIRO secretNumber = 6;
    INTEIRO guess = 0;
    INTEIRO guessCount = 0;
    INTEIRO guessLimit = 5;
    INTEIRO outOfGuesses = 0;

    ENQUANTO guess != secretNumber E outOfGuesses == 0 FACA
        SE guessCount < guessLimit ENTAO
            ESCREVA("Enter a number :");
            SE NAO LEIA_OK(guess) ENTAO
                ERRO("Invalid input");
            FIM_SE
            guessCount++;
        SENAO
            outOfGuesses = 1;
        FIM_SE
    FIM_ENQUANTO
    SE outOfGuesses == 1 ENTAO
        ESCREVA("\n Out Of Guesses ");
    SENAO
        ESCREVA("\n You won!");
    FIM_SE
    RETORNE 0;
FIM
