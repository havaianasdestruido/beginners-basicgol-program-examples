#include <basicgol.h>

REGISTRO(node)
    INTEIRO data;
    struct node *link;
FIM_REGISTRO(node);
node *top = NULL;
PROCEDIMENTO push(INTEIRO x) {

    node *new;
    new = (node *)malloc(TAMANHO_DE(node));
    new->data = x;
    new->link = top;
    top = new;
}
PROCEDIMENTO display(VAZIO) {

    node *temp;
    temp = top;

    SE top == NULL ENTAO
        ESCREVA("Underflow");
    SENAO
        ENQUANTO temp != NULL FACA

            ESCREVA_FMT("%d", temp->data);
            ESCREVA_LINHA();
            temp = temp->link;
        FIM_ENQUANTO
    FIM_SE
}
PROCEDIMENTO pop(VAZIO) {

    node *temp;

    SE top == NULL ENTAO
        ESCREVA("No element to deletes ");
    SENAO
        temp = top;
        ESCREVA_FMT("Popped element is %d\t", temp->data);
        top = top->link;
        free(temp);
    FIM_SE
}

INICIO
    INTEIRO x;
    INTEIRO ch;
    REPITA
        ESCREVA("\t1.Push\t2.pop\t3.display\t4.exit\t");
        SE NAO LEIA_OK(ch) ENTAO
            ERRO("Invalid input");
        FIM_SE
        ESCOLHA(ch)
        CASO 1:
            ESCREVA("	Enter element\t");
            SE NAO LEIA_OK(x) ENTAO
                ERRO("Invalid input");
            FIM_SE
            push(x);
            PARE;
        CASO 2:
            pop();
            PARE;
        CASO 3:
            display();
            PARE;
        CASO 4:
            exit(0);
        FIM_ESCOLHA
    ATE_QUE(NAO (ch != 0));
FIM
