
#include <iostream>

bool czyLiczbaPierwsza(int n)
{
    if (n < 2)
        return false;

    for (int d = 2; d <= sqrt(n); d++)
    {
        if (n % d == 0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    int n = 7;
    int l = 0; // ta zmienna przechowuje kolejne wartosci sprawdzanych liczb naturalnych

    for (int i = 0; i < n; ) // ta petla bedzie dzialac az znajdzie n liczb pierwszych
    {
        if (czyLiczbaPierwsza(l))
        {
            i++;
                std::cout << l << std::endl;
        }
        l++;
    }

}

