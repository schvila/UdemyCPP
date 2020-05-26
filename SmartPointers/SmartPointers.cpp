// SmartPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
#include<vector>
#include "SavingsAccount.h"

class  Test
{
private:
    int data;
public:
    Test() : data{ 0 } {
        std::cout << "Test constructor (" << data << ")\n";
    }
    Test(int dat) : data{ dat } {
        std::cout << "Test constructor (" << data << ")\n";
    }
    int get_data() const { return data; }
    ~Test() { std::cout << "Test destructor (" << data << ")\n"; }
};


int main()
{
    //std::unique_ptr<Test> t1{ new Test(100) };
    //std::unique_ptr<Test> t2 = std::make_unique<Test>(1000);
    //std::unique_ptr<Test> t3;
    //t3 = std::move(t1);
    //if (!t1)
    //    std::cout << "t1 is nullptr\n";
    std::vector<std::unique_ptr<Account>> accounts;
    accounts.push_back(std::make_unique<Account>("John", 1000));
    accounts.push_back(std::make_unique<SavingsAccount>("Billy", 1000, 5));
    for (const auto& acc : accounts)
        std::cout << *acc << std::endl;

}

