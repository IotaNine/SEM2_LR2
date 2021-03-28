#include "Region.h"
#include <iostream>

Region::Region() : Rname("0"), payment(0), treshold(0)
{
	std::cout << "Region " << Rname << " created" << std::endl;
}

Region::Region(std::string& _Rname, int _payment, int _treshold) : Rname(_Rname), payment(_payment), treshold(_treshold)
{
	std::cout << "Region " << Rname << " created" << std::endl;
}

void Region::PrintInfo()
{
	std::cout << "<<Region " << Rname << " info>>" << std::endl;
	std::cout << "Payment: " << payment << std::endl << "Treshold: " << treshold << std::endl;
}