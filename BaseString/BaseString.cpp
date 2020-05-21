// BaseString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Mystring.h"

int main()
{
    MyString larry{ "Larry" };
    MyString moe{ "Moe" };

    MyString stooge = larry;
    larry.Display();
    moe.Display();
    std::cout << (larry == moe) << std::endl;
    std::cout << (larry == stooge) << std::endl;

    larry.Display();
    MyString larry2 = -larry;
    larry2.Display();

    MyString stooges = larry + "Moe";
    stooges.Display();


    std::cin.get();
}
