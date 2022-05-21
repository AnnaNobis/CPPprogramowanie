// Zadanie5.7wersja2na2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void drawBoard2x2(int a = 8)
{
    for (int i = 0; i < a; i++)
    {
        for (int m = 0; m < 2; m++) // zdublowane ¿eby nasze pole zajmowa³o 2 miejsca w pionie
        {
            for (int j = 0; j < a; j++)
            {
                for (int k = 0; k < 2; k++)// zdublowane ¿eby nasze pole zajmowa³o 2 miejsca w poziomie
                {
                    if ((i + j) % 2 == 0)
                    {
                        std::cout << "#";
                    }
                    else
                    {
                        std::cout << "o";
                    }
                }
            }
            std::cout << std::endl;
        }
    }

}


int main()
{
  
    drawBoard2x2();
    std::cout << std::endl;
    

}