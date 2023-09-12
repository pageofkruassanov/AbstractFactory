#include "AnimalWorld.h"

void AnimalWorld::MealsHerbivores()
{
	if (herbivoreAnimals.size() > 0)
		for (int i = 0; i < herbivoreAnimals.size(); i++)
			herbivoreAnimals[i]->Eat();
}

void AnimalWorld::NutritionCarnivores()
{
	if(carnivoreAnimals.size() > 0)
		if(herbivoreAnimals.size() > 0)
			for (int i = 0; i < carnivoreAnimals.size(); i++) {
				srand(time(0));
				int min = 0;
				int max = herbivoreAnimals.size() - 1;
				int randomIndex = min + rand() % (max - min - 1);
				carnivoreAnimals[i]->Eat(herbivoreAnimals[randomIndex]);
			}
}

void AnimalWorld::AddCarnivore(Carnivore* animal)
{
	carnivoreAnimals.push_back(animal);
}

void AnimalWorld::AddHerbivore(Herbivore* animal)
{
	herbivoreAnimals.push_back(animal);
}

AnimalWorld::~AnimalWorld()
{
	if (herbivoreAnimals.size() > 0)
		for (int i = 0; i < herbivoreAnimals.size() > 0; i++)
			delete herbivoreAnimals[i];
	if (carnivoreAnimals.size() > 0)
		for (int i = 0; i < carnivoreAnimals.size() > 0; i++)
			delete carnivoreAnimals[i];
}
