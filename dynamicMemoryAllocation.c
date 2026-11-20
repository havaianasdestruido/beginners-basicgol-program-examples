#include <basicgol.h>

#define SIZE 0x100
INICIO
    CARACTERE *ptr = malloc(SIZE);
    AFIRME(ptr != NULL, "Allocation failed");
    snprintf(ptr, SIZE, "data : %s ", "hello world");
    ESCREVA_FMT("%s", ptr);
    free(ptr);
FIM
