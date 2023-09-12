#pragma once
#include "Herbivore.h"
class Wildebeest : public Herbivore
{
public:
	Wildebeest(double weight, bool isLife) : Herbivore{ weight, isLife } {};
	void Eat();
};


