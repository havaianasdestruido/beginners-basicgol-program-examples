#include <basicgol.h>

#define SIZE 11

REGISTRO(node)
    CARACTERE data;
    struct node *link;
FIM_REGISTRO(node);
typedef node ctype, *LinkStack;

PROCEDIMENTO push(LinkStack *L, CARACTERE elem);
PROCEDIMENTO pop(LinkStack *L);
FUNCAO CARACTERE top(LinkStack L);
PROCEDIMENTO display(LinkStack L);

INICIO
    LinkStack A = NULL;
    INTEIRO i;
    CARACTERE word[SIZE] = {'P', 'R', 'O', 'G', 'R', 'A', 'M', 'M', 'I', 'N', 'G'};
    CARACTERE first;

    PARA (i, 0, SIZE - 1) {
        push(&A, word[i]); /* INSERTING THE CHARACTER IN LINK LIST*/
    }

    ESCREVAL("Example word:");
    display(A);

    ESCREVAL("\n\nAfter popping/deleting the first/top most element:");
    pop(&A);
    display(A);

    first = top(A);
    ESCREVA_FMT("\n\nTop most element in the stack: %c\n", first);

    RETORNE 0;
FIM

/* PUSHING/INSERTING EACH CHARACTER TO THE STACK USING LINKLIST

        NOTE:
        Since this is a stack, I used the First in Last out order and we dont need to traverse,
        thats why the element is interchanged/reversed.
*/

PROCEDIMENTO push(LinkStack *L, CARACTERE elem) {
    LinkStack temp;
    temp = (LinkStack)malloc(TAMANHO_DE(ctype));

    SE temp != NULL ENTAO
        temp->data = elem;
        temp->link = *L;
        *L = temp;
    FIM_SE
}

/* DELETING/REMOVING THE TOP MOST ELEMENT IN THE STACK*/
PROCEDIMENTO pop(LinkStack *L) {
    LinkStack temp;

    temp = *L;
    *L = temp->link;
    free(temp);
}

/* RETURNING THE TOP MOST ELEMENT IN THE STACK*/
FUNCAO CARACTERE top(LinkStack L) {
    CARACTERE elem;
    elem = L->data;

    RETORNE elem;
}

/* FOR DISPLAYING THE ELEMENTS */
PROCEDIMENTO display(LinkStack L) {
    LinkStack trav;

    trav = L;
    ENQUANTO trav != NULL FACA
        ESCREVA_FMT("%c", trav->data);
        trav = trav->link;
    FIM_ENQUANTO
}
