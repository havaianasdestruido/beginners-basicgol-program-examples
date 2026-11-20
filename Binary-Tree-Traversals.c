#include <basicgol.h>

/* Tree Node Structure */

REGISTRO(Node)
    INTEIRO data;
    struct Node *left;
    struct Node *right;
FIM_REGISTRO(Node);

/* Inorder Traversal of Binary tree */

PROCEDIMENTO inorderTraversal(Node *root) {
    SE root == NULL ENTAO
        RETORNE;
    FIM_SE
    /* recurring on left child */
    inorderTraversal(root->left);

    /* printing the data of node */
    ESCREVA_FMT("%d ", root->data);

    /* recurring on right child */
    inorderTraversal(root->right);
}

/* Preorder Traversal of Binary tree */

PROCEDIMENTO preorderTraversal(Node *root) {
    SE root == NULL ENTAO
        RETORNE;
    FIM_SE
    /* printing the data of node */
    ESCREVA_FMT("%d ", root->data);

    /* recurring on left child */
    preorderTraversal(root->left);

    /* recurring on right child */
    preorderTraversal(root->right);
}

/* Postorder Traversal of Binary tree */

PROCEDIMENTO postorderTraversal(Node *root) {
    SE root == NULL ENTAO
        RETORNE;
    FIM_SE
    /* recurring on left child */
    postorderTraversal(root->left);

    /* recurring on right child */
    postorderTraversal(root->right);

    /* printing the data of node */
    ESCREVA_FMT("%d ", root->data);
}

INICIO
    Node left = {1, NULL, NULL}, right = {3, NULL, NULL}, root = {2, &left, &right};
    inorderTraversal(&root);
    ESCREVA_LINHA();
    preorderTraversal(&root);
    ESCREVA_LINHA();
    postorderTraversal(&root);
    ESCREVA_LINHA();
FIM
