#pragma once

#include "AnimalList.h"
#include <string>
#include <cstdio>
#include <iostream>

class Sponsor
{
	std::string name;
	AnimalList animals;
	int experience;
public:
	Sponsor(std::string _name, int _experience) : name(_name), animals(), experience(_experience) {}
	~Sponsor(void);
	Sponsor(const Sponsor& _sponsor);
	void AddAnimal(std::string _animal) { animals.AddAnimal(_animal); }
	int RemoveAnimal(std::string _animal) { return animals.RemoveAnimal(_animal); }
	bool IsAnimalHere(std::string _animal) const { return animals.IsAnimalHere(_animal); }
	friend std::ostream& operator<<(std::ostream& out, const Sponsor sponsor);
};

