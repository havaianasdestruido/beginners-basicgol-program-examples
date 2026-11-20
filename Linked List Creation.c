#include <basicgol.h>

INTEIRO n;
REGISTRO(node)
    INTEIRO data;
    struct node *info;
FIM_REGISTRO(node);
node *start;
PROCEDIMENTO create(INTEIRO n) {
    INTEIRO i;
    node *temp, *p, *newnode;
    p = (node *)malloc(TAMANHO_DE(node));
    start = p;
    ESCREVAL("enter the data");
    AFIRME(LEIA_OK(p->data), "Invalid input");
    p->info = NULL;
    temp = start;
    PARA (i, 2, n) {
        newnode = (node *)malloc(TAMANHO_DE(node));
        ESCREVAL("enter the data");
        AFIRME(LEIA_OK(newnode->data), "Invalid input");
        newnode->info = NULL;
        temp->info = newnode;
        temp = temp->info;
    }
}
PROCEDIMENTO display(VAZIO) {
    node *temp;
    temp = start;
    ENQUANTO temp != NULL FACA
        ESCREVA_FMT("%d", temp->data);
        temp = temp->info;
    FIM_ENQUANTO
}
INICIO
    ESCREVA("enter the no of node");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE
    create(n);
    ESCREVA_LINHA();
    display();
    RETORNE 0;
FIM
