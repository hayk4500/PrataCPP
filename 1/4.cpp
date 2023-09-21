#include <iostream>

int main()
{
	int age;
	int months = 0;

	std::cout << "Enter your age: ";
	std::cin >> age;
	months = age * 12;
	std::cout << "Your age in months is " << months << std::endl;

	return 0;
}