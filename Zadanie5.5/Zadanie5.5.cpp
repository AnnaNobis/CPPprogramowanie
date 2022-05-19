// Zadanie5.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void drawFigureA(int l)
{
	for (int i = 0; i < l; ++i) //przechodzenie po wierszach

	{
		for (int j=0; j <= i; ++j) //liczba wykonan petli zagniezdzonej jest zalezna od aktualnej wartosci i
		{
			std::cout << '*'; //rysujemy pojedyncza gwiazdke

		}
		std::cout << std::endl; // ponarysowaniu w danym wierszu przechodzimy do nastepnego wiersza
	}

}

void drawFigureB(int l) //rysowanie * po przekatnej
{
	for (int i = 0; i < l; ++i)
	{
		for (int j = 0; j <= i; ++j) //albo j=1 albo j<i
		{
			std::cout << '*';

		}
		std::cout << '*' << std::endl;
	}
}

void drawFigureC(int l) //rysowanie * po kwadracie
{
	for (int i = 0; i < l; ++i)
	{
		for (int j = 0; j < l; ++j)
		{
			if (i == 0 || i == l - 1 || j == 0 || j == l - 1)
			{
				std::cout << '*';
			}
			else
			{
				std::cout << ' ';
			}
		}
		std::cout << std::endl;
	}
}

void drawFigureD(int l) // rysowanie iksa *
{
	for (int i = 0; i < l; i++)
	{
			for (int j = 0; j < l; j++) 
			{
				if (j == i || j == l - i-1)
				{
					std::cout << '*';
				}
				else 
				{
					std::cout << ' ';
				}
			}
			std::cout << std::endl;
		
	}

}



int main()
{
	drawFigureA(10);
	std::cout << std::endl;
drawFigureB(10);
std::cout << std::endl;
drawFigureC(10);
std::cout << std::endl;
drawFigureD(10);

}

