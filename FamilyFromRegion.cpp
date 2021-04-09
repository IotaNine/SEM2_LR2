#include "Family.h"
#include "Region.h"
#include "FamilyFromRegion.h"
#include <iostream>

FamilyFromRegion::FamilyFromRegion(std::string& _Fname, unsigned int _n, int _income, std::string& _Rname, int _payment, int _treshold)
	: Family(_Fname, _n, _income), Region(_Rname, _payment, _treshold)
{
	std::cout << "Object created" << std::endl;
}

double FamilyFromRegion::APCI()
{
	if (Family::APCI() > treshold)
	{
		return Family::APCI();
	}
	else
	{
		return Family::APCI() + (payment / n);
	}
}

void FamilyFromRegion::PrintInfo()
{
	Region::PrintInfo();
	Family::PrintInfo();
}
