#pragma once
#include "Carnivore.h"
class Tiger : public Carnivore
{
public:
	Tiger(int power) : Carnivore{ power } {};
	void Eat(Herbivore* someAnimal);
};

