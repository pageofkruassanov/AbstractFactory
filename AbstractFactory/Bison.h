#pragma once
#include "Herbivore.h"
class Bison : public Herbivore
{
public:
	Bison(double weight, bool isLife) : Herbivore{ weight, isLife } {};
	void Eat();
};

