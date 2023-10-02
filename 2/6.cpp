#include <iostream>

int main()
{
	float km, litr;
	std::cout << "Enter driving kilometers: "; std::cin >> km;
	std::cout << "Enter used litres of fuel: "; std::cin >> litr;
	double litrPerKm = (100 * litr) / km;
	std::cout << "Fuel expensive per 100km: " << litrPerKm;

	return 0;
}