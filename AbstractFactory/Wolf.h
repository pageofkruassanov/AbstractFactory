#pragma once
#include "Carnivore.h"
class Wolf : public Carnivore
{
public:
	Wolf(int power) : Carnivore{ power } {};
	void Eat(Herbivore* someAnimal);
};

