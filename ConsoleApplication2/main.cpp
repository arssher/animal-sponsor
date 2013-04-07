#include "Sponsor.h"
#include <vld.h>

int main()
{
	Sponsor jew("Shmulinson", 50);
	jew.Add("Elephant");
	jew.Add("Tiger");
	bool a = jew.IsAnimalHere("Elepha");
	return 0;
}