#include <basicgol.h>

// Run these Pattern Program for the required output...tally it with it's respective algorithm.

INICIO
    INTEIRO i, j, k;
    INTEIRO t = 0, temp = 1;
    // Problem:1------------------------------------1
    ESCREVAL("Problem 1");
    PARA (i, 0, 4) {
        PARA (j, 0, 4) {
            ESCREVA("*");
        }
        ESCREVA_LINHA();
    }
    ESCREVAL("\n");
    // Problem:2-------------------------------------2
    ESCREVAL("Problem 2");
    PARA (i, 1, 5) {
        PARA_PASSO (j, 5, i, -1) {
            ESCREVA(" ");
        }
        PARA (k, 1, i) {
            ESCREVA("*");
        }
        ESCREVA_LINHA();
    }
    ESCREVAL("\n");
    // Problem:3--------------------------------------3
    ESCREVAL("Problem 3");
    PARA (i, 0, 4) {
        PARA (j, 0, i) {
            ESCREVA("*");
        }
        ESCREVA_LINHA();
    }
    ESCREVAL("\n");
    // Problem:4-------------------------------------4
    ESCREVAL("Problem 4");
    PARA_PASSO (i, 5, 1, -1) {
        PARA_PASSO (k, temp, 0, -1) {
            ESCREVA(" ");
        }
        PARA_PASSO (j, i, 1, -1) {
            ESCREVA("*");
        }
        temp = temp + 1;
        ESCREVA_LINHA();
    }
    ESCREVAL("\n");
    // Problem:5--------------------------------------5
    ESCREVAL("Problem 5");
    PARA_PASSO (i, 5, 1, -1) {
        PARA (j, 1, i) {
            ESCREVA("*");
        }
        ESCREVA_LINHA();
    }
    ESCREVAL("\n");
    // Problem:6--------------------------------------6
    ESCREVAL("Problem 6");
    PARA (i, 1, 5) {
        ESCREVA(" ");
        PARA (k, t, 4) {
            ESCREVA(" ");
        }
        PARA (j, 0, i - 1) {
            ESCREVA(" * ");
            t = t + 1;
        }
        ESCREVA_LINHA();
    }
FIM
