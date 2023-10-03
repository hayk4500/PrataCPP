#include <iostream>
#include <array>

int main()
{
	std::array<int, 3> runResult;
	std::cout << "Enter run result #1: "; std::cin >> runResult[0];
	std::cout << "Enter run result #2: "; std::cin >> runResult[1];
	std::cout << "Enter run result #3: "; std::cin >> runResult[2];

	float avg = ((float)runResult[0] + (float)runResult[1] + (float)runResult[2]) / 3;

	std::cout << "Run result #1: " << runResult[0] << std::endl;
	std::cout << "Run result #2: " << runResult[1] << std::endl;
	std::cout << "Run result #3: " << runResult[2] << std::endl;
	std::cout << "Average: " << avg << std::endl;

	return 0;
}