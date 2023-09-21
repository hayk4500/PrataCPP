#include <iostream>

double LightYearToAstroUnit(float);

int main()
{
	float lightYears;
	double astroUnits = 0;
	std::cout << "Enter the number of light years: ";
	std::cin >> lightYears;
	astroUnits = LightYearToAstroUnit(lightYears);
	std::cout << lightYears << " light years = " << astroUnits << " astronomical units\n";

	return 0;
}

double LightYearToAstroUnit(float year)
{
	double units = year * 63240;
	return units;
}