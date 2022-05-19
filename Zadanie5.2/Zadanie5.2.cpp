// Zadanie5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int main()
{
	int n = 1;
	const int size = 10;
	double tab[size][size];


	for (int i = 0; i < size; ++i)
	{

		for (int j = 0; j < size; ++j)
		{
			tab[i][j] = n;
			n++;
		}
	}

		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				std::cout << tab[i][j] << " ";
			}
		}
		std::cout << std::endl;

	
}


