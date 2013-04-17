#pragma once
#include "Sponsor.h"
class GoldSponsor : public Sponsor
{
	static const double donateFactor;
public:
	GoldSponsor(std::string _name, int _experience) : Sponsor(_name, _experience) {}
	~GoldSponsor(void);
	GoldSponsor(const GoldSponsor& _sponsor);
	void operator=(const GoldSponsor& _sponsor);
	virtual void Donate(int amount);
	friend std::ostream& operator<<(std::ostream& out,  const GoldSponsor& sponsor);
  virtual std::ostream& Print(std::ostream& out);
};

