#pragma once
#include <string>
class Region
{
public:
	std::string Rname;
	int payment;  //payment per family
	int treshold;  //limit
	Region();
	Region(std::string& _Rname, int _payment, int _teshold);
	void PrintInfo();
};