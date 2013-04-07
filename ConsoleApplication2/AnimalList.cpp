#include "AnimalList.h"


AnimalList::~AnimalList()
{
	while(first)
	{
		Animal* tmp = first;
		first = first->next;
		delete tmp;
	}
}


void AnimalList::Add(std::string _animal)
{
	Animal* tmp = new Animal;
	tmp->name = _animal;
	tmp->next = first;
	first = tmp;
}

bool AnimalList::IsAnimalHere(std::string _animal) const
{
	Animal* tmp = first;
	while(tmp)
	{
		if (tmp->name == _animal)
			return true;
		tmp = tmp->next;
	}
	return false;
}