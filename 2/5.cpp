#include <iostream>

int main()
{
	long long earthPop, countryPop;
	std::cout << "Enter the Earth population: "; std::cin >> earthPop;
	std::cout << "Enter the Russia population: "; std::cin >> countryPop;
	double procentage = ((double)countryPop / (double)earthPop) * 100;
	std::cout << "Procentage of population: " << procentage << "%";

	return 0;
}