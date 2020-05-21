// MoveAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#include "MoveString.h"

int main()
{
    MoveString a{ "Hello" };    //overloaded constructor
    a = MoveString{ "Hola" };   //overloaded constructor then mover assign
    a = "Bonjure";              //overloaded constructor then mover assign

    std::cin.get();
}
