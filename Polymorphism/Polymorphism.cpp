// Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

class IPrintable {
    friend std::ostream& operator<<(std::ostream& os, const IPrintable &obj);
public:
    virtual void print(std::ostream& os) const = 0;
};
std::ostream& operator<<(std::ostream& os, const IPrintable &obj) {
    obj.print(os);
    return os;
}

class Account: public IPrintable {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }

    virtual void say_hello() const {
        std::cout << "hello from Account\n";
    }
    virtual void print(std::ostream& os) const override {
        os << "Account display";
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
    virtual void say_hello()  { // no const here, no overriding
        std::cout << "hello from Checking\n";
    }
    virtual void print(std::ostream& os) const override {
        os << "Checking display";
    }
};
class Savings : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual void say_hello() const override { // now should override
        std::cout << "hello from Savings\n";
    }
    virtual void print(std::ostream& os) const override {
        os << "Savings display";
    }
};
class Trust : public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual void print(std::ostream& os) const override {
        os << "Trust display";
    }

};
void do_withdraw(Account& account, double amount) {
    account.withdraw(35);
}

int main()
{
    std::cout << "\n======== Reference ===========\n";
    Account a;
    do_withdraw(a, 12);
    Checking c;
    do_withdraw(c, 13);


    std::cout << "\n======== Pointers ===========\n";
    Account* p1 = new Account();
    Account* p2 = new Checking();
    Account* p3 = new Savings();
    Account* p4 = new Trust();
    std::cout << "\n======== IPrintable ===========\n";

    std::cout << *p1 << " " << *p2 << std::endl;

    
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

