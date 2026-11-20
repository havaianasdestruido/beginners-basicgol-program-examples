#include <basicgol.h>

FUNCAO INTEIRO naiveModInv(INTEIRO x, INTEIRO y) {
    // If there is an immediate value reduction
    AFIRME(y > 1, "Modulus must exceed one");
    x %= y;

    INTEIRO i;
    PARA (i, 1, y - 1) {
        SE (x * i) MOD y == 1 ENTAO
            RETORNE i;
        FIM_SE
    }
    RETORNE -1; // No inverse.
}

INICIO
    ESCREVA("Enter a and m: ");
    INTEIRO a, m;
    SE NAO LEIA_OK(a) OU NAO LEIA_OK(m) ENTAO
        ERRO("Invalid input");
    FIM_SE

    INTEIRO ans = naiveModInv(a, m);
    ESCREVA_FMT("%d\n", ans);

    RETORNE 0;
FIM
