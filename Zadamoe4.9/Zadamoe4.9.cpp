// Zadamoe4.9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

std::string concatenateStrings (std::string s[], char c)
{
    //metoda size() albo length() odnosi sie do klasy string i jest uzywana na obiektach tejze klasy!!! 
    //ta metoda zwraca dlugosc stringa, a nie wielkosc tablicy typu string
    //w zwiazku z powyzszym nie ma ona wplywu na tablice klasy string
   // std::cout << s.size() << std::endl;// metoda size NIE dziala na tablicy typu string
    std::cout << s[0].size() << std::endl; //metoda size DZIALA na obiekcie typu string
    std::cout << s[0][0] << std::endl; // s[0][0] w taki sposob odnosimy sie do konkretnego chara z danego stringu

    return "test";
}

int main()
{
    const int len = 3;
    std::string s[len] = { "Ala", "ma", "kota" };

    std::cout << sizeof(s) << std::endl;
    std::cout << sizeof(s[0]) << std::endl;
  
    std::cout << concatenateStrings(s, 'c');

  
}



//std::string concatenateStrings(std::string s[], char c)
//{
//
//    std::string str;
//
//    for (int i = 0; i < len; ++i)
//    {
//        str +=
//    }
//
//}
//
//int main()
//{
//    const int len = 5;
//    std::string s[len] = { "Ala", "ma", "kota", "ha", "ha" }
//    char c = '';
//    std::cout << concatenateStrings
//
//}



//#include <iostream>
//#include <string>
//
//int sizeOfArray(std::string str[])
//{
//    int arrSize = 0;
//    arrSize = sizeof(str) / sizeof(str[0]);
//    return arrSize;
//}
//
//std::string mergeString(std::string str[], char c, int arrSize)
//{
//    std::string mergedString = {};
//
//    for (int i = 0; i < arrSize; ++i)
//    {
//        if (i != arrSize - 1)
//        {
//            mergedString += str[i] + c;
//        }
//        else
//        {
//            mergedString += str[i];
//        }
//        //std::cout << str[i] << std::endl;
//        //std::cout << mergedString << std::endl;
//    }
//    return mergedString;
//}
//
//int main()
//{
//
//    //std::string str[3] = {"tata", "mama", "syn"};
//    std::string str[4] = { "tata", "mama", "syn", "corka" };
//
//    int arrSize = 0;
//    arrSize = sizeof(str) / sizeof(str[0]);
//    std::cout << "Rozmiar tablicy stringow wynosi: " << arrSize << std::endl;
//
//    std::cout << mergeString(str, '+', arrSize);
//    std::cout << std::endl;