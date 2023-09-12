#pragma once
#include <iostream>
#include "Herbivore.h"

class Carnivore abstract
{
protected:
	int power;
public:
	Carnivore(int power) : power{ power } {};
	virtual void Eat(Herbivore* someAnimal) = 0;
};

