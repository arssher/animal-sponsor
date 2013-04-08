#include "Sponsor.h"

Sponsor::~Sponsor(void)
{
}

std::ostream& operator<<(std::ostream& out, const Sponsor& sponsor)
{
	out << "Sponsor " << sponsor.name << ", experience " << sponsor.experience << "\n";
	out << sponsor.animals;
	return out;
}