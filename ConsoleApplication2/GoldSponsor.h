#pragma once
#include "sponsor.h"
class GoldSponsor : public Sponsor
{
	static const double donateFactor;
public:
	GoldSponsor(std::string _name, int _experience) : Sponsor(_name, _experience) {};
	~GoldSponsor(void);
	virtual void Donate(int amount);
	friend std::ostream& operator<<(std::ostream& out,  GoldSponsor sponsor);
};

