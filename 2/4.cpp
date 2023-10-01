#include <iostream>

int main()
{
	const int HID = 24;
	const int MIH = 60;
	long long inSec;
	std::cout << "Enter total seconds: "; std::cin >> inSec;
	int days = inSec / (MIH * MIH * HID);
	int temp = inSec - (days * MIH * MIH * HID);
	int hours = temp / (MIH * MIH);
	temp -= hours * MIH * MIH;
	int mins = temp / MIH;
	temp -= mins * MIH;
	int outSec = temp;
	std::cout << "Days: " << days << " Hours: " << hours << " Minutes: " << mins << " Seconds: " << outSec;

	return 0;
}