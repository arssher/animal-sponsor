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
	void AddAnimal(std::string _animal);
	int RemoveAnimal(std::string _animal);
	bool IsAnimalHere(std::string _animal) const;
};

