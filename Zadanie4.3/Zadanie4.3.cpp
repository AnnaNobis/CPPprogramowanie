// Zadanie4.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctype.h>
#include <string>

bool checkFirstCountryChar (std::string countryName)
{
    char firstChar = '0';
    firstChar = countryName.front();

    if (isupper (firstChar))
    {
        return 1;
   }
    return 0;
    
}

int main()
{
    std::cout <<  checkFirstCountryChar ("Polska")<< std::endl;
    std::cout << checkFirstCountryChar("polska")<< std::endl;
}

