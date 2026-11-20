#include <basicgol.h>

REGISTRO(student)
    TEXTO_FIXO(name, 50);
    INTEIRO roll;
    REAL_CURTO marks;
FIM_REGISTRO(student);
student s;

INICIO
    ESCREVAL("Enter information:");

    ESCREVA("Enter name: ");
    AFIRME(scanf("%49s", s.name) == 1, "Invalid input");

    ESCREVA("Enter roll number: ");
    SE NAO LEIA_OK(s.roll) ENTAO
        ERRO("Invalid input");
    FIM_SE

    ESCREVA("Enter marks: ");
    SE NAO LEIA_OK(s.marks) ENTAO
        ERRO("Invalid input");
    FIM_SE

    ESCREVAL("Displaying Information:");

    ESCREVA("Name: ");
    ESCREVAL(s.name);

    ESCREVA_FMT("Roll number: %d\n", s.roll);

    ESCREVA_FMT("Marks: %.1f\n", s.marks);

    RETORNE 0;
FIM
