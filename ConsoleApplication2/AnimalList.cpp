#include "AnimalList.h"


AnimalList::~AnimalList()
{
  DeleteAll();
}

void AnimalList::DeleteAll()
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

void AnimalList::operator=(const AnimalList& animals)
{
	this->DeleteAll();
	if (animals.first == NULL)
	{
		first = NULL;
	}
	else
	{
		Animal* tmp = animals.first;
		Animal* tmpResult;
		first = new Animal;
		first->name = tmp->name;
		first->next = tmp->next;
		tmp = tmp->next;
		tmpResult = first;
		while(tmp)
		{
			tmpResult->next = new Animal;
			tmpResult = tmpResult->next;
			tmpResult->name = tmp->name;
			tmpResult->next = NULL;

			tmp = tmp->next;
		}
	}
}

AnimalList::AnimalList(const AnimalList& animals) //not tested
{
	*this = animals;
}
