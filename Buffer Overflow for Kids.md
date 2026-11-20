# Staying inside a buffer in BASICGOL

A buffer is a region of memory used to hold data, such as an array of characters.
`TEXTO_FIXO(nome, 10)` reserves ten bytes. Its valid indexes run from **0 to 9**.
A text value also needs a terminating zero byte, leaving room for at most nine bytes
of content (not necessarily nine letters in UTF-8).

```c
#include <basicgol.h>

INICIO
    TEXTO_FIXO(nome, 10);
    ESCREVA("Name: ");
    SE NAO LEIA_TEXTO(nome, TAMANHO_DE(nome)) ENTAO
        ERRO("Could not read the name");
    FIM_SE
    ESCREVAL(nome);
FIM
```

Pass the **array's capacity**, not the length of the text you hope to receive.
Writing past either end is a buffer overflow. BASICGOL's native arrays don't
check indexes automatically: a bad write can damage unrelated data and may not
cause an immediate crash. When using a computed index, check that it is at
least zero and strictly less than `TAMANHO_VETOR(array)` before accessing the array.
