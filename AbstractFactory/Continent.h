#pragma once
#include <iostream>
#include "Carnivore.h"
#include "Herbivore.h"
class Continent
{
public:
	virtual Carnivore* createCarnivore(int power) = 0;
	virtual Herbivore* createHerbivore(double weight, bool isLife) = 0;
};

