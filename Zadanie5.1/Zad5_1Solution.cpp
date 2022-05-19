#include "Zadanie5_1Solution.h"
#include <iostream>

void taskA(int num[], int size)
{
	std::cout << "A: " << std::endl;

	for (int i = 0; i < size; i++)
	{
		//std::cout << num[i] << std::endl;
		std::cout << num[i] << "; "; //wersja w jednej linii
		
	}
	std::cout << std::endl;
}



	void taskB(int num[], int size)
	{
		std::cout << "B: " << std::endl;

		for (int i = size - 1; i >= 0; i--)
		{
			//std::cout << num[i] << std::endl;
			std::cout << num[i] << "; "; //wersja w jednej linii
		}
		std::cout << std::endl;
	}

	void taskC(int num[], int size)
	{
		std::cout << "C: " << std::endl;
		for (int i = 1; i < size; i += 2) //zaczynamy od 1 bo wyszukujemy nieparzyste pozycje
		{
			//std::cout << num[i] << std::endl;
			std::cout << num[i] << "; ";
		}
		std::cout << std::endl;
	}

	void taskD(int num[], int size)
	{
		std::cout << "D: " << std::endl;
		for (int i = 0; i < size; i += 3) //zaczynamy od 1 bo wyszukujemy nieparzyste pozycje
		{
			std::cout << num[i] << "; ";
		}
		std::cout << std::endl;
	}

	void taskE(int num[], int size)
	{
		std::cout << "E: " << std::endl;
		int sum = 0;

		for (int i = 0; i < size; i++) 
		{
		 sum += num[i];

		}

		std::cout <<sum <<  std::endl;
		std::cout << std::endl;

	}

	void taskF(int num[], int size)
	{
		std::cout << "F: " << std::endl;
		int sum = 0;

		for (int i = size -5; i < size; ++i) // od indeksu nr 15 bo ostatnich 5 a 20 pozycja to 19 indeks
		{
			if (num[i] > 3)
			{
				sum += num[i];
			}
		}

		std::cout << sum << std::endl;
		std::cout << std::endl;

	}


	void taskG(int num[], int size)
	{
		std::cout << "G: " << std::endl;
		int sum = 0;
		int DigitCounter = 0;

		for (int i = 0; i < size; i++)
		{
			if (sum <= 10)
			{
				sum += num[i];
				DigitCounter++;
			}
		}
		std::cout << DigitCounter << std::endl;
	}


	void taskH(int num[], int size) // do domu

	{
		std::cout << "H: " << std::endl;
		int n = 0;
		std::cout << "Podaj liczbe n (co ktora liczbe wyswietlac): " << std::endl;
		std::cin >> n;
		for (int i = 0; i < size; i += n)
		{
			std::cout << num[i] << "; ";
		}
		std::cout << std::endl;
	}



	void taskI(int num[], int size) // do domu wyslac ze zrobione na slack
	{
		std::cout << "I: " << std::endl;
		int m = 0;
		std::cout << "Podaj liczbe m (dzielnik): " << std::endl;
		std::cin >> m;
		for (int i = 0; i < size; i++)
		{
			if (num[i] % m == 0)
			{
				std::cout << num[i] << "; ";
			}
			std::cout << std::endl;
		}

	}
