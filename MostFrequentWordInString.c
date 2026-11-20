#include <basicgol.h>

INICIO
    ESCREVAL("Value of inputs in your array?");
    INTEIRO arraysize;
    SE NAO LEIA_OK(arraysize) OU arraysize < 1 OU arraysize > 1000 ENTAO
        RETORNE 1;
    FIM_SE

    ESCREVAL("Input array elements:");

    CARACTERE array[arraysize][100];

    INTEIRO i, j;
    PARA (i, 0, arraysize - 1) {
        SE scanf("%99s", array[i]) != 1 ENTAO
            RETORNE 1;
        FIM_SE
    }

    INTEIRO most_occur = 1;

    PARA (i, 0, arraysize - 2) {
        INTEIRO times_occur = 1;

        PARA (j, i + 1, arraysize - 1) {
            SE TEXTOS_IGUAIS(array[i], array[j]) ENTAO
                times_occur = times_occur + 1;
            FIM_SE
        }

        SE times_occur > most_occur ENTAO
            most_occur = times_occur;
        FIM_SE
    }

    SE most_occur > 1 ENTAO
        ESCREVA("Most occuring: ");
        PARA (i, 0, arraysize - 2) {
            INTEIRO times_occur = 1;

            PARA (j, i + 1, arraysize - 1) {
                SE TEXTOS_IGUAIS(array[i], array[j]) ENTAO
                    times_occur = times_occur + 1;
                FIM_SE
            }

            SE times_occur == most_occur ENTAO
                ESCREVA_FMT("%s ", array[i]);
            FIM_SE
        }
    SENAO
        ESCREVA("No specific array elements are repeating.");
    FIM_SE

    RETORNE 0;
FIM
