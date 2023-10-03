#include <iostream>
#include <string>

struct pizza
{
	std::string prod;
	float diametr;
	float weight;
};

int main()
{
	pizza p;
	std::cout << "Pizza manufactoring in: "; std::getline(std::cin, p.prod);
	std::cout << "Diameter of pizza: "; std::cin >> p.diametr;
	std::cout << "Weight of pizzs: "; std::cin >> p.weight;

	std::cout << "Prod: " << p.prod << std::endl;
	std::cout << "Diametr: " << p.diametr << std::endl;
	std::cout << "Weight: " << p.weight << std::endl;

	return 0;
}