// Zadanie5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Zadanie5_1Solution.h"
#include <iostream>


int main()
{
    const int n = 20;
    int num[n];

    for (int i = 0; i < n; i++)
    {
        num[i] = rand() % 10 + 1;
    }

    taskA(num, n);
    taskB(num, n);
    taskC(num, n);
    taskD(num, n);
    taskE(num, n);
    taskF(num, n);
    taskG(num, n);
    taskH(num, n);
    taskI(num, n);
}

