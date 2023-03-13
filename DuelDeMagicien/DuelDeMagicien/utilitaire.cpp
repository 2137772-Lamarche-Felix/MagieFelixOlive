#include "utilitaire.h"
#include <random>

int utilitaire::rng(int min,int max)
{
    std::random_device rd;
    std::mt19937 rn(rd());
    std::uniform_int_distribution<> rng(min, max);
    int nombre = rng(rn);
    return nombre;
}
