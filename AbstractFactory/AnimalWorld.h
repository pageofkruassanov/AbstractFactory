#pragma once
#include "Carnivore.h"
#include "Herbivore.h"
#include <vector>

using namespace std;

class AnimalWorld
{
	vector<Carnivore*> carnivoreAnimals;
	vector<Herbivore*> herbivoreAnimals;
public:
	void MealsHerbivores();
	void NutritionCarnivores();
	void AddCarnivore(Carnivore* animal);
	void AddHerbivore(Herbivore* animal);
	~AnimalWorld();
};

