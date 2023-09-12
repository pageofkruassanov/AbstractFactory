#include "NorthAmerica.h"

Carnivore* NorthAmerica::createCarnivore(int power)
{
    return new Wolf(power);
}

Herbivore* NorthAmerica::createHerbivore(double weight, bool isLife)
{
    return new Bison(weight, isLife);
}
