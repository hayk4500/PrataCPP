#include <iostream>

int main()
{
	const int COE = 60;
	double degree, min, sec;
	std::cout << "Enter degree, min and sec: ";
	std::cin >> degree >> min >> sec;
	double decDegree = degree + (min / COE) + (sec / COE);
	std::cout << "Decimal degree is: " << decDegree << std::endl;

	return 0;
}