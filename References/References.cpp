// References.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int num{ 0 };
    int& ref{ num };

    std::cout << num << std::endl;
    std::cout << ref << std::endl;

    num = 200;
    std::cout << "\n----------------------------" << std::endl;
    std::cout << num << std::endl;
    std::cout << ref << std::endl;

    ref = 300;
    std::cout << "\n----------------------------" << std::endl;
    std::cout << num << std::endl;
    std::cout << ref << std::endl;


    return 0;
}
