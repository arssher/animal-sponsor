#pragma once

#include <cstdio>
#include <string>
#include <iostream>

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
  void DeleteAll();
	AnimalList(const AnimalList& animals);
	void operator=(const AnimalList& animals);
	void AddAnimal(std::string _animal);
	int RemoveAnimal(std::string _animal);
	bool IsAnimalHere(std::string _animal) const;
	friend std::ostream& operator<<(std::ostream& out, const AnimalList& animals);
};

