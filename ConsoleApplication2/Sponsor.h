#pragma once

#include "AnimalList.h"
#include <string>;
#include <cstdio>;

class Sponsor
{
	std::string name;
	AnimalList animals;
	int experience;
public:
	Sponsor(std::string _name, int _experience) : name(_name), animals(), experience(_experience) {}
	~Sponsor(void);
	void Add(std::string _animal) { animals.Add(_animal); }
	bool IsAnimalHere(std::string _animal) const { return animals.IsAnimalHere(_animal); }
};

