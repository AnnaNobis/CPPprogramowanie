// Zadanie5.3 Napisz funkcjê, która zamienia wiersze z kolumnami danej tablicy (transponuje)i wypisuje tak transponowan¹ nowoutworzon¹ tablicê.


#include <iostream>

void transpose3x3Arrey(int tab[][3])
{
    int result[3][3];

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            result[i][j] = tab[j][i];
            std::cout << result[i][j] << "; ";
        }
        std::cout << std::endl;
    }
}


int main()
{
    int tab[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

    transpose3x3Arrey(tab);
}

