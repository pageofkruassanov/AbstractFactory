#pragma once
#include "Continent.h"
#include "Elk.h"
#include "Tiger.h"
class Eurasia : public Continent
{
public:
	Carnivore* createCarnivore(int power);
	Herbivore* createHerbivore(double weight, bool isLife);
};

