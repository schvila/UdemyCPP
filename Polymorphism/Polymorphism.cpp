// Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

class Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    /*
    If a class has virtual functions
    ALWAYS provide a public virtual desctructror
    */
    virtual ~Account() {};
};
class Checking: public Account {
public:
    void withdraw(double amount) {
        std::cout << "In Checking::withdraw" << std::endl;
    }
};
class Savings : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
};
class Trust : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
};


int main()
{
    std::cout << "\n======== Pointers ===========\n";
    Account* p1 = new Account();
    Account* p2 = new Checking();
    Account* p3 = new Savings();
    Account* p4 = new Trust();

    
    std::cout << "\n======== Array ===========\n";
    Account* array[] = { p1, p2, p3, p4 };
    for (int i = 0; i < 4; i++)
        array[i]->withdraw(10);

    std::cout << "\n======== Vector ===========\n";
    std::vector<Account*> accounts{ p1, p2, p3, p4 };
    for (auto acc_p : accounts) {
        acc_p->withdraw(20);
    }




    delete p1;
    delete p2;
    delete p3;
    delete p4;
}

