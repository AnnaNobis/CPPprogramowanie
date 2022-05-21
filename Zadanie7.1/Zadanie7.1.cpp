// Zadanie7.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int NWD(int a, int b)
{
  
    if (a == b)
        return a;

    if (a % b == 0)
        return b;

    if (b % a == 0)
        return a;

    int nwd = 1;

    if (a > b)
    {
        //10/2=5
        //11/2=5

        for (int i = 2; i <= b / 2; ++i)
        {
            if (a % i == 0 && b % i == 0)
            {
                nwd = i;
            }

        }

    }

    else
    {
        for (int i = 2; i <= a / 2; ++i)
        {
            if (a % i == 0 && b % i == 0)
            {
                nwd = i;

            }
        }
    }
    return nwd;
}

int NWW(int a, int b)
{
    int result = (a * b) / NWD(a, b);
    return result;
}

int main()
{
    std::cout <<NWD(2, 10)<< std::endl;
    std::cout << NWD(10, 24) << std::endl;
    std::cout << NWD(100, 100) << std::endl;
    std::cout << NWD(18, 24) << std::endl;

    std::cout << NWW(2, 10) << std::endl;
    std::cout << NWW(10, 24) << std::endl;
    std::cout << NWW(100, 100) << std::endl;
    std::cout << NWW(18, 24) << std::endl;

}

