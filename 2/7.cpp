#include <iostream>

int main()
{
	float lpk, mpg;
	const float lpg = 3.785f;
	const float kmpm = 1.609f;
	std::cout << "Enter the LPK: "; std::cin >> lpk;
	mpg = (100 * lpg) / (kmpm * lpk);
	std::cout << "MPG is: " << mpg;

	return 0;
}