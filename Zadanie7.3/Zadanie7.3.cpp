// Zadanie7.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool czyLiczbaPierwsza(int a)
{
    if (a < 2)
        return false;

    for (int d = 2; d <= sqrt(a); d++)
    {
        if (a % d == 0)
        {
            return false;
        }
    }
    return true;
}
        

int main()
{
    int a = 0;

    std::cout << czyLiczbaPierwsza(-100)<< std::endl;
    std::cout << czyLiczbaPierwsza(0) << std::endl;
    std::cout << czyLiczbaPierwsza(1) << std::endl;
    std::cout << czyLiczbaPierwsza(7) << std::endl;
}

