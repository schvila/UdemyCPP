// RecursiveFactorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

unsigned long long factorial(unsigned long long n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
unsigned long long fibonacci(unsigned long long n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);

}


int main()
{
    //std::cout << "\nFactorial of 3 is: " << factorial(3) << std::endl;
    std::cout << "\nfibonacci of 10 is: " << fibonacci(30) << std::endl;
}

