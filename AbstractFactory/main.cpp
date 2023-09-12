#include <iostream>
#include "AnimalWorld.h"
#include "Africa.h"
#include "Eurasia.h"
#include "NorthAmerica.h"

int main()
{
    Africa Africa;
    Eurasia Eurasia;
    NorthAmerica NorthAmerica;
    AnimalWorld world;
    world.AddCarnivore(Africa.createCarnivore(99));
    world.AddCarnivore(Eurasia.createCarnivore(5));
    world.AddCarnivore(NorthAmerica.createCarnivore(75));
    world.AddCarnivore(NorthAmerica.createCarnivore(105));
    world.AddHerbivore(Eurasia.createHerbivore(55, true));
    world.AddHerbivore(Africa.createHerbivore(95, true));
    world.AddHerbivore(Eurasia.createHerbivore(20, true));
    world.AddHerbivore(NorthAmerica.createHerbivore(100, true));
    world.NutritionCarnivores();
    world.NutritionCarnivores();
    world.NutritionCarnivores();
    world.NutritionCarnivores();
    world.MealsHerbivores();
    world.MealsHerbivores();
    world.MealsHerbivores();
    world.MealsHerbivores();
    world.MealsHerbivores();
    world.MealsHerbivores();
    world.MealsHerbivores();
    world.MealsHerbivores();
    world.MealsHerbivores();
    world.MealsHerbivores();
    world.MealsHerbivores();
    world.MealsHerbivores();
    world.MealsHerbivores();
    world.MealsHerbivores();
    world.MealsHerbivores();
    world.MealsHerbivores();
    world.MealsHerbivores();
    cout << "\n-------Little chance for carnivores-------\n";
    world.NutritionCarnivores();
    world.NutritionCarnivores();
}
