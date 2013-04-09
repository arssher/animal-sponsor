#include "Sponsor.h"

Sponsor::~Sponsor(void)
{
}

Sponsor::Sponsor(const Sponsor& _sponsor)
{
	name = _sponsor.name;
	experience = _sponsor.experience;
	animals = _sponsor.animals;
}

void Sponsor::operator=(const Sponsor& _sponsor)
{
	this->~Sponsor();
	name = _sponsor.name;
	experience = _sponsor.experience;
	animals = _sponsor.animals;
}