
#include <iostream>
#include <cmath>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;


	std::cout << "Podaj trzy liczby:" << std::endl;
	std::cin >> a;
	std::cin >> b; 
	std::cin >> c;

	if (a>b && a>c)
	{
		std::cout << "Najwiêksza liczba to:" << a << std::endl;
	}
	if (b > a && b > c)
	{
		std::cout << "Najwieksza liczba to:" << b << std::endl;
	}
	else
	{
		std::cout << "Najwiêksza liczba to:" << c << std::endl;
	}

}
