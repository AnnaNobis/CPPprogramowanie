// Zadanie2.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>

float roundFunction(float number, int n)
{
    float num = 0;

    int a = 0;
    a = pow(10, n);
    num = round(number * a) / a; // num = 12454/1000 = 12.453
    return num;
}

int main()
{
    double numberF = 12.4543645;
    float number = 12.4543645;
    int n = 0;
    n = 2;
    std::cout << std::setprecision(10) << numberF << std::endl;
    std::cout << std::setprecision(10) << number << std::endl;

    //tutaj testowanie dla roznego n
    std::cout << std::setprecision(10) << roundFunction(number, 1) << std::endl;
    std::cout << std::setprecision(10) << roundFunction(number, 2) << std::endl;
    std::cout << std::setprecision(10) << roundFunction(number, 3) << std::endl;
    std::cout << std::setprecision(10) << roundFunction(number, 4) << std::endl;
    std::cout << std::setprecision(10) << roundFunction(number, 5) << std::endl;

}



// modify floatfield
//#include <iostream>     // std::cout, std::fixed, std::scientific
//
//int main() {
//	double a = 3.1415926534;
//	double b = 2006.0;
//	double c = 101.1;
//
//	float d = 3.1415926534;
//	float e = 2006.0;
//	float f = 101.1;
//
//	int n = 0;
//
//	std::cout << "Podaj precyzje z jaka maja wystepowac zaokraglenia: " << std::endl;
//	std::cin >> n;
//
//	std::cout.precision(n);
//
//	std::cout << "default:\n";
//	std::cout << a << '\n' << b << '\n' << c << '\n' << d << '\n' << e << '\n' << f << '\n';
//
//	std::cout << '\n';
//
//	std::cout << "fixed:\n" << std::fixed;
//	std::cout << a << '\n' << b << '\n' << c << '\n' << d << '\n' << e << '\n' << f << '\n';
//
//	std::cout << '\n';
//
//	std::cout << "scientific:\n" << std::scientific;
//	std::cout << a << '\n' << b << '\n' << c << '\n' << d << '\n' << e << '\n' << f << '\n';
//
//}