#include <basicgol.h>

REGISTRO(course)
    INTEIRO marks;
    TEXTO_FIXO(subject, 30);
FIM_REGISTRO(course);

INICIO
    course *ptr;
    INTEIRO noOfRecords;
    ESCREVA("Enter the number of records: ");
    SE NAO LEIA_OK(noOfRecords) ENTAO
        ERRO("Invalid input");
    FIM_SE

    AFIRME(noOfRecords > 0 E noOfRecords <= 100000, "Invalid record count");
    // Memory allocation for noOfRecords structures
    ptr = (course *)malloc(noOfRecords * TAMANHO_DE(course));
    AFIRME(ptr != NULL, "Allocation failed");
    INTEIRO i;
    PARA (i, 0, noOfRecords - 1) {
        ESCREVAL("Enter subject and marks:");
        AFIRME(scanf("%29s %d", (ptr + i)->subject, &(ptr + i)->marks) == 2, "Invalid input");
    }

    ESCREVAL("Displaying Information:");
    PARA (i, 0, noOfRecords - 1) {
        ESCREVA_FMT("%s\t%d\n", (ptr + i)->subject, (ptr + i)->marks);
    }

    free(ptr);

    RETORNE 0;
FIM
