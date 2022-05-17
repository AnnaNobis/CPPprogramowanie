// Zadanie4.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string toLowerCase(std::string str)
    {
        for (int i = 0; i < str.size(); i++)
        {
            str.at(i) = std::tolower(str.at(i));
        }
        return str;
    }

