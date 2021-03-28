#include "Family.h"
#include <iostream>

Family::Family() : Fname("0"), n(0), income(0)
{
	std::cout << "Family " << Fname << " created" << std::endl;
}

Family::Family(std::string& _Fname, unsigned int _n, int _income) : Fname(_Fname), n(_n), income(_income)
{
	std::cout << "Family " << Fname << " created" << std::endl;
}

double Family::APCI()
{
	return income / (12 * n);
}

void Family::PrintInfo()
{
	std::cout << "<<Family " << Fname << " info>>" << std::endl;
	std::cout << "Members: " << n << std::endl << "Income: " << income << std::endl;
}