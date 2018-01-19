#include <ctime>
#include <cstdlib>
#include "IAhotcold.h"

int new_guess(int n_min, int n_max)
{
    return n_min + (rand() % (n_max - n_min)) + 1; //+ 1 + (max_updated - 1); //+1 aqui para o valor nunca ser zero
}
