#pragma once

#include "cstdio"
#include "string"

class AnimalList
{
	struct Animal
	{
		std::string name;
		Animal* next;
	};
	Animal* first;
public:
	AnimalList() {first = 0;}
	~AnimalList();
	void Add(std::string _animal);
	bool IsAnimalHere(std::string _animal) const;
};

