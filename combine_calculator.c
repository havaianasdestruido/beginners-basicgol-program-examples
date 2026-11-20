#include <basicgol.h>

// add a program for a calculator in C
PROCEDIMENTO Input(VAZIO) {
    ESCREVAL("Type number to choose the algorithm");
    ESCREVA_FMT(" 1. + \n 2. - \n 3. *\n 4. / \n 5. ^ \n 6. square \n ");
    ESCREVA("7. log \n 8.floor \n 9. ceil \n 10.Exit\n InputNum: ");
}
INICIO
    INTEIRO InputNum = 0;
    REAL_CURTO a = 0;
    REAL_CURTO b = 0;
    REAL_CURTO result = 0;
    REPITA
        Input();
        SE NAO LEIA_OK(InputNum) ENTAO
            ERRO("Invalid input");
        FIM_SE
        ESCOLHA(InputNum)
        CASO (1):
            ESCREVA("Enter First Number: ");
            SE NAO LEIA_OK(a) ENTAO
                ERRO("Invalid input");
            FIM_SE
            ESCREVA("Enter Second Number: ");
            SE NAO LEIA_OK(b) ENTAO
                ERRO("Invalid input");
            FIM_SE
            result = a + b;
            ESCREVA_FMT("%.2f + %.2f = %.2f\n", a, b, result);
            PARE;
        CASO (2):
            ESCREVA("Enter First Number: ");
            SE NAO LEIA_OK(a) ENTAO
                ERRO("Invalid input");
            FIM_SE
            ESCREVA("Enter Second Number: ");
            SE NAO LEIA_OK(b) ENTAO
                ERRO("Invalid input");
            FIM_SE
            result = a - b;
            ESCREVA_FMT("%.2f - %.2f = %.2f\n", a, b, result);
            PARE;
        CASO (3):
            ESCREVA("Enter First Number: ");
            SE NAO LEIA_OK(a) ENTAO
                ERRO("Invalid input");
            FIM_SE
            ESCREVA("Enter Second Number: ");
            SE NAO LEIA_OK(b) ENTAO
                ERRO("Invalid input");
            FIM_SE
            result = a * b;
            ESCREVA_FMT("%.2f * %.2f = %.2f\n", a, b, result);
            PARE;
        CASO (4):
            ESCREVA("Enter Dividend: ");
            SE NAO LEIA_OK(a) ENTAO
                ERRO("Invalid input");
            FIM_SE
            ESCREVA("Enter Divisor: ");
            SE NAO LEIA_OK(b) ENTAO
                ERRO("Invalid input");
            FIM_SE
            SE b == 0 ENTAO
                ESCREVAL("Please check the divisor that can not be zero.");
            SENAO
                result = a / b;
                ESCREVA_FMT("%.2f / %.2f = %.2f\n", a, b, result);
            FIM_SE
            PARE;
        CASO (5):
            ESCREVA("Enter the number ");
            SE NAO LEIA_OK(a) ENTAO
                ERRO("Invalid input");
            FIM_SE
            ESCREVA("Enter the second number ");
            SE NAO LEIA_OK(b) ENTAO
                ERRO("Invalid input");
            FIM_SE
            ESCREVA_FMT("first number to the power of second number is %.2f \n ", POTENCIA(a, b));
            PARE;
        CASO (6):
            ESCREVA("Enter the radicand ");
            SE NAO LEIA_OK(a) ENTAO
                ERRO("Invalid input");
            FIM_SE
            ESCREVA_FMT("square root is %.2f \n", RAIZ(a));
            PARE;

        CASO (7):
            ESCREVA("Enter the log ");
            SE NAO LEIA_OK(a) ENTAO
                ERRO("Invalid input");
            FIM_SE
            ESCREVA_FMT("the log is %.2f \n", log(a));
            PARE;
        CASO (8):
            ESCREVA("Enter the number ");
            SE NAO LEIA_OK(a) ENTAO
                ERRO("Invalid input");
            FIM_SE
            ESCREVA_FMT("the float is %.2f \n", PISO(a));
            PARE;
        CASO (9):
            ESCREVA("Enter the number ");
            SE NAO LEIA_OK(a) ENTAO
                ERRO("Invalid input");
            FIM_SE
            ESCREVA_FMT("the ceil is %.2f \n", TETO(a));
            PARE;

        CASO (10):
            ESCREVAL("Thank you for using code !!");
            PARE;

        CONTRARIO:
            ESCREVAL("Invalid number, please choose again.");
        FIM_ESCOLHA
    ATE_QUE(NAO (InputNum));
    RETORNE 0;
FIM
