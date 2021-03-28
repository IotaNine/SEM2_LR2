#pragma once
#include <string>

class Family
{
public:
	std::string Fname;
	unsigned int n;
	int income;
	Family();
	Family (std::string& _Fname, unsigned int _n, int _income);
	double APCI();  //avereage per capito income
	void PrintInfo();
};