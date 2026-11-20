#include <basicgol.h>

/*
 * This program is an example of using a background thread to sort a fixed size array
 * asynchronously. The array itself can be modified by adding new elements. The array
 * acts like a circular buffer when we cross the size of the array i.e the index goes like this:
 * 0,1,2,3,4,0,1,2,3,4,.....(For an array of size 5).
 * This program demonstrates usage of pthreads, mutexes, qsort(in built C sorting function).
 * The array used is an array of structures.
 */

#include <pthread.h>
#include <unistd.h>

#define RECT_ARRAY_SIZE 5

/*
 * Rectangle structure has length and breadth.
 */
REGISTRO(rect)
    INTEIRO length;
    INTEIRO breadth;
FIM_REGISTRO(rect);

/*
 * Array of rectangle structs to be sorted.
 */
rect r[RECT_ARRAY_SIZE];
/*
 * mutex lock to serialize the array of rectangle structs
 */
pthread_mutex_t lock;

/*
 * The comparator to compare the 2 rectangle structures.
 * Comparison is based on area.
 */
FUNCAO INTEIRO area_comp(const VAZIO *r1, const VAZIO *r2) {
    INTEIRO area1, area2;

    rect r1_t = *(const rect *)r1;
    rect r2_t = *(const rect *)r2;

    area1 = r1_t.length * r1_t.breadth;
    area2 = r2_t.length * r2_t.breadth;

    RETORNE (area1 > area2) - (area1 < area2);
}

/*
 * Function of the background pthread.
 * This function sorts the array of rectangle structs
 * every 10 seconds and prints out the output.
 */
FUNCAO VAZIO *sorter(VAZIO *p) {
    ENQUANTO VERDADEIRO FACA
        pthread_mutex_lock(&lock);
        qsort(r, RECT_ARRAY_SIZE, TAMANHO_DE(rect), area_comp);
        ESCREVAL("The rect array is");
        INTEIRO i;
        PARA (i, 0, RECT_ARRAY_SIZE - 1) {
            ESCREVA_FMT("%d %d\n", r[i].length, r[i].breadth);
        }
        pthread_mutex_unlock(&lock);
        sleep(10);
        ESCREVA_LINHA();
    FIM_ENQUANTO
}

INICIO
    /*
     * Our background thread to sort the array
     * of rectangle structs
     */
    pthread_t thread;
    INTEIRO index = 0;

    /*
     * First initialise the rectangle struct to some values
     */
    r[0].length = 10;
    r[0].breadth = 2;

    r[1].length = 34;
    r[1].breadth = 23;

    r[2].length = 32;
    r[2].breadth = 3;

    r[3].length = 2;
    r[3].breadth = 45;

    r[4].length = 2;
    r[4].breadth = 12;

    /*
     * Init the mutexes and the pthread
     */
    pthread_mutex_init(&lock, NULL);
    pthread_create(&thread, NULL, &sorter, (VAZIO *)NULL);

    /*
     * The main thread allows the user to input data i.e length
     * and breadth of the users rectangle. The length and breadth inputted
     * are stored in a structure which is placed into the rectangle struct array.
     * The rectangle struct array is of fixed size. The size is defined by
     * RECT_ARRAY_SIZE. The array acts like a circular buffer.
     */
    ENQUANTO VERDADEIRO FACA
        rect temp_rect;
        INTEIRO length, breadth;

        SE NAO LEIA_OK(length) OU NAO LEIA_OK(breadth) ENTAO
            RETORNE 0;
        FIM_SE

        temp_rect.length = length;
        temp_rect.breadth = breadth;

        pthread_mutex_lock(&lock);
        r[(index++) MOD RECT_ARRAY_SIZE] = temp_rect;
        pthread_mutex_unlock(&lock);
    FIM_ENQUANTO

    RETORNE 0;
FIM
