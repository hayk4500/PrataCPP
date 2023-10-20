#include <iostream>

int main()
{
	int num1, num2, sum = 0;
	std::cout << "Enter two numbers: "; std::cin >> num1 >> num2;
	
	for (int i = num2; i >= num1; i--)
	{
		sum += i;
	}

	std::cout << "Result add numbers between: " << sum;

	return 0;
}