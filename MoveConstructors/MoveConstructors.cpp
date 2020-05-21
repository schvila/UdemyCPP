// MoveConstructors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>


class Move {
private:
    int* data;
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    //Constructor
    Move(int d);
    //Copy constructor
    Move(const Move& source);
    Move(Move&& source);

    ~Move();
};
//Ctr
Move::Move(int d) {
    data = new int;
    *data = d;
    std::cout << "Constructor for: " << d << std::endl;
}

// Copy ctr
Move::Move(const Move& source) : Move(*source.data)
{
    std::cout << "**Deep copy constructor for: " << *data << std::endl;
}
// Move ctr avoid copy constructor overhead "move semanthic" using internal temp ptr to rvalue
Move::Move(Move&& source) 
    :data{ source.data }{
    source.data = nullptr;
    std::cout << "Move constructor - moving resource: " << *data << std::endl;
}

Move::~Move()
{
    if (data != nullptr)
        std::cout << "Destructor freeing data for: " << *data << std::endl;
    else
        std::cout << "Destructor freeing data for nullptr " << std::endl;
    delete data;
}
int main()
{
    std::vector<Move> vec;
    vec.reserve(20); // vector resize cause copy constructor called
    vec.push_back(Move{ 10 });

    vec.push_back(Move{ 20 });
    vec.push_back(Move{ 30 });
    vec.push_back(Move{ 40 });
    vec.push_back(Move{ 50 });
    vec.push_back(Move{ 60 });
    vec.push_back(Move{ 70 });
    vec.push_back(Move{ 80 });

    std::cin.get();
}
