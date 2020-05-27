// CustomDeleter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>

class  Test
{
private:
    int data;
public:
    Test() : data{ 0 } {
        std::cout << "Test constructor (" << data << ")\n";
    }
    Test(int dat) : data{ dat } {
        std::cout << "\tTest constructor (" << data << ")\n";
    }
    int get_data() const { return data; }
    ~Test() { std::cout << "\tTest destructor (" << data << ")\n"; }
};
void my_deleter(Test* ptr) {
    std::cout << "\tUsing my custom function deleter\n";
    delete ptr;
}

int main()
{
    {
        // using a function, cannot use make shared only new
        std::shared_ptr<Test> ptr1{ new Test{100}, my_deleter };
    }
    std::cout << "=======================\n";
    {
        //using lambda expression
        std::shared_ptr<Test> ptr2( new Test{1000}, 
            [] (Test* ptr) {
                std::cout << "\tUsing my custom lambda deleter\n";
                delete ptr;
        } );
    }
}
