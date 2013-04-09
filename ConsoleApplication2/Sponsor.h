#pragma once

#include "AnimalList.h"
#include <string>
#include <cstdio>
#include <iostream>

class Sponsor
{
protected:
	std::string name;
	AnimalList animals;
	double experience;
public:
	Sponsor() {}
	Sponsor(std::string _name, int _experience) : name(_name), animals(), experience(_experience) {}
	virtual ~Sponsor(void);
	Sponsor(const Sponsor& _sponsor);
	void operator=(const Sponsor& _sponsor);
	void AddAnimal(std::string _animal) { animals.AddAnimal(_animal); }
	int RemoveAnimal(std::string _animal) { return animals.RemoveAnimal(_animal); }
	bool IsAnimalHere(std::string _animal) const { return animals.IsAnimalHere(_animal); }
	virtual void Donate(int amount) = 0;
};

