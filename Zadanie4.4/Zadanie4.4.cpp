
//Zad. 4.3 SprawdŸ czy s³owo ma wiêcej ni¿ 5 liter i koñczy siê liter¹ „r”. (napisz funkcjê)

#include <iostream>
#include <string>

bool checkWord(std::string word)
{
    char lastChar = '0';
    lastChar = word.back();

    if (word.size() > 5)
    {
        if (lastChar == 'r')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

int main()
{
    std::cout << checkWord("kurs") << std::endl;
    std::cout << checkWord("kursrr");
}