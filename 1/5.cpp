#include <iostream>

float CelToFah(float);

int main()
{
	float celsium, fahrenheit = 0;
	std::cout << "Please enter a Celsium value: ";
	std::cin >> celsium;
	fahrenheit = CelToFah(celsium);
	std::cout << celsium << " degrees Celsium is " << fahrenheit << " degrees Fahrenheit\n";

	return 0;
}

float CelToFah(float cel)
{
	float fah = (1.8 * cel) + 32;
	return fah;
}