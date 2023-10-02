#include <iostream>
#include <cstring>

int main()
{
	const int MAX = 30;
	const int MAX2 = 62;
	char fName[MAX], lName[MAX], fullName[MAX2];

	std::cout << "First name: "; std::cin >> fName;
	std::cout << "Last name: "; std::cin >> lName;

	std::strcpy(fullName, lName);
	std::strcat(fullName, ", ");
	std::strcat(fullName, fName);

	std::cout << "String: " << fullName;

	return 0;
}