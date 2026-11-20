#include <basicgol.h>

REGISTRO(Node) // node structure for polynomial
    INTEIRO coeff;
    INTEIRO exp;                      // exponent
    struct Node *next;            // pointing to next node
FIM_REGISTRO(Node);
Node *poly = NULL;                   // type pointer polynomial
PROCEDIMENTO create(VAZIO) {               // creating  polyno mial
    Node *t, *last = NULL; // temporary pointer, last pointer
    INTEIRO num, i;
    ESCREVA("Enter number of terms");
    SE NAO LEIA_OK(num) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVAL("Enter each term with coeff and exp");
    PARA (i, 0, num - 1) {                         // loop
        t = (Node *)malloc(TAMANHO_DE(Node)); // create new node
        AFIRME(LEIA_OK(t->coeff) E LEIA_OK(t->exp), "Invalid input");              // reading  2 data
        t->next = NULL;                                 // linking each node into linklist
        SE poly == NULL ENTAO                             // first node check
            poly = last = t;
        SENAO
            last->next = t;
            last = t;
        FIM_SE
    }
}

PROCEDIMENTO Display(Node *p) {
    ENQUANTO p FACA
        ESCREVA_FMT("%dx%d +", p->coeff, p->exp); // printing node
        p = p->next;                         // shifting node
    FIM_ENQUANTO
    ESCREVA_LINHA();
}

FUNCAO INTEIRO_LONGO Eval(Node *p, INTEIRO x) { // evalution
    INTEIRO_LONGO val = 0;
    ENQUANTO p FACA // scanning through polynomial
        val += p->coeff * POTENCIA(x, p->exp);
        p = p->next;
    FIM_ENQUANTO
    RETORNE val;
}

// TODO insert
// TODO delete

INICIO
    create();
    Display(poly);
    ESCREVA_FMT("%ld\n", Eval(poly, 1));
    RETORNE 0;
FIM
