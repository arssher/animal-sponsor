#pragma once

#include "AnimalList.h"
#include <string>;
#include <cstdio>;

class Sponsor
{
	char* name;
	AnimalList animals;
	int experience;
public:
	Sponsor(void);
	~Sponsor(void);
};

