#include <basicgol.h>

INICIO
    TEXTO_FIXO(ip, 32);
    VETOR(NATURAL, octet, 4);
    CARACTERE extra;
    ESCREVA("Enter IP Address (xxx.xxx.xxx.xxx format): ");
    SE NAO LEIA_TEXTO(ip, TAMANHO_DE(ip)) OU
       sscanf(ip, "%3u.%3u.%3u.%3u%c", &octet[0], &octet[1], &octet[2], &octet[3], &extra) != 4 ENTAO
        ERRO("Expected four decimal octets");
    FIM_SE
    INTEIRO i;
    PARA (i, 0, 3) {
        AFIRME(octet[i] <= 255, "Octet outside 0..255");
    }
    ESCREVA_FMT("Ip Address: %03u. %03u. %03u. %03u\n", octet[0], octet[1], octet[2], octet[3]);
    CARACTERE classe = 'E';
    SE octet[0] < 128 ENTAO
        classe = 'A';
    SENAO_SE octet[0] < 192 ENTAO
        classe = 'B';
    SENAO_SE octet[0] < 224 ENTAO
        classe = 'C';
    SENAO_SE octet[0] < 240 ENTAO
        classe = 'D';
    FIM_SE
    ESCREVA_FMT("Class %c Ip Address.\n", classe);
FIM
