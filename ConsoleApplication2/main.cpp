#include "Sponsor.h"
#include "GoldSponsor.h"
#include <vld.h>

int main()
{
	GoldSponsor jew("Shmulinson", 50);
	jew.AddAnimal("Elephant");
	jew.AddAnimal("Tiger");
	jew.AddAnimal("Bear");
	std::cout << jew;
	int a = jew.IsAnimalHere("Elepha");
	jew.RemoveAnimal("Elephant");

	GoldSponsor oriental("Dada", 20);
	oriental = jew;
	jew = oriental;
	oriental = jew;
	return 0;
}