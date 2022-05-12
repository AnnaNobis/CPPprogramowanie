// napisz funkcje sprawdzajaca czy podany ciag znakow (przez uzytkownika) sa palindromem (KAJAK, ADA, ANNA). 
//Na ekranie wyswietl odpowiedz

#include <iostream>
#include <string>


bool czyJestPalindrom (std::string str)
{
    int dl = str.size(); //zwrocenie dlugosci - to samo co lenght

    for (int i = 0; i < dl/2; i++)
    {
        if (str.at(i) != str.at(dl - i - 1)) //metoda .at
        {
            return false;
        }
    }
    return true;
}

int main()
{
std::cout << czyJestPalindrom ("KAJAK") << std::endl;
std::cout << czyJestPalindrom("ANNA") << std::endl;
std::cout << czyJestPalindrom ("KAJA") << std::endl;
   
}




//#include <iostream>
//bool Palindrom(std::string word)
//{
//    int i = 0;
//    int j = word.size() - 1;    for (; i < j; i++, j--)
//    {
//        if (word[i] != word[j])
//            return false;
//    }
//    return true;
//}
//int main()
//{
//    std::cout << std::boolalpha << Palindrom("ADA");
//}