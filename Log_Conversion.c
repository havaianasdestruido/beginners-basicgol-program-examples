#include <basicgol.h>

INICIO
    /* Define temporary variables */
    REAL value;
    REAL result;

    /* Calculate the log of the value */
    SE NAO LEIA_OK(value) OU value <= 0 ENTAO
        RETORNE 1;
    FIM_SE
    result = log(value);

    /* Display the result of the calculation */
    ESCREVA_FMT("The Natural Logarithm of %f is %f\n", value, result);

    RETORNE 0;
FIM
