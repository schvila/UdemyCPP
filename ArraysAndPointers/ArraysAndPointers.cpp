// ArraysAndPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int scores[]{ 100,95,98 }; // scores is aleady ptr to array!
    std::cout << "Val of scores " << scores << std::endl;
    int* score_ptr{ scores }; // no need to use & here
    std::cout << "Val of score_ptr " << scores << std::endl;
    std::cout << "\nArray subsription notation---------------------------" << std::endl;
    std::cout << scores[0] << std::endl;
    std::cout << scores[1] << std::endl;
    std::cout << scores[2] << std::endl;
    
    std::cout << "\nPointer subsription notation---------------------------" << std::endl;
    std::cout << score_ptr[0] << std::endl;
    std::cout << score_ptr[1] << std::endl;
    std::cout << score_ptr[2] << std::endl;
    
    std::cout << "\nPointer offset notation---------------------------" << std::endl;
    std::cout << *score_ptr << std::endl;
    std::cout << *(score_ptr + 1) << std::endl;
    std::cout << *(score_ptr + 2) << std::endl;

    std::cout << "\Array offset notation---------------------------" << std::endl;
    std::cout << *scores << std::endl;
    std::cout << *(scores + 1) << std::endl;
    std::cout << *(scores + 2) << std::endl;


    return 0;
}

