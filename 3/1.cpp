#include <iostream>
#include <string>

struct person
{
	std::string fName;
	std::string lName;
	char grade;
	int age;
};

int main()
{
	person p;
	std::cout << "First name: "; std::getline(std::cin, p.fName);
	std::cout << "Last name: "; std::getline(std::cin, p.lName);
	std::cout << "Grade: "; std::cin >> p.grade;
	std::cout << "Age: "; std::cin >> p.age;
	p.grade++;

	std::cout << "Name: " << p.lName << ", " << p.fName << std::endl;
	std::cout << "Grade: " << p.grade << std::endl;
	std::cout << "Age: " << p.age << std::endl;

	return 0;
}