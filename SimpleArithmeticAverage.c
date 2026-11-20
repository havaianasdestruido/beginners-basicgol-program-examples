#include <basicgol.h>

// A simple code that calculates a student's arithmetic average over 3 grades.

INICIO
    REAL_CURTO grade1, grade2, grade3, average;

    // Grades input
    ESCREVA("Type de first grade: ");
    SE NAO LEIA_OK(grade1) ENTAO
        ERRO("Invalid input");
    FIM_SE

    ESCREVA("Type the second grade : ");
    SE NAO LEIA_OK(grade2) ENTAO
        ERRO("Invalid input");
    FIM_SE

    ESCREVA("Type the third grade: ");
    SE NAO LEIA_OK(grade3) ENTAO
        ERRO("Invalid input");
    FIM_SE

    // Processing
    average = (grade1 + grade2 + grade3) / 3;

    // Output
    ESCREVA_FMT("Student Average = %.1f\n", average);

    RETORNE 0;
FIM
