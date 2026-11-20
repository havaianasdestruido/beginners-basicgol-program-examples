#include <basicgol.h>

INICIO
    /* A no. is said to be palindrome if the number when reversed equals to the same no.  eg: 121 */

    INTEIRO n, reversedInteger = 0, remainder, originalInteger;
    ESCREVA("Enter an integer: ");
    SE NAO LEIA_OK(n) ENTAO
        ERRO("Invalid input");
    FIM_SE
    originalInteger = n;

    // reversed integer is stored in variable

    ENQUANTO n != 0 FACA
        remainder = n MOD 10;
        reversedInteger = reversedInteger * 10 + remainder;
        n /= 10;
    FIM_ENQUANTO

    // palindrome if orignalInteger and reversedInteger are equal

    SE originalInteger == reversedInteger ENTAO
        ESCREVA_FMT("%d is a palindrome.", originalInteger);
    SENAO
        ESCREVA_FMT("%d is not a palindrome.", originalInteger);
    FIM_SE

    RETORNE 0;
FIM
