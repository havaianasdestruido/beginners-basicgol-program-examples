#include <basicgol.h>

PROCEDIMENTO decimal_hex(INTEIRO n, CARACTERE hex[]);
FUNCAO INTEIRO hex_decimal(CARACTERE hex[]);
INICIO
    TEXTO_FIXO(hex, 20);
    INTEIRO n, c;
    ESCREVAL("**----Program to Convert Decimal and Hexadeciaml Vice Versa----***\n");
    ESCREVAL("Choose Your Choice: ");
    ESCREVAL("1.Decimal to Hexadecimal:");
    ESCREVAL("2.Hexadecimal to Decimal:\n");
    SE NAO LEIA_OK(c) ENTAO
        ERRO("Invalid input");
    FIM_SE
    SE c == 1 ENTAO
        ESCREVA("Enter decimal number: ");
        SE NAO LEIA_OK(n) ENTAO
            ERRO("Invalid input");
        FIM_SE
        decimal_hex(n, hex);
        ESCREVA_FMT("Hexadecimal number: %s", hex);
    FIM_SE
    SE c == 2 ENTAO
        ESCREVA("Enter hexadecimal number: ");
        AFIRME(scanf("%19s", hex) == 1, "Invalid input");
        ESCREVA_FMT("Decimal number: %d", hex_decimal(hex));
    FIM_SE
    RETORNE 0;
FIM

PROCEDIMENTO decimal_hex(INTEIRO n, CARACTERE hex[]) {
    INTEIRO i = 0, rem;
    SE n == 0 ENTAO
        hex[i++] = '0';
    FIM_SE
    ENQUANTO n > 0 FACA
        rem = n MOD 16;
        ESCOLHA(rem)
        CASO 10:
            hex[i] = 'A';
            PARE;
        CASO 11:
            hex[i] = 'B';
            PARE;
        CASO 12:
            hex[i] = 'C';
            PARE;
        CASO 13:
            hex[i] = 'D';
            PARE;
        CASO 14:
            hex[i] = 'E';
            PARE;
        CASO 15:
            hex[i] = 'F';
            PARE;
        CONTRARIO:
            hex[i] = rem + '0';
            PARE;
        FIM_ESCOLHA
        ++i;
        n /= 16;
    FIM_ENQUANTO
    hex[i] = '\0';
    INTEIRO j;
    PARA (j, 0, i / 2 - 1) {
        CARACTERE tmp = hex[j];
        hex[j] = hex[i - 1 - j];
        hex[i - 1 - j] = tmp;
    }
}

FUNCAO INTEIRO hex_decimal(CARACTERE hex[]) {
    INTEIRO i, length, sum = 0;
    length = TAMANHO_TEXTO(hex);
    PARA (i, 0, length - 1) {
        SE hex[i] >= '0' E hex[i] <= '9' ENTAO
            sum += (hex[i] - '0') * POTENCIA(16, length - 1 - i);
        FIM_SE
        SE hex[i] >= 'A' E hex[i] <= 'F' ENTAO
            sum += (hex[i] - 55) * POTENCIA(16, length - 1 - i);
        FIM_SE
        SE hex[i] >= 'a' E hex[i] <= 'f' ENTAO
            sum += (hex[i] - 87) * POTENCIA(16, length - 1 - i);
        FIM_SE
    }
    RETORNE sum;
}
