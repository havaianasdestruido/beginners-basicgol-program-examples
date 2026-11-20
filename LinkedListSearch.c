#include <basicgol.h>

/* The program demonstrates a basic linked list implemented using records */

REGISTRO(Node)
    INTEIRO data;
    struct Node *next;
FIM_REGISTRO(Node);

REGISTRO(LinkedList)
    Node *head;
    Node *tail;
FIM_REGISTRO(LinkedList);

PROCEDIMENTO addNode(LinkedList *list, Node *node) {
    SE list->head == NULL E list->tail == NULL ENTAO // For the first node only
        list->tail = node;
        list->head = node;
    SENAO
        list->tail->next = node;
        list->tail = node;
    FIM_SE
}

PROCEDIMENTO display(LinkedList *list) {
    Node *ptr = list->head;

    ENQUANTO ptr != NULL FACA // Loop to traverse the list
        ESCREVA_FMT("%d  ", ptr->data);
        ptr = ptr->next;
    FIM_ENQUANTO
}

PROCEDIMENTO search(LinkedList *list, INTEIRO value) {
    Node *ptr = list->head;

    ENQUANTO ptr != NULL FACA
        SE value == ptr->data ENTAO
            ESCREVAL("Value exists in the list");
            PARE;
        FIM_SE
        ptr = ptr->next;
    FIM_ENQUANTO
    SE ptr == NULL ENTAO
        ESCREVAL("Value does not exist in the list");
    FIM_SE
}

INICIO
    LinkedList example_list = {0};
    Node nodes[9] = {0};

    INTEIRO arr[] = {5, 8, -2, 66, 78, 21, 90, 0, 2};

    INTEIRO i;
    PARA (i, 0, 8) {
        Node *temp_node = &nodes[i];
        temp_node->data = arr[i];
        addNode(&example_list, temp_node);
    }

    search(&example_list, 78);
    search(&example_list, 9);

    display(&example_list);

    RETORNE 0;
FIM
