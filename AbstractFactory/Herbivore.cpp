#include "Herbivore.h"

double Herbivore::getWeight()
{
	return weight;
}

void Herbivore::setWeight(double weight)
{
	this->weight = weight;
}

bool Herbivore::getIsLife()
{
	return isLife;
}

void Herbivore::setIsLife(bool isLife)
{
	this->isLife = isLife;
}
