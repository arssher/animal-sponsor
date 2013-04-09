#include "GoldSponsor.h"

const double GoldSponsor::donateFactor = 5;
GoldSponsor::~GoldSponsor(void)
{
}

void GoldSponsor::Donate(int amount)
{
	experience = amount * donateFactor;
}

std::ostream& operator<<(std::ostream& out, const GoldSponsor sponsor)
{
	out << "Gold Sponsor " << sponsor.name << ", experience " << sponsor.experience << "\n";
	out << sponsor.animals;
	return out;
}
