// Zadanie2.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


bool checkString(std::string number)
{
    bool result = true;

    for (int i = 0; i < number.length(); i++)
    {
        if (!(number[i] >= '0' && number[i] <= '9'))
        {
            result = false;
        }
    }
    return result;
}

int main()
{

    std::string number;
    std::cout << "Podaj number telefonu: " << std::endl;
    std::cin >> number;
    int numOfFigures = number.length();
    bool checkNum = checkString(number);

    if (numOfFigures == 8 && number[0] != '0' && checkNum == true)
    {
        std::cout << "Numer telefonu jest poprawny.";
    }
    else
    {
        std::cout << "Telefon jest b³êdny.";
    }







//bool checkPhoneNumber(int number)
//{
//    int numOfDigits = 0;
//
//    while (number != 0)
//    {
//        number = number / 10;
//        numOfDigits++;
//    }
//    if (numOfDigits == 8)
// {
//        return 1;
//        }
//    else
//    {
//        return 0;
//    }
//}
//
//int main()
//{
//    int number = 0;
//    std::cout << "Podaj numer telefonu: ";
//    std::cin >> number;
//    std::cout << std::boolalpha << checkPhoneNumber(number);
//}