#pragma once
#include <iostream>
class Herbivore abstract
{
protected:
	double weight;
	bool isLife;
public:
	Herbivore(double weight, bool isLife) : weight{ weight }, isLife{ isLife } {};
	virtual void Eat() = 0;
	virtual double getWeight();
	virtual void setWeight(double weight);
	virtual bool getIsLife();
	virtual void setIsLife(bool isLife);
};

