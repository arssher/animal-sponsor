#include "Sponsor.h"
#include "GoldSponsor.h"
#include "BrilliantSponsor.h"

int main()
{
	GoldSponsor genius("Dmitry Kristev", 500);
  Sponsor* sponsorptr = &genius;
	GoldSponsor vitaly("Vitaly Bubyakin", 400);
  Sponsor* sponsorptr2 = &vitaly;
  
  genius.AddAnimal("Deer");
  genius.AddAnimal("Bear");
  genius.AddAnimal("Snake");

  genius.RemoveAnimal("Bear");

  vitaly.AddAnimal("Tiger");

  sponsorptr->Donate(100);
  sponsorptr2->Donate(200);

	std::cout << genius;
	std::cout << vitaly;
  
  genius = vitaly;
	std::cout << genius;

  GoldSponsor test = genius;
	std::cout << test;
  
  std::cout << sponsorptr;

	return 0;
}
