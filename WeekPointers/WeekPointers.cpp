// WeekPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>

class B; // forward declaration
class A {
    std::shared_ptr<B> b_ptr;
public:
    void set_B(std::shared_ptr<B>& b) {
        b_ptr = b;
    }
    A() {
        std::cout << "A Constructor\n";
    }
    ~A() {
        std::cout << "A Destructor\n";
    }
};
class B {
    //std::shared_ptr<A> a_ptr; //      make weak to break the strong circular reference, no desctructors in console
    std::weak_ptr<A> a_ptr; //      desctructors called

public:
    void set_S(std::shared_ptr<A>& a) {
        a_ptr = a;
    }
    B() {
        std::cout << "B Constructor\n";
    }
    ~B() {
        std::cout << "B Destructor\n";
    }
};
int main()
{
    
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();

    
    a->set_B(b);
    b->set_S(a);
    

}

