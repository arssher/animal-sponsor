#include "Sponsor.h"

Sponsor::~Sponsor(void)
{
}

void Sponsor::Add(std::string _animal)
{
	animals.Add(_animal);
}
