

#include <iostream>

int main()
{
    int l = 0;
    std::cin >> l;

    if (l % 2) // kiedy w warunku otrzymamy 0 to oznacza false, a gdy 1 true
    {
        std::cout << "Liczba jest nieparzysta\n";

    }
    else
    {
        std::cout << "Liczba jest parzysta" << std::endl;

    }
  
}
