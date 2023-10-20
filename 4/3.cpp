#include <iostream>

int main()
{
	int num, res = 0;

	std::cout << "Enter numbers until you die:\n";

	do
	{
		std::cout << "Enter: "; std::cin >> num;
		res += num;
		std::cout << "Now result is: " << res << std::endl;
	} while (num != 0);
}