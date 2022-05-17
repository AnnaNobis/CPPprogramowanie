#include "Functions.h"
#include <iostream>
#include <iomanip>
#include <math.h>


void printDoubleNumber(double d) //123.456
{
    if (d < 0.0) //sprawdzamy czy liczba jest uemna, jesli tak to przekszta³camy na dodatni¹
    {
        std::cout << '-';
        d *= -1.0; //przemna¿amy razy -1 ¿eby mieæ wartoœæ dodatni¹
    }


    //123
    int a = static_cast<int>(d); //czesc calkowita jest wyciagnieta z double'a
   //.456 (bo 123.456-123.00)
    double b = d - a; //czesc po przecinku/kropce
    int n1 = 1; //liczba cyfr czesci calkowitej



    while (a > 9) //zliczamy ile jest cyfr w czesci calkowitej. robimy to bo nie jestesmy w stanie ich wyswietlic od lewej do prawej od razu
    {
        a /= 10;
        n1++;
    }

    a = static_cast<int>(d); //odswiezamy wartosc bo wczesniej przez dzielenie ja wyzerowalismy

    for (int i = 0; i < n1; i++)
    {
        //tutaj wyciagamy kolejne cyfry z czesci calkowitej, oczywiscie od lewej do prawej
        //123
        //123/100 -> 1
        //23/10 -> 2
        //3/1 -> 3
        //rozwiazanie polega na dzieleniu przez odpowiedni¹ potêgê 10
        int p = static_cast<int> (pow(10, n1 - i - 1)); //rzutujemy bo pow zwraca double
        int c = a / p;
        a -= c * p;

        std::cout << c;
    }

    std::cout << '.';

    //.456 * 10 = 4.56 -> 4
    //(4.56 - 4) * 10 = 5.6 -> 5

    do
    {
        b *= 10;
        std::cout << static_cast<int>(b);
        int c = static_cast<int>(b);
        b -= c;
    } while (b > 0.0);

}