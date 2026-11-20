#include <basicgol.h>

// A basic implementation of a linear congruential pseudorandom number generator in C

#include <time.h>

REGISTRO(lcg_rand)
    NATURAL modulus;
    NATURAL multiplier;
    NATURAL increment;
    NATURAL seed;
    NATURAL last;
FIM_REGISTRO(lcg_rand);

FUNCAO lcg_rand new_generator(NATURAL modulus, NATURAL multiplier, NATURAL increment) {
    lcg_rand random;
    random.modulus = modulus;
    random.multiplier = multiplier;
    random.increment = increment;
    random.seed = time(NULL);
    random.last = random.seed;
    RETORNE random;
}

FUNCAO INTEIRO random(lcg_rand *random) {
    INTEIRO number = ((random->multiplier * random->last) + random->increment) MOD random->modulus;
    random->last = number;
    RETORNE number;
}

INICIO
    lcg_rand rng = new_generator(POTENCIA(2, 31), 1103515245, 12345);
    INTEIRO i;
    PARA (i, 0, 9) {
        ESCREVA_FMT("%d\n", random(&rng));
    }
    RETORNE 0;
FIM
