#include <basicgol.h>

/*Write a C program that uses functions to perform the following:
a) Create a singly linked list of integers
b) Delete a given integer from the above linked list
c) Display the contents of the above list after deletion
CODE:-*/
REGISTRO(node)
    INTEIRO data;
    struct node *next;
FIM_REGISTRO(node);
node *head, *tail = NULL;
PROCEDIMENTO addNode(INTEIRO data) {
    node *newNode = (node *)malloc(TAMANHO_DE(node));
    newNode->data = data;
    newNode->next = NULL;
    SE head == NULL ENTAO
        head = newNode;
        tail = newNode;
    SENAO
        tail->next = newNode;
        tail = newNode;
    FIM_SE
}
PROCEDIMENTO display(VAZIO) {
    node *current = head; // the node current will point to head
    SE head == NULL ENTAO
        ESCREVAL("List is empty");
        RETORNE;
    FIM_SE
    ESCREVAL("\nNodes of singly linked list: ");
    ENQUANTO current != NULL FACA
        ESCREVA_FMT("%d ", current->data); // each node is printed
        current = current->next;
    FIM_ENQUANTO
    ESCREVA_LINHA();
}
PROCEDIMENTO delete(VAZIO) {
    node *ptr, *ptr1 = NULL;
    INTEIRO item, i = 0, flag, loc, j;
    ptr = head;
    SE ptr == NULL ENTAO
        ESCREVAL("\nEmpty List");
        RETORNE;
    SENAO
        ESCREVAL("\nWhich integer do you want to delete?");
        SE NAO LEIA_OK(item) ENTAO
            ERRO("Invalid input");
        FIM_SE
        ENQUANTO ptr != NULL FACA
            SE ptr->data == item ENTAO
                ESCREVA_FMT("Integer found at node %d ", i + 1);
                flag = 0;
                loc = i;
                PARE;
            SENAO
                flag = 1;
            FIM_SE
            i++;
            ptr = ptr->next;
        FIM_ENQUANTO
        SE flag == 1 ENTAO
            ESCREVAL("Integer not found!");
            RETORNE;
        FIM_SE
    FIM_SE
    ptr = head;
    PARA (j, 0, loc - 1) {
        ptr1 = ptr;
        ptr = ptr->next;
        SE ptr == NULL ENTAO
            ESCREVA("\nDeletion is not possible!");
            RETORNE;
        FIM_SE
    }
    SE ptr1 == NULL ENTAO
        head = ptr->next;
    SENAO
        ptr1->next = ptr->next;
    FIM_SE
    SE ptr == tail ENTAO
        tail = ptr1;
    FIM_SE
    free(ptr);
    ESCREVA_FMT("\nDeleted node %d \n", loc + 1);
}
INICIO
    INTEIRO n, data;
    ESCREVAL("How many nodes do you want to create?");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE
    INTEIRO i;
    PARA (i, 0, n - 1) {
        ESCREVA_FMT("Integer node %d data : ", (i + 1));
        SE NAO LEIA_OK(data) ENTAO
            ERRO("Invalid input");
        FIM_SE
        addNode(data);
    }
    display();
    delete();
    display();
FIM
/*OUTPUT:-
How many nodes do you want to create?
4
Integer node 1 data : 13
Integer node 2 data : 16
Integer node 3 data : 19
Integer node 4 data : 21
Nodes of singly linked list:
13 16 19 21
Which integer do you want to delete?
19
Integer found at node 3
Deleted node 3
Nodes of singly linked list:
13 16 21*/
