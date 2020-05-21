// StreamOperators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Mystring.h"

int main()
{
    MyString larry{ "Larry" };
    MyString moe{ "Moe" };
    MyString curly;
    std::cout << "Enter curly name:";
    std::cin >> curly;

    std::cout << "Jmena " << larry << ", " << moe << ", " << curly << std::endl;

    std::cout << "\n Vloze tri jmena oddelene mezerou:";
    std::cin >> larry >> moe >> curly;

    std::cout << "\nJmena " << larry << ", " << moe << ", " << curly << std::endl;

    std::cin.get();
}

