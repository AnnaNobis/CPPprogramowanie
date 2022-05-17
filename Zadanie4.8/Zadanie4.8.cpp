// Zadanie4.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

std::string changeLastCharWithFirst (std::string word)
{
    std::swap(word.front(), word.back());
    return word;
}

int main()
{

    std::cout << changeLastCharWithFirst("Test");
    std::cout << std::endl;
    std::cout << changeLastCharWithFirst("Bajka");
    std::cout << std::endl;
}
