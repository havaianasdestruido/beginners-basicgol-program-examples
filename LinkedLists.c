#include <basicgol.h>

// Menu-driven singly linked list.

REGISTRO(node)
    INTEIRO info;
    struct node *link;
FIM_REGISTRO(node);

node *head = NULL, *head2 = NULL;

PROCEDIMENTO Binsert(INTEIRO);
PROCEDIMENTO Einsert(INTEIRO, node *);
PROCEDIMENTO Minsert(INTEIRO);
PROCEDIMENTO Display(node *);
PROCEDIMENTO Bdelete(VAZIO);
PROCEDIMENTO Edelete(VAZIO);
PROCEDIMENTO Mdelete(INTEIRO);
PROCEDIMENTO DeleteLL(node *);
PROCEDIMENTO copy(VAZIO);
PROCEDIMENTO reverse(VAZIO);

INICIO
    ENQUANTO VERDADEIRO FACA
        INTEIRO opt, ele;
        ESCREVAL("\nEnter what you wanna "
                 "do:\n1.Binsert\n2.Einsert\n3.Minsert\n4.Display\n5.Bdelete\n6.Edelete\n7.Mdelete\n8."
                 "Copy\n9.DeleteLL\n10.Reverse\n11.Quit");
        SE NAO LEIA_OK(opt) ENTAO
            ERRO("Invalid input");
        FIM_SE
        ESCOLHA(opt)
        CASO 1: {
            ESCREVA("\nEnter the element");
            SE NAO LEIA_OK(ele) ENTAO
                ERRO("Invalid input");
            FIM_SE
            Binsert(ele);
            PARE;
        }
        CASO 2: {
            ESCREVA("\nEnter the element");
            SE NAO LEIA_OK(ele) ENTAO
                ERRO("Invalid input");
            FIM_SE
            Einsert(ele, head);
            PARE;
        }
        CASO 3: {
            ESCREVA("\nEnter the element");
            SE NAO LEIA_OK(ele) ENTAO
                ERRO("Invalid input");
            FIM_SE
            Minsert(ele);
            PARE;
        }
        CASO 4: {
            ESCREVA("\nEnter the LL(1/2)");
            SE NAO LEIA_OK(ele) ENTAO
                ERRO("Invalid input");
            FIM_SE
            SE ele == 1 ENTAO
                Display(head);
            SENAO
                Display(head2);
            FIM_SE
            PARE;
        }
        CASO 5: {
            Bdelete();
            PARE;
        }
        CASO 6: {
            Edelete();
            PARE;
        }
        CASO 7: {
            ESCREVA("\nEnter the element you wanna delete:");
            SE NAO LEIA_OK(ele) ENTAO
                ERRO("Invalid input");
            FIM_SE
            Mdelete(ele);
            PARE;
        }
        CASO 8:
            copy();
            PARE;
        CASO 9:
            DeleteLL(head); head = NULL;
            PARE;
        CASO 10:
            reverse();
            PARE;
        CASO 11:
            DeleteLL(head); DeleteLL(head2);
            RETORNE 0;
        FIM_ESCOLHA
    FIM_ENQUANTO
    RETORNE 0;
FIM

PROCEDIMENTO Binsert(INTEIRO ele) {

    node *temp = (node *)malloc(TAMANHO_DE(node));
    temp->info = ele;
    temp->link = head;
    head = temp;
}

PROCEDIMENTO Einsert(INTEIRO ele, node *temph) {
    node *temp = (node *)malloc(TAMANHO_DE(node));
    temp->info = ele;
    node *p;
    SE temph == NULL ENTAO
        head = temp; temp->link = NULL; RETORNE;
    FIM_SE
    p = temph;
    ENQUANTO p->link != NULL FACA
        p = p->link;
    FIM_ENQUANTO
    temp->link = NULL;
    p->link = temp;
}

PROCEDIMENTO Minsert(INTEIRO ele) {
    SE head == NULL ENTAO
        Binsert(ele);
        RETORNE;
    FIM_SE
    SE head->info > ele ENTAO
        Binsert(ele);
        RETORNE;
    FIM_SE
    node *p, *q, *temp = (node *)malloc(TAMANHO_DE(node));
    temp->info = ele;
    p = head;
    q = head->link;
    ENQUANTO q != NULL FACA

        SE q->info >= ele ENTAO
            p->link = temp;
            temp->link = q;
            RETORNE;
        FIM_SE
        p = p->link;
        q = q->link;
    FIM_ENQUANTO
    p->link = temp;
    temp->link = NULL;
}

PROCEDIMENTO Display(node *temph) {
    node *p = temph;
    ENQUANTO p != NULL FACA
        ESCREVA_FMT("%d->", p->info);
        p = p->link;
    FIM_ENQUANTO
    ESCREVA_LINHA();
}

PROCEDIMENTO Bdelete(VAZIO) {
    SE head == NULL ENTAO
        RETORNE;
    FIM_SE
    node *p = head;
    head = head->link;
    free(p);
}

PROCEDIMENTO Edelete(VAZIO) {
    SE head == NULL OU head->link == NULL ENTAO
        Bdelete(); RETORNE;
    FIM_SE
    node *p, *q;
    p = head;
    ENQUANTO p->link->link != NULL FACA
        p = p->link;
    FIM_ENQUANTO
    q = p->link;
    p->link = NULL;
    free(q);
}

PROCEDIMENTO Mdelete(INTEIRO ele) {
    SE head == NULL ENTAO
        RETORNE;
    FIM_SE
    SE head->info == ele ENTAO
        Bdelete();
        RETORNE;
    FIM_SE
    node *p = head, *q = head->link;
    ENQUANTO q != NULL FACA
        SE q->info == ele ENTAO
            p->link = q->link;
            free(q);
            RETORNE;
        FIM_SE
        p = q;
        q = q->link;
    FIM_ENQUANTO
}

PROCEDIMENTO DeleteLL(node *p) {
    ENQUANTO p != NULL FACA
        node *next = p->link;
        free(p);
        p = next;
    FIM_ENQUANTO
}

PROCEDIMENTO copy(VAZIO) {
    DeleteLL(head2);
    head2 = NULL;
    node **tail = &head2;
    node *p = head;
    ENQUANTO p != NULL FACA
        *tail = malloc(TAMANHO_DE(node));
        AFIRME(*tail != NULL, "Allocation failed");
        (*tail)->info = p->info;
        (*tail)->link = NULL;
        tail = &(*tail)->link;
        p = p->link;
    FIM_ENQUANTO
}

PROCEDIMENTO reverse(VAZIO) {
    node *reversed = NULL;
    ENQUANTO head != NULL FACA
        node *next = head->link;
        head->link = reversed;
        reversed = head;
        head = next;
    FIM_ENQUANTO
    head = reversed;
}
