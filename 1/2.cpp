#include <iostream>

int main()
{
	float farlong;
	double yard = 0;
	std::cout << "Enter farlong amount: ";
	std::cin >> farlong;
	yard = farlong * 220;
	std::cout << "In yards is: " << yard << std::endl;

	return 0;
}