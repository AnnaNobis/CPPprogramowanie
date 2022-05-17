// Zadanie4.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


void SplitString(std::string str, char c)
{
    int index = 0;
    index = str.find(c);
    int l = str.length();

    if (index != std::string::npos)
    {
        std::cout << "Znaleziono tekst na pozycji: " << index << std::endl;
        std::string str1 = str.substr(0, index);
        std::cout << str1 << std::endl;
        std::string str2 = str.substr(index, l);
        std::cout << str2 << std::endl;
    }
    else
    {
        std::cout << "Nie znaleziono";
    }


}

int main()
{
    std::string str = "Ala ma: kota, psa i mysz";
    char c = ':';
    SplitString(str, c);

}


//#include <iostream>
//#include <string>
//
//void extractStringsFromString(std::string str, char separator)
//{
//    int counter = 0;
//    std::string temp;
//    for (int i = 0; i < str.size(); ++i)
//    {
//        temp += str[i];
//
//        if (str[i] == separator)
//        {
//            counter++;
//            std::cout << counter << " wydzielony string to: " << temp << std::endl;
//            temp.clear();
//        }
//        if (i == (str.size() - 1) && str[str.size() - 1] != separator)
//        {
//            counter++;
//            std::cout << counter << " wydzielony string to: " << temp << std::endl;
//        }
//    }
//}
//int main()
//{
//    std::string sentence = "Nic dwa razy siê nie zdarza";
//    std::cout << "Test:" << std::endl;
//    extractStringsFromString(sentence, ' ');
//    std::cout << "Test:" << std::endl;
//    extractStringsFromString("Jamniczek, który siê zapl¹ta³ w rêczniczek", ' ');