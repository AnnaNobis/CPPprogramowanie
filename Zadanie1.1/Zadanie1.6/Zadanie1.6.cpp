//Napisz program ktory poda w jaki sposob wyplacic dana kwote korzystajac z mozliwie najmniejszej liczby banknotow i monet.
//  Kwota ma byc pobierana od uzytkownika, zas wynik wyswietlany na ekranie.
// Sprawdzaj czy uzytkownik wprowadza poprawna kwote (do grosza, powyzej zera).

//nominaly: 500,200,100, 50,20, 10
//monety: 5, 2, 1, 0.50, 0.20, 0.10, 0.05, 0.02, 0.01

#include <iostream>
#include <math.h>


void howMany(float value)
{
    float data[15] = { 500.0f, 200.0f, 100.0f, 50.0f, 20.0f, 10.0f, 5.0f, 2.0f, 1.0f, 0.5f, 0.2f, 0.1f, 0.05f, 0.02f, 0.01f}; //kompilator liczbe z . i f widzi jako float inmaczej widzi jako double
    int amount[15];
    int n = 0;

    for (int i = 0; i < 15; i++)
    {
        amount[i] = 0;
    }
    while (value > 0.00)
    {
        if ((value - data[n]) >= 0) //sprawdzamy czy wartosc pozostala do wyplaty jest wieksza niz aktualny nominal,k tory analizujemy 
        {
            amount[n] = static_cast<int> (std::floor (value / data[n])); //floor zaokraglenie w dó³
            value -= amount[n] * data[n];
            value = round(value * 100) / 100; //bo 2 miejsca po przecinku  - najpierw zwiekszamy, zaokraglamy i potem ta zaokraglona zmniejszamy

           // std::cout << value << "" << value / data[n] << std::endl;

        }
        n++;
    }

    for (int i = 0; i < 15; i++)
    {
        std::cout << data[i] << " : " << amount[i] << std::endl;

    }
}
            

int main()
{
    howMany(123.41f);

}




//{
//    float amount = 1410;
//    float tablica[15] = { 500.00, 200.00, 100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01 };
//    float tablicaWynikow[15] = { 0 };
//    for (int i = 0; i < 15; ++i)
//    {
//        int counter = 0;
//
//        while (amount - tablica[i] >= 0)
//        {
//            amount = amount - tablica[i];
//            counter++;
//        }
//
//
//        tablicaWynikow[i] = counter;
//    }
//    for (int i = 0; i < 15; ++i)
//        std::cout << tablicaWynikow[i] << std::endl;
//}