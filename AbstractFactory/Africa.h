#pragma once
#include "Continent.h"
#include "Wildebeest.h"
#include "Lion.h"
class Africa : public Continent
{
	
public:
	Carnivore* createCarnivore(int power);
	Herbivore* createHerbivore(double weight, bool isLife);
};

