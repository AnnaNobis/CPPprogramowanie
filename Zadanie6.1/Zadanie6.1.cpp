
#include <iostream>

int main(int argc, char* argv[])
{
    //argc zawsze bedzie miec wartosc >=
    std::cout << "You have entered " << argc << "arguments: " << "\n";

    for (int i = 0; i < argc; ++i)
        std::cout << argv[i] << "\n";
}

