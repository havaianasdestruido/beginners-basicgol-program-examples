#include <basicgol.h>

#define pi 3.1415

INICIO
    REAL_CURTO raio, altura, volume, area;
    TEXTO_FIXO(tipo, 10);

    SE NAO LEIA_OK(raio) ENTAO
        ERRO("Invalid input");
    FIM_SE
    SE NAO LEIA_OK(altura) ENTAO
        ERRO("Invalid input");
    FIM_SE
    AFIRME(scanf("%9s", tipo) == 1, "Invalid input");

    SE COMPARA_TEXTO(tipo, "CONE") == 0 ENTAO
        volume = ((pi * POTENCIA(raio, 2)) * altura) / 3;
        area = (pi * raio) * RAIZ(POTENCIA(raio, 2) + POTENCIA(altura, 2));
        ESCREVA_FMT("VOLUME = %.2f\n", volume);
        ESCREVA_FMT("AREA = %.2f\n", area);
    SENAO_SE COMPARA_TEXTO(tipo, "CILINDRO") == 0 ENTAO
        volume = ((pi * POTENCIA(raio, 2)) * altura);
        area = (2 * pi) * (raio * altura);
        ESCREVA_FMT("VOLUME = %.2f\n", volume);
        ESCREVA_FMT("AREA = %.2f\n", area);
    SENAO_SE COMPARA_TEXTO(tipo, "ESFERA") == 0 ENTAO
        volume = (pi * 4 * POTENCIA(raio, 3)) / 3;
        area = (4 * (pi * POTENCIA(raio, 2)));
        ESCREVA_FMT("VOLUME = %.2f\n", volume);
        ESCREVA_FMT("AREA = %.2f\n", area);
    FIM_SE

    RETORNE 0;
FIM
