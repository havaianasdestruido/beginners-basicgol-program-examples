#include <basicgol.h>

REGISTRO(node)
    INTEIRO data;
    struct node *next;
FIM_REGISTRO(node);
typedef node NODE;

// NODE head = NULL;

NODE tail = {0};
NODE head = {0};
NODE *first = &head, *second = &tail;

INICIO
    (*first).data = 5;
    (*first).next = second;

    ESCREVA_FMT("%d", (*first).data);
FIM
