

#include <iostream>

int random1To10()
{
	return rand() % 10 + 1;
}

int main()
{
	int a1 = random1To10();
	int a2 = random1To10();
	int a3 = random1To10();

		std::cout << a1 << std::endl;
		std::cout << a2 << std::endl;
		std::cout << a3 << std::endl;
}
