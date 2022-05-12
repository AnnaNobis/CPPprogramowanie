
#include <iostream>

int main()
{
	int a = 0;
	
	std::cout << "Podaj liczbe:\n";
	std::cin >> a;

	if (a > 0)
	{
		std::cout << "Liczba jest wieksza od 0." << std::endl;
	}

	if (a < 0)
	{
		std::cout << "Liczba jest mniejsza od zera" << std::endl;

		}

		else
		{
			std::cout << "Liczba jest równa 0" << std::endl;

		}
}

