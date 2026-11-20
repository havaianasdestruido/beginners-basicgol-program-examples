#include <basicgol.h>
#include <time.h>

#define MAX 10
#define A "P"
#define B "Q"
FUNCAO INTEIRO getRandom(INTEIRO low, INTEIRO high);
FUNCAO INTEIRO getValidInteger(INTEIRO low, INTEIRO high);
FUNCAO NATURAL playerRoll(INTEIRO low, INTEIRO high);

PROCEDIMENTO seed(VAZIO) {
    INICIA_SORTEIO(time(NULL));
}
PROCEDIMENTO space(INTEIRO size) // create space
{
    ESCREVA("     ");
}
FUNCAO CARACTERE getDisplayType(NATURAL index, NATURAL playerPosition, CARACTERE playerName) {
    SE playerName != '#' E index == playerPosition ENTAO
        RETORNE playerName;
    SENAO_SE index == 0 ENTAO
        RETORNE 'C';
    SENAO_SE index MOD 7 == 0 E (index MOD 3 != 0 OU index MOD 5 == 0) ENTAO
        RETORNE 'G';
    SENAO_SE index MOD 5 == 0 ENTAO
        RETORNE 'L';
    SENAO_SE index MOD 3 == 0 ENTAO
        RETORNE 'W';
    SENAO
        RETORNE ' ';
    FIM_SE
}
PROCEDIMENTO firstLine(INTEIRO size) // create the upper line of the square  for the first and last line
{
    INTEIRO i;

    PARA (i, 0, size - 1) {
        ESCREVA(" ___ ");
    }
    ESCREVA_LINHA();
}

PROCEDIMENTO secondLine(INTEIRO size, INTEIRO i, NATURAL playerPosition,
                CARACTERE playerName) // create the inside and return the type for the first line
{
    INTEIRO x, j;
    PARA (j, 0, size - 1) {
        x = j;
        ESCREVA_FMT("| %c |", getDisplayType(x, playerPosition, playerName));
    }
    ESCREVA_LINHA();
}

PROCEDIMENTO secondLine2nd(INTEIRO size, INTEIRO i, NATURAL playerPosition,
                   CARACTERE playerName) { // create the inside and return the type for the last line
    INTEIRO x, y, z;
    y = 3 * (size - 1);
    ESCREVA_FMT("| %c |", getDisplayType(y, playerPosition, playerName));
    PARA (i, 0, size - 3) {
        z = 2 * (size - 1) + ((size - 2) - i);
        ESCREVA_FMT("| %c |", getDisplayType(z, playerPosition, playerName));
    }
    x = size + i;
    ESCREVA_FMT("| %c |", getDisplayType(x, playerPosition, playerName));

    ESCREVA_LINHA();
}

PROCEDIMENTO thirdLine(INTEIRO size) // create lower line for the first and last line
{
    INTEIRO i;

    PARA (i, 0, size - 1) {
        ESCREVA("|___|");
    }
    ESCREVA_LINHA();
}
PROCEDIMENTO upperrow(INTEIRO size) // create the upper line for the square of the row
{
    INTEIRO i;
    ESCREVA(" ___");
    PARA (i, 0, size - 3) {
        space(size);
    }
    ESCREVA("  ___");
    ESCREVA_LINHA();
}

PROCEDIMENTO lowerrow(INTEIRO size) // create the lower line for the square of the row
{
    INTEIRO i;
    ESCREVA("|___|");
    PARA (i, 0, size - 3) {
        space(size);
    }

    ESCREVA("|___|");
    ESCREVA_LINHA();
}

PROCEDIMENTO middlerow(INTEIRO size, INTEIRO i, NATURAL playerPosition,
               CARACTERE playerName) // create the inside and return the type for the square of the row
{
    INTEIRO q, b, p;
    b = i;
    q = 3 * (size - 1) + ((size - 1) - i);
    ESCREVA_FMT("| %c |", getDisplayType(q, playerPosition, playerName));
    PARA (b, 0, size - 3) {
        space(size);
    }
    p = size - 1 + i;
    ESCREVA_FMT("| %c |", getDisplayType(p, playerPosition, playerName));
    ESCREVA_LINHA();
}

FUNCAO CARACTERE getValidCharacter(VAZIO) // make sure the character input is right//
{
    CARACTERE choice;
    REPITA
        SE NAO LEIA_OK(choice) ENTAO
            ERRO("Invalid input");
        FIM_SE
        getchar();
        SE (choice != 'p' E choice != 'q' E choice != 'r' E choice != 's') ENTAO
            ESCREVA("Invalid input, please try again:  ");
        FIM_SE
    ATE_QUE(NAO (choice != 'p' E choice != 'q' E choice != 'r' E choice != 's'));
    RETORNE choice;
}

FUNCAO INTEIRO getValidInteger(INTEIRO low, INTEIRO high) // validate the input number//
{
    INTEIRO choice;
    REPITA
        SE NAO LEIA_OK(choice) ENTAO
            ERRO("Invalid input");
        FIM_SE
        SE choice < low OU choice > high ENTAO
            ESCREVA("Invalid input, please try again: ");
        FIM_SE

    ATE_QUE(NAO (choice < low OU choice > high));
    RETORNE choice;
}

FUNCAO INTEIRO getRandom(INTEIRO low, INTEIRO high) // get a rando number
{
    INTEIRO a;
    a = SORTEIA(high - low) + low;

    RETORNE a;
}

FUNCAO NATURAL playerRoll(INTEIRO low, INTEIRO high) // prompt and output the roll
{
    INTEIRO b, c, d, e, choice;
    REPITA
        ESCREVA("\nyour turn, how many dice will you roll : ");
        SE NAO LEIA_OK(choice) ENTAO
            ERRO("Invalid input");
        FIM_SE
        SE choice == 1 ENTAO
            b = getRandom(low, high);

            ESCREVA_FMT("You rolled %d\n", b);
            ESCREVA_FMT("Advancing %d space\n", b);
            RETORNE b;
        SENAO_SE choice == 2 ENTAO
            c = getRandom(low, high);

            d = getRandom(low, high);

            b = c + d;
            ESCREVA_FMT("You rolled %d %d\n ", c, d);
            ESCREVA_FMT("Advancing %d space\n", b);
            RETORNE b;
        SENAO_SE choice == 3 ENTAO
            c = getRandom(low, high);
            d = getRandom(low, high);
            e = getRandom(low, high);
            b = c + d + e;
            ESCREVA_FMT("You rolled %d %d %d\n ", c, d, e);
            ESCREVA_FMT("Advancing %d space\n", b);
            RETORNE b;
        SENAO
            ESCREVA("Try again,");
        FIM_SE
    ATE_QUE(FALSO);
}

PROCEDIMENTO winPrize(INTEIRO playerPrizes[], NATURAL *prizeCount) // do the winprize function
{
    NATURAL prize;
    prize = getRandom(10, 100);
    ESCREVA_FMT("%d\n", prize);
    SE *prizeCount < MAX ENTAO
        playerPrizes[*prizeCount] = prize;
        ESCREVA_FMT("you won a prize of %d\n", prize);
        *prizeCount = *prizeCount + 1;
    SENAO
        ESCREVAL("Your inventory is full ");
    FIM_SE
}
PROCEDIMENTO winGrandPrize(INTEIRO playerPrizes[], NATURAL *prizeCount) // do the win grand prize function
{
    NATURAL prize;
    prize = getRandom(100, 200);
    ESCREVA_FMT("%d\n", prize);
    SE *prizeCount < MAX ENTAO
        playerPrizes[*prizeCount] = prize;
        ESCREVA_FMT("you won a grand prize of %d\n", prize);
        *prizeCount = *prizeCount + 1;
    SENAO
        ESCREVA("Your inventory is full ");
    FIM_SE
}
PROCEDIMENTO loseItem(INTEIRO playerPrizes[], NATURAL *prizeCount) {
    SE *prizeCount == 0 ENTAO
        ESCREVAL("Nothing happened,Move On");
    SENAO
        INTEIRO lost = getRandom(0, *prizeCount);
        --*prizeCount;
        playerPrizes[lost] = playerPrizes[*prizeCount];
        ESCREVA("you lost the prize");
    FIM_SE
}

PROCEDIMENTO initPlayer(INTEIRO *playerScore, INTEIRO playerPrizes[], NATURAL *prizeCount, CARACTERE *playerName,
                INTEIRO *playerPosition) // do the initplayer function, set everything to 0
{
    INTEIRO i;
    PARA (i, 0, MAX - 1) {
        playerPrizes[i] = 0;
    }

    *playerScore = 0;
    *prizeCount = 0;
    *playerPosition = 0;
    ESCREVA("Enter Player ID:  ");
    AFIRME(LEIA_OK(*playerName), "Invalid player ID");
}

PROCEDIMENTO displayBoard(INTEIRO size, NATURAL playerPosition,
                  CARACTERE playerName) // display the boardgame
{

    INTEIRO k, size1, loop;
    REAL_CURTO loop2, playerPosition1, size2;

    playerPosition1 = (REAL_CURTO)playerPosition;
    size1 = (4 * (size - 1));

    size2 = (REAL_CURTO)size1;

    loop2 = playerPosition1 / size2;

    loop = trunc(loop2);

    k = playerPosition - (4 * (size - 1)) * loop;

    playerPosition = k;

    {
        INTEIRO i = 0;
        SE size == 1 ENTAO
            ESCREVAL("  ___ ");
            ESCREVAL(" | ? | ");
            ESCREVA(" |___|");
            ESCREVA_LINHA();
        SENAO

            PARA (i, 0, size - 2) {

                SE i == 0 ENTAO
                    firstLine(size);
                    secondLine(size, i, playerPosition, playerName);
                    thirdLine(size);
                FIM_SE
            }
            PARA (i, 1, size - 2) {
                upperrow(size);
                middlerow(size, i, playerPosition, playerName);
                lowerrow(size);
            }
            PARA (i, size - 2, size - 2) {
                firstLine(size);
                secondLine2nd(size, i, playerPosition, playerName);
                thirdLine(size);
            }
        FIM_SE
    }
}

FUNCAO INTEIRO checkout(INTEIRO *playerScore, INTEIRO playerPrizes[], NATURAL *prizeCount) // do the checkout
{
    INTEIRO i;
    PARA (i, 0, (INTEIRO)*prizeCount - 1) {
        *playerScore += playerPrizes[i];
    }
    *prizeCount = 0;
    ESCREVA_FMT("You check out for $%d score is now: $%d \n", *playerScore, *playerScore);
    SE *playerScore >= 200 ENTAO
        RETORNE 1;
    SENAO
        RETORNE 0;
    FIM_SE
}

PROCEDIMENTO playGame(INTEIRO size, INTEIRO *playerScore, INTEIRO playerPrizes[], NATURAL *prizeCount,
              CARACTERE *playerName, INTEIRO *playerPosition) // play the game
{
    ESCREVA_FMT("playerName in playgame %c\n", *playerName);

    INTEIRO i, l = 1;
    ENQUANTO l FACA
        displayBoard(size, *playerPosition, *playerName);

        ESCREVA_FMT("Score: %d   inventory (%d items): ", *playerScore, *prizeCount);
        PARA (i, 0, (INTEIRO)*prizeCount - 1) {
            ESCREVA_FMT("%d, ", playerPrizes[i]);
        }

        *playerPosition = *playerPosition + playerRoll(1, 7);
        *playerPosition %= 4 * (size - 1);

        SE getDisplayType(*playerPosition, *playerPosition, '#') == 'G' ENTAO
            winGrandPrize(playerPrizes, prizeCount);
        SENAO_SE getDisplayType(*playerPosition, *playerPosition, '#') == 'W' ENTAO

            winPrize(playerPrizes, prizeCount);
        SENAO_SE getDisplayType(*playerPosition, *playerPosition, '#') == 'L' ENTAO

            loseItem(playerPrizes, prizeCount);
        SENAO_SE getDisplayType(*playerPosition, *playerPosition, '#') == 'C' ENTAO

            SE checkout(playerScore, playerPrizes, prizeCount) == 1 ENTAO
                ESCREVAL("You Win");
                l = 0;
            FIM_SE
        SENAO
            ESCREVAL("nothing happens, go again.");
        FIM_SE
    FIM_ENQUANTO
}

INICIO
    seed();
    INTEIRO l = 1;
    CARACTERE choice;
    INTEIRO playerScore = 0;
    VETOR(INTEIRO, playerPrizes, MAX);
    NATURAL prizeCount;
    CARACTERE playerName = '-';
    INTEIRO size;
    INTEIRO playerPosition;
    ESCREVAL("Welcome to CHECKOUT");
    ENQUANTO l FACA
        ESCREVAL("Main Menu");
        ESCREVAL("p-(p)lay q-(q)uit r-inst(r)uctions s-HI(s)core: ");
        choice = getValidCharacter();
        SE choice == 'p' ENTAO
            ESCREVAL("Number of players is 1");
            initPlayer(&playerScore, playerPrizes, &prizeCount, &playerName, &playerPosition);

            ESCREVA("Enter board size: ");
            SE NAO LEIA_OK(size) OU size < 2 OU size > 100 ENTAO
                ERRO("Invalid input");
            FIM_SE

            playGame(size, &playerScore, playerPrizes, &prizeCount, &playerName, &playerPosition);

            getchar();
        FIM_SE
        SE choice == 's' ENTAO
            ESCREVAL("--");
            ESCREVA("  \\ ");
            ESCREVAL("_______");
            ESCREVAL("    \\++++++|");
            ESCREVAL("     \\=====|");
            ESCREVAL("     0---  0");
            ESCREVA_FMT("HI SCORE: %d Player Name: %c \n", playerScore, playerName);
        FIM_SE
        SE choice == 'q' ENTAO
            ESCREVA("dont go, I will miss you :(");
            l = 0;
            getchar();
        FIM_SE
    FIM_ENQUANTO
FIM
