// Zadanie4.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

//std::string convertCarArrayToString(char cTab[], int a)
//{
//    std::string str;
//
//    for (int i = 0; i < a; i++)
//    {
//        str += cTab[i];
//
//    }
//    return str
//}
//
//int main()
//{
//    char cTab1D[10] = "123456789";
//    char cTab[5][5] = {"abcd", "asdf", "qwrt", ""}
//
//}


//gdy przekazujemy tablice dwuwymiarowe musimy podaæ drugi wymiar
std::string convertCarArrayToString(char cTab[][5], int a, int b)
{
    std::string str;

    for (int i = 0; i < a; i++) //tutaj przechodzimy po wierszach
    {
        for (int j = 0; j < b; i++)
        {
            //std::cout <<cTab[i][j];
            str += cTab[i][j];
        }
        str += '\n';
    }
    return str;
}

int main()
{
    char cTab1D[10] = "123456789";
    char cTab[5][5] = { "abcd", "asdf", "qwrt", "asdp" };

    std::cout << convertCarArrayToString(cTab1D, 10);
    std::cout << convertCarArrayToString(cTab, 4, 7);

}
