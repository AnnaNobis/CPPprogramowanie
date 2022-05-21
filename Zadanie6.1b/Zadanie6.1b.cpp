
#include <iostream>


//zapisuj¹c tablice 2-wymiarowa jako char* argv[] uzyskujac mozliwosc przekazania takiej tablicy o dowolnych wymiarach
int main(int argc, char* argv[])
{
    //argc zawsze bedzie miec wartosc >=1 bo jako pierwszy argument podawana jest nazwa programu!!!
    std::cout << "You have entered " << argc << "arguments: " << "\n";

    for (int i = 0; i < argc; ++i)
        std::cout << argv[i] << "\n"; //argv[i] pobiera tablice 1-wymiarowa. taka tablica stanowi pojedynczy argument

    int sum = 0;
    //zak³adamy ¿e u¿ytkownik podaje tylko 1 cyfre w argumencie
    //liczba argumentow jest dowolna
    for (int i = 1; i < argc; ++i)
    {
        //argv[i] -> i-ty argument uzytkowanika. jest to tablica char
        //argv[i][0] ->dostajemy sie do pierwszego znaku i-tego argumentu u¿ytkownika
        std::cout << static_cast<int>(argv[i][0]); //static_cast u¿ywamy na konkretnym typie, nie na tablicy

        //argv[i][0] -> to zwroci mi pojedynczy char
        //argv[i][0] -'0' -> to wykona mi konwersje z chara na konkretna wartosc
        //argv[i][0] -'0' -> w tym momentcie char z argv jest zamieniany niejawnie na int, '0'  rowniez zamieniane jest niejawnie na int , a nastepnie operacja odejmowania
    
        sum += argv[i][0] - '0';

    }
    std::cout << sum;
}

