// Zadanie5.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void drawChessboards1(int h = 8)
{
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                    std::cout << 'o';
                else
                    std::cout << '#';
            }
            else
                if (j % 2 == 0)
                    std::cout << '#';
                else
                    std::cout << 'o';
        }
        std::cout << std::endl;
    }
    }

   
void drawBoard(int a = 8)
    {
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++) 
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
       std::cout << std::endl;
    }

    }


    void drawChessboards2(int size) 
    {
        for (int y = 0; y < size; y++) 
        {
            for (int x = 0; x < size; x++) 
            {
                if ((y % 2) ^ (x % 2))  //wersja z '^' czyli z alternatywa wykluczajaca
                {
                    std::cout << "#";
                }
                else
                {
                    std::cout << "o";
                }
            }

            std::cout << std::endl;
        }

    }

    int main()
    {
    drawChessboards1();
    std::cout << std::endl;
    drawBoard();
    std::cout << std::endl;
        drawChessboards2(20);
        
    }