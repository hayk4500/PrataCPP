#include <iostream>
#include <string>

int main()
{
	std::string fName, lName, fullName;
	std::cout << "First name:"; std::cin >> fName;
	std::cout << "Last name: "; std::cin >> lName;
	fullName = lName + ", " + fName;
	std::cout << "String: " << fullName;

	return 0;
}