// InheritanceConstructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Base {
private:
    int m_val;
public:
    Base() : m_val{ 0 } { std::cout << "Base no-args constructor\n"; }
    Base(int x) : m_val{ x } { std::cout << "Base (int) overloaded constructor\n"; }
    ~Base() { std::cout << "Base descructor\n"; }

    Base(const Base& other) : m_val{ other.m_val } { std::cout << "Base copy constructor\n"; }

    Base& operator=(const Base& rhs) {
        std::cout << "Base operator =\n";

        if (this != &rhs)
        {
            m_val = rhs.m_val;
        }
        return *this;
    }
};
class Derived : public Base {
    //using Base::Base;
private: 
    int m_dblval;
public:
    Derived() : Base{}, m_dblval{ 0 } { std::cout << "Derived no-args constructor\n"; }
    Derived(int x) : Base{ x }, m_dblval { 2 * x } { std::cout << "Derived (int) overloaded constructor\n"; }
    ~Derived() { std::cout << "Derived descructor\n"; }

    Derived(const Derived& other) : Base{other}, m_dblval{other.m_dblval} { std::cout << "Derived copy constructor\n"; }
    Derived& operator=(const Derived& rhs) {
        std::cout << "Derived operator =\n";
        if (this != &rhs)
        {
            Base::operator=(rhs);   //Assign Base part
            m_dblval = rhs.m_dblval;//Assign Derived 
        }
        return *this;
    }
};

int main()
{
    //Base b{ 100 };
    //Base b1{ b };
    //b = b1;

    Derived d{ 100 };
    Derived d1{ d };

    d = d1;

    //std::cin.get();
}
