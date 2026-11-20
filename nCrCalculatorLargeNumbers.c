#include <basicgol.h>

#define m 1000000007

// This function calcualtes the large powers with O(log(n))
FUNCAO INTEIRO_LONGO fastexp(INTEIRO_LONGO x, INTEIRO_LONGO y) {
    // In the form of pow(x, y) % m
    SE y == 0 ENTAO
        RETORNE 1;
    SENAO_SE y == 1 ENTAO
        RETORNE x;
    SENAO
        INTEIRO_LONGO ans = fastexp(x, y / 2);
        SE y MOD 2 == 0 ENTAO
            RETORNE (ans MOD m * ans MOD m) MOD m;
        SENAO
            RETORNE ((ans MOD m * ans MOD m) MOD m * x MOD m) MOD m;
        FIM_SE
    FIM_SE
}

INTEIRO_LONGO fact[2000001] = {1};

INICIO
    // FACTORIAL CALCULATION
    // Using (a * b) % m = (a % m * b % m) % m
    INTEIRO i;
    PARA (i, 1, 2000000) {
        fact[i] = ((fact[i - 1] MOD m) * (i MOD m)) MOD m;
    }

    // Number of test cases
    INTEIRO T;
    INTEIRO_LONGO n, r, ans;
    ESCREVA("Enter the number of test cases: ");
    SE NAO LEIA_OK(T) ENTAO
        ERRO("Invalid input");
    FIM_SE
    ENQUANTO T-- FACA
        ESCREVA("Enter the two numbers in the form of xCy: ");
        SE NAO LEIA_OK(n) OU NAO LEIA_OK(r) ENTAO
            ERRO("Invalid input");
        FIM_SE

        // Formula used: (n)!/ (r! * (n-r)!)
        // = (n+r)! * pow((r! * (n-r)!), -1)
        // Using FERMAT's LITTLE THEOREM (Google it!)
        // = (fact[n]%m * pow((r! * (n-r)!), m - 2) % m) % m
        // = (fact[n]%m * fastexp((fact[r] * fact[n-r])%m, m - 2)%m)%m

        ans = (fact[n] MOD m * fastexp((fact[r] MOD m * fact[n - r] MOD m) MOD m, m - 2) MOD m) MOD m;
        ESCREVA_FMT("%ld\n", ans);
    FIM_ENQUANTO
    RETORNE 0;
FIM
