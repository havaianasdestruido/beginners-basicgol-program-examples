#include <basicgol.h>

// The & operator is used to get the address.
// But in case of array the name of array itself returns its address.
// In array the elements occupy consecutive address,
// therefore incrementing it by 1 each time would give
// the address of next element.

INICIO
    INTEIRO a[100], i, n, *add;

    ESCREVA("enter the size: ");
    SE NAO LEIA_OK(n) OU n < 0 OU n > 100 ENTAO
        ERRO("Invalid input");
    FIM_SE

    ESCREVAL("enter the numbers: ");
    PARA (i, 0, n - 1) {
        SE NAO LEIA_OK(a[i]) ENTAO
            ERRO("Invalid input");
        FIM_SE
    }

    PARA (i, 0, n - 1) {
        add = a + i;
        // add = &a[i]; would also return the same thing.
        ESCREVA_FMT("The address of element %d is %p.\n", *add, (VAZIO *)add);

        // Notice: As size of int is 4-byte the differnce in address
        // of cosecutive elements is 4.
    }
FIM
