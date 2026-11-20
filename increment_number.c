#include <basicgol.h>

/* A C-Program that Increments a Number */

#include <unistd.h> // This Header is used so we can gain access to the sleep() Function

INICIO
    INTEIRO num = 0;       // This is the Number that will be incremented.
    INTEIRO increment = 1; // This is what we'll be using to increment(add) onto num.

    // While num's Value is less than 100, we'll increment the Value of num by 1 every second.
    ENQUANTO num < 100 FACA
        sleep(1);            // Wait 1 second each time, num has it's Value incremented
        num += increment;    // Increment num
        ESCREVA_FMT("%d\n", num); // Print the current Value of num
    FIM_ENQUANTO

    RETORNE 0;
FIM
