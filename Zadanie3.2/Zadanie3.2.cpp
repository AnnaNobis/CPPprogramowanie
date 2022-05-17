// Zadanie3.2.cpp : robimy z zadania 2.7
//
#include "Functions.h"
#include <iostream>

int main()
{
    // int power

    std::cout << power(3, -1) << std::endl;
    std::cout << power(3, 0) << std::endl;
    std::cout << power(3, 1) << std::endl;
    std::cout << power(3, 2) << std::endl;
    std::cout << power(3, 4) << std::endl;

    //float power

    std::cout << power(3.5f, -1.0f) << std::endl;
    std::cout << power(3.5f, 0.0f) << std::endl;
    std::cout << power(3.5f, 2.0f) << std::endl;
    std::cout << power(3.5f, 4.0f) << std::endl;


    //double power
    std::cout << power(3.5, -1.0) << std::endl;
    std::cout << power(3.5, 0.0) << std::endl;
    std::cout << power(3.5, 2.0) << std::endl;
    std::cout << power(3.5, 4.0) << std::endl;

}

