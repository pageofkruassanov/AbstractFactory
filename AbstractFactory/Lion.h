#pragma once
#include "Carnivore.h"
class Lion : public Carnivore
{
public:
	Lion(int power) : Carnivore{ power } {};
	void Eat(Herbivore* someAnimal);
};

