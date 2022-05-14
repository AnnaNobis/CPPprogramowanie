
#include <iostream>


   short int Sum1(short int a,short int b)
    {
        return a +b;
    }
  
   int Sum2(short int a, short int b)
   {
       return a + b;
   }

   long long int Sum3(short int a, short int b)
   {
       return a + b;
   }

   double Sum4(short int a, short int b)
   {
       return a + b;
   }

int main()
{

   std::cout << Sum1(123.123, 123) << std::endl;
   std::cout << Sum2 (123.123, 4324654) << std::endl;
   std::cout << Sum3 (123.123, 46874215485)<< std::endl;
   std::cout << Sum4 (123.123, 123)  << std::endl;
}


// ROZWIAZANIE Z ZAJEC
// 
//short int add1(short int a)
//{
//    return a;
//}
//
//int add2(short int a)
//{
//    return a;
//}
//
//long long int add3(short int a)
//{
//    return a;
//}
//
//double add4(short int a)
//{
//    return a;
//}
//
//int main() //short int z automatu skraca liczbê, bierze tyle ile jest w stanie pomieœciæ (-32768,32767)
//{
//    std::cout << "Wynik dodawania: " << add1(5) << std::endl;
//    std::cout << "Wynik dodawania: " << add2(4324654) << std::endl;
//    std::cout << "Wynik dodawania: " << add3(46874215485) << std::endl;
//    std::cout << "Wynik dodawania: " << add4(25.67864) << std::endl;
//}