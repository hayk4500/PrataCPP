#include <iostream>

int main()
{
	const int FTOIC = 12;
	const float ITOMC = 0.0254f;
	const float FTOKGC = 2.2f;

	int foots, inches; float lb;
	std::cout << "Enter foots: "; std::cin >> foots;
	std::cout << "Enter inches: "; std::cin >> inches;
	std::cout << "Enter lb: "; std::cin >> lb;

	int inchHeight = (foots * FTOIC) + inches;
	float meterHeight = inchHeight * ITOMC;
	float massKG = lb / FTOKGC;
	float BMI = massKG / (meterHeight * meterHeight);

	std::cout << "BMI: " << BMI << std::endl;
	return 0;
}