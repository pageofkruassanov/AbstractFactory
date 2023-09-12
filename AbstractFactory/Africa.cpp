#include "Africa.h"

Carnivore* Africa::createCarnivore(int power)
{
    return new Lion(power);
}

Herbivore* Africa::createHerbivore(double weight, bool isLife)
{
    return new Wildebeest(weight, isLife);
}
