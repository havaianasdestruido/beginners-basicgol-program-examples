#include <basicgol.h>
#include <pthread.h>

pthread_t tids[3];                                 // creating three threads using pthread library
INTEIRO numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // decleration of numbers array with 10 elements
INTEIRO num[2] = {0, 0};                               // decleration of num array with 2 elements

// dividing firt five numbers into one array
FUNCAO VAZIO *first5(VAZIO *arg) {
    INTEIRO ans = 0;
    INTEIRO i;
    PARA (i, 0, 4) {
        ans += numbers[i];
    }
    ESCREVA_FMT("%d\n", ans);
    num[0] = ans;
    RETORNE NULL;
}

// Dividing second five numbers into another array
FUNCAO VAZIO *second5(VAZIO *arg) {
    INTEIRO ans = 0;
    INTEIRO i;
    PARA (i, 5, 9) {
        ans += numbers[i];
    }
    ESCREVA_FMT("%d\n", ans);
    num[1] = ans;
    RETORNE NULL;
}

// funtion to calculate sum
FUNCAO VAZIO *sum(VAZIO *arg) {
    pthread_join(tids[0], NULL);
    pthread_join(tids[1], NULL);
    INTEIRO ans = num[0] + num[1];
    ESCREVA_FMT("%d\n", ans);
    RETORNE NULL;
}

INICIO
    pthread_create(&tids[0], NULL, first5,
                   (VAZIO *)NULL); // creating one thread to calculate sum of first five numbers
    pthread_create(&tids[1], NULL, second5,
                   (VAZIO *)NULL); // creating second thread to calculate sum of last five numbers
    pthread_create(&tids[2], NULL, sum,
                   (VAZIO *)NULL); // creating another thread to to take sum of the above
    pthread_join(tids[2], NULL);  // thread 3 will wait until thread 1 and 2 finish executing
    ESCREVAL("Main Ended");

    RETORNE 0;
FIM
