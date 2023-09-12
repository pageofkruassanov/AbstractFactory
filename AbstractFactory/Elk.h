#pragma once
#include "Herbivore.h"
class Elk : public Herbivore
{
public:
	Elk(double weight, bool isLife) : Herbivore{ weight, isLife } {};
	void Eat();
};

