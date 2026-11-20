#include <basicgol.h>

// In portable BASICGOL, pass a named function instead of a compiler-specific lambda.
FUNCAO INTEIRO maximum(INTEIRO x, INTEIRO y) {
    RETORNE x > y ? x : y;
}
INICIO
    INTEIRO (*operation)(INTEIRO, INTEIRO) = maximum;
    ESCREVA_FMT("%d", operation(1, 23));
FIM
