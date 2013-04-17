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
	this->animals.DeleteAll();
	name = _sponsor.name;
	experience = _sponsor.experience;
	animals = _sponsor.animals;
}

std::ostream& operator<<(std::ostream& out, Sponsor* sponsorptr)
{
  sponsorptr->Print(out);
  return out;
}


std::ostream& Sponsor::Print(std::ostream& out)
{
	out << this->animals;
	out << "\n";
	return out;
}



