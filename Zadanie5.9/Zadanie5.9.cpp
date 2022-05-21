// Zadanie5.9.cpp : Napisz funkcjê, która dla tablic dwuwymiarowych typu char, bêdzie
//odwracaæ ich kolejnoœæ(element[0, 0] zamienia siê z elementem  ostatnim,
 // element[0, 1] zamienia siê z przedostatnim itd.

#include <iostream>
#include <algorithm>
#include <array>
#include <string>
#include <math.h>

//std::swap(word.front(), word.back());
   // return word;

    /*std::swap(front(), back())
    {
        char nowy[5][5]{};
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                nowy[i][j] = tab[5 - i - 1][5 - j - 1];
                std::cout << nowy[i][j];
            }
        } std::cout << std::endl;

}*/

//void CharChangePlaces(char tab[|][5])
//{
//     char nowy[5][5]{};
//    for (int i = 0; i < 5; i++)
//    { 
//        for (int j = 0; j < 5; j++)
//        {
//         nowy[i][j] = tab[5- i-1][5-j-1];
//         std::cout << nowy[i][j];
//        }
//    }std::cout << std::endl;
//}
//
//
//int main()
//{
//    const int size = 5;
//    char tab[size][size] =
//    { { 'a','b','c','d','e'},
//    {'f','g','h','i','j'},
//    {'k','l','m','n','o'},
//    {'p','r','s','t','u'},
//    {'w','y','z', 'q','x'}};
//    
// CharChangePlaces(tab);
//    
//  
//}

void revertCharArrayV2(char tab[][3])
{
    int rM = ceil(3 / 2.0);

    for (int i = 0; i < rM; ++i)
    {
        if (i ==rM)
        { 
        for (int j = 0; j < rM; ++j)
        {
           
            std::swap(tab[i][j], tab[3 - i - 1][3 - j - 1]);
        }
      
    }
        else
        {
            for (int j = 0; j < 3; ++j)
            {
                std::swap(tab[i][j], tab[3 - i - 1][3 - j - 1]);

            }
        }
}

void revertCharArray(char tab[][3])
{
    char findings[3][3];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            findings[i][j] = tab[3 - i - 1][3 - j - 1];
            std::cout << findings[i][j];
        }
        std::cout << std::endl;
    }

}
int main()
{
    const int size = 3;
    char tab[size][size] =
    { {'a', 'b', 'c'},
      {'d', 'e', 'f'},
      {'*', '#', '$'} };

    revertCharArray(tab);
    std::cout << std::endl;
    revertCharArrayV2(tab);
}