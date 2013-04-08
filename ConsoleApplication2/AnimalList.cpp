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


void AnimalList::AddAnimal(std::string _animal)
{
	Animal* tmp = new Animal;
	tmp->name = _animal;
	tmp->next = first;
	first = tmp;
}

int AnimalList::RemoveAnimal(std::string _animal)
{
	Animal* tmp;
	if (first == 0)
		return -1;
	else
	{
		if (first->name == _animal)
		{
			tmp = first;
			first = first->next;
			delete tmp;
			return 0;
		}
		else
		{
			tmp = first;
			Animal* previous = tmp;
			tmp = tmp->next;
			while (tmp)
			{
				if (tmp->name == _animal)
				{
					previous->next = tmp->next;
					delete tmp;
					return 0;
				}

				tmp = tmp->next;
				previous = previous->next;
			}
			return -1;
		}
	}
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

std::ostream& operator<<(std::ostream& out, const AnimalList& animals)
{
	AnimalList::Animal* tmp = animals.first;
	while (tmp)
	{
		out << tmp->name << "\n";
		tmp = tmp->next;
	}
	return out;
}