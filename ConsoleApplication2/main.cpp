#include "Sponsor.h"
#include <vld.h>

int main()
{
	Sponsor jew("Shmulinson", 50);
	jew.AddAnimal("Elephant");
	jew.AddAnimal("Tiger");
	int a = jew.IsAnimalHere("Elepha");
	jew.RemoveAnimal("Elephant");
	return 0;
}