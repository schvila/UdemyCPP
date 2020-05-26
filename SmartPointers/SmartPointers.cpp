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

void func(std::shared_ptr<Test> p) {
    std::cout << "Use count: " << p.use_count() << std::endl; //shoul be 2
}
void testSaredInt() {
    std::cout << "********** Test Shared integer\n";
    std::shared_ptr<int> p1{ new int{100} };
    std::cout << "Use count: " << p1.use_count() << std::endl;
    std::shared_ptr<int> p2{ p1 };
    std::cout << "Use count: " << p1.use_count() << std::endl;
    p1.reset();
    std::cout << "Use count p1: " << p1.use_count() << std::endl;
    std::cout << "Use count p2: " << p2.use_count() << std::endl;
}

void testSaredTest() {
    std::cout << "********** Test Shared Test class\n";
    std::shared_ptr<Test> ptr = std::make_shared<Test>(100);
    func(ptr);
    std::cout << "Use count: " << ptr.use_count() << std::endl; //back to 1
    {
        // in block
        std::shared_ptr<Test> ptr1{ ptr };
        std::cout << "Use count: " << ptr.use_count() << std::endl;
        {
            std::shared_ptr<Test> ptr2{ ptr };
            std::cout << "Use count: " << ptr.use_count() << std::endl;
            ptr.reset();
        }
        std::cout << "Use count: " << ptr.use_count() << std::endl;
    }
    std::cout << "Use count: " << ptr.use_count() << std::endl;

}
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
    testSaredInt();
    testSaredTest();

}

