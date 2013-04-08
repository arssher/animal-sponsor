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

std::ostream& operator<<(std::ostream& out, const Sponsor sponsor)
{
	out << "Sponsor " << sponsor.name << ", experience " << sponsor.experience << "\n";
	out << sponsor.animals;
	return out;
}