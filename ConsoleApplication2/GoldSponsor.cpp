#include "GoldSponsor.h"

const double GoldSponsor::donateFactor = 5;

GoldSponsor::~GoldSponsor(void)
{
}

void GoldSponsor::Donate(int amount)
{
	experience += amount * donateFactor;
}

std::ostream& operator<<(std::ostream& out, const GoldSponsor& sponsor)
{
	out << "Gold Sponsor " << sponsor.name << ", experience " << sponsor.experience << "\n";
	out << sponsor.animals;
	out << "\n";
	return out;
}

void GoldSponsor::operator=(const GoldSponsor& _sponsor) 
{
  Sponsor::operator = (_sponsor);
}

GoldSponsor::GoldSponsor(const GoldSponsor& _sponsor) : Sponsor(_sponsor) {}

std::ostream& GoldSponsor::Print(std::ostream& out)
{
  
  out << "Gold Sponsor " << name << ", experience " << experience << "\n";
  Sponsor::Print(out);
	return out;
}

