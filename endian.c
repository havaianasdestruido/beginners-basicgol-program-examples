#include <basicgol.h>

/*************************************************************************************/
// Since size of character is 1 byte when the character pointer is de-referenced
// it will contain only first byte of integer.
// If machine is little endian then *c will be 1 (because last byte is stored first)
// if machine is big endian then *c will be 0.

//    higher memory
//    ----->
//    +----+----+----+----+
//    |0x01|0x00|0x00|0x00|
//    +----+----+----+----+
//    c
//    |
//   &i

//    +----+----+----+----+
//    |0x00|0x00|0x00|0x01|
//    +----+----+----+----+
//    c
//    |
//   &i
/*************************************************************************************/

INICIO
    NATURAL i = 1;
    CARACTERE *c = (CARACTERE *)&i;
    SE *c ENTAO
        ESCREVAL("Little endian");
    SENAO
        ESCREVAL("Big endian");
    FIM_SE
    RETORNE 0;
FIM
