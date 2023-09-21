#include <iostream>

void ShowTime(int, int);

int main()
{
	int hours, minutes;
	std::cout << "Enter the number of hours: ";
	std::cin >> hours;
	std::cout << "Enter the number of minutes: ";
	std::cin >> minutes;
	ShowTime(hours, minutes);

	return 0;
}

void ShowTime(int hour, int min)
{
	std::cout << "Time: " << hour << ":" << min;
}