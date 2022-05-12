
#include <iostream>
#include <time.h>

int main()
{
    srand (time(NULL)); //funkcja "srand" zmienia ziarno losowania

    float num = 0.0f;
    

    do
    {
        num = rand() / 10000.0f;
 std::cout << num << std::endl;
    }

    while (num >= 0.3f); //az do uzyskania liczby mniejszej od 0.03

      
}

