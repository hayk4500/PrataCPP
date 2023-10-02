#include <iostream>

struct candyBar
{
	std::string name;
	float weight;
	int calories;
};

int main()
{
	candyBar snack{ "Moncha Munch", 2.3, 350 };
	std::cout << "Name: " << snack.name << std::endl;
	std::cout << "Weight: " << snack.weight << std::endl;
	std::cout << "Calories: " << snack.calories << std::endl;

	return 0;
}