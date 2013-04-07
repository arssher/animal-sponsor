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