// Zadanie4.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


std::string funName(std::string word)
{
    if (word.size() > 6)
        //replace (poczatek zmiany, ile znakow zmieniamy, tekst na kt�ry zmieniamy)
        return word.replace(2, 4, "ABCD");
    else
        return "Ciag jest zbyt krotki";
}

int main()
{
    std::string word = "Ala Ma Kota AKotMaAl�";
    std::cout << funName(word);
    std::cout << std::endl;
    std::cout << funName("Maja");
}