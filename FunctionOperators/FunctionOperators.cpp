// FunctionOperators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "FuncString.h"

int main()
{
    Funcstring stan{ "Standa" };
    Funcstring chv{ "Chvila" };
    stan.Display();

    Funcstring s2 = stan;
    std::cout << (stan == chv) << std::endl;
    std::cout << (stan == s2) << std::endl;
    Funcstring s3 = -stan;
    s3.Display();
    Funcstring fulln = stan + " " + chv;
    fulln.Display();

    std::cin.get();
}
