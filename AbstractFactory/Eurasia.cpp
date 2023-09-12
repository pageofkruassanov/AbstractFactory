#include "Eurasia.h"

Carnivore* Eurasia::createCarnivore(int power)
{
    return new Tiger(power);
}

Herbivore* Eurasia::createHerbivore(double weight, bool isLife)
{
    return new Elk(weight, isLife);
}
