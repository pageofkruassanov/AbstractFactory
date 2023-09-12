#include "Lion.h"

void Lion::Eat(Herbivore* someAnimal)
{
	if (power > someAnimal->getWeight()) {
		power += 10;
		std::cout << "Lion eating...\n";
		someAnimal->setWeight(someAnimal->getWeight() - 10);
		if (someAnimal->getWeight() < 0)
			someAnimal->setIsLife(false);
	}
	else
		power -= 10;
}
