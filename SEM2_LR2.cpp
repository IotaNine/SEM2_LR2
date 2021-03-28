#include <iostream>
#include <string>
#include "Family.h"
#include "Region.h"
#include "FamilyFromRegion.h"

int main()
{
	std::string FamilyOne = "Joestar", FamilyTwo = "Brando", RegionOne = "Mondstadt";
	/*Family Jojo(FamilyOne, 4, 200000);
	Family Dio(FamilyTwo, 2, 20000);
	Region City(RegionOne, 25000, 20000);*/
	FamilyFromRegion A(FamilyOne, 4, 360000, RegionOne, 2000, 5000);
	FamilyFromRegion B(FamilyTwo, 2, 24000, RegionOne, 2000, 5000);
	A.PrintInfo();
	std::cout << "APCI for A: " << A.APCI() << std::endl;
	B.PrintInfo();
	std::cout << "APCI for B: " << B.APCI() << std::endl;
}