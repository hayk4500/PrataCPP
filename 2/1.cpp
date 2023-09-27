#include <iostream>

int main()
{
	const int inchToFootCoeff = 12;
	int inputHeight;
	std::cout << "Enter your height in inches: ___\b\b\b";
	std::cin >> inputHeight;

	int inches, foots;
	foots = inputHeight / inchToFootCoeff;
	inches = inputHeight - (foots * inchToFootCoeff);

	std::cout << "Your height is " << foots << " foots and " << inches << " inches!\n";

	return 0;
}