#include <iostream>

struct candyBar
{
	std::string name;
	float weight;
	int calories;
};

int main()
{
	candyBar snack[3] =
	{
		{"Snickers", 75.5f, 530},
		{"Mars", 80.0f, 300},
		{"Bounty", 125.75f, 240}
	};

	std::cout << "Name: " << snack[0].name << std::endl;
	std::cout << "Weight: " << snack[0].weight << std::endl;
	std::cout << "Calories: " << snack[0].calories << std::endl;
	std::cout << "Name: " << snack[1].name << std::endl;
	std::cout << "Weight: " << snack[1].weight << std::endl;
	std::cout << "Calories: " << snack[1].calories << std::endl;
	std::cout << "Name: " << snack[2].name << std::endl;
	std::cout << "Weight: " << snack[2].weight << std::endl;
	std::cout << "Calories: " << snack[2].calories << std::endl;


	return 0;
}