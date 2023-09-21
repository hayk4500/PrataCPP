#include <iostream>

void GenText1();
void GenText2();

int main()
{
	GenText1();
	GenText1();
	GenText2();
	GenText2();

	return 0;
}

void GenText1()
{
	std::cout << "Three blind mice\n";
}

void GenText2()
{
	std::cout << "See how they run\n";
}