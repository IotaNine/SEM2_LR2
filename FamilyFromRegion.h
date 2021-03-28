#pragma once
#include "Family.h"
#include "Region.h"
#include <iostream>

class FamilyFromRegion : public Family, public Region
{
public:
	FamilyFromRegion(std::string& _Fname, unsigned int _n, int _income, std::string& _Rname, int _payment, int _treshold);
	double APCI();
	void PrintInfo();
};

