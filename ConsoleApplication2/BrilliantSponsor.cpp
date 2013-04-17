#include "BrilliantSponsor.h"


const double BrilliantSponsor::donateFactor = 15;

BrilliantSponsor::~BrilliantSponsor(void)
{
}

void BrilliantSponsor::Donate(int amount)
{
	experience += amount * donateFactor;
}

std::ostream& operator<<(std::ostream& out, const BrilliantSponsor sponsor)
{
	out << "Brilliant Sponsor " << sponsor.name << ", experience " << sponsor.experience << "\n";
	out << sponsor.animals;
	out << "\n";
	return out;
}

void BrilliantSponsor::operator=(const BrilliantSponsor& _sponsor)
{
	this->~BrilliantSponsor();
	name = _sponsor.name;
	experience = _sponsor.experience;
	animals = _sponsor.animals;
}

BrilliantSponsor::BrilliantSponsor(const BrilliantSponsor& _sponsor)
{
	name = _sponsor.name;
	experience = _sponsor.experience;
	animals = _sponsor.animals;
}
