#pragma once
#include "Sponsor.h"
class BrilliantSponsor : public Sponsor
{
static const double donateFactor;
public:
	BrilliantSponsor(std::string _name, int _experience) : Sponsor(_name, _experience) {};
	~BrilliantSponsor(void);
	BrilliantSponsor(const BrilliantSponsor& _sponsor);
	void operator=(const BrilliantSponsor& _sponsor);
	virtual void Donate(int amount);
	friend std::ostream& operator<<(std::ostream& out,  BrilliantSponsor sponsor);
};

