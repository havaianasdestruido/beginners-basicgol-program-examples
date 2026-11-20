#include <basicgol.h>

FUNCAO INTEIRO_LONGO get_gcd_euclidian(INTEIRO_LONGO d1, INTEIRO_LONGO d2) {
    /* swap the numbers if d2 is greater than d1 */
    SE d2 > d1 ENTAO
        d1 = d1 - d2;
        d2 = d1 + d2;
        d1 = d2 - d1;
    FIM_SE

    SE d2 == 0 ENTAO
        RETORNE d1;
    FIM_SE

    INTEIRO_LONGO rem = d1 MOD d2;

    RETORNE get_gcd_euclidian(d2, rem);
}

FUNCAO INTEIRO_LONGO get_lcm_euclidian(INTEIRO_LONGO val1, INTEIRO_LONGO val2) {
    SE val1 == 0 OU val2 == 0 ENTAO
        RETORNE 0;
    FIM_SE

    INTEIRO_LONGO prod = (INTEIRO_LONGO)(val1 * val2);
    INTEIRO_LONGO gcd = get_gcd_euclidian(val1, val2);

    RETORNE (prod / gcd);
}

INICIO
    INTEIRO_LONGO ip1 = 0;
    INTEIRO_LONGO ip2 = 0;
    SE NAO LEIA_OK(ip1) OU NAO LEIA_OK(ip2) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ESCREVA_FMT("%ld", get_lcm_euclidian(ip1, ip2));

    RETORNE 0;
FIM
