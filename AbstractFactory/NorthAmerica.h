#pragma once
#include "Continent.h"
#include "Bison.h"
#include "Wolf.h"
class NorthAmerica : public Continent
{
public:
	Carnivore* createCarnivore(int power);
	Herbivore* createHerbivore(double weight, bool isLife);
};

