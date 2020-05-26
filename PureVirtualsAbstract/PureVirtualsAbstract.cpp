// PureVirtualsAbstract.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// abstract base, has // pure virtual func
class Shape {
public:
    virtual void draw() = 0; // pure virtual func
    virtual void rotate() = 0; // pure virtual func
    virtual ~Shape(){}
};
class Line : public Shape {
    virtual void draw() override {
        std::cout << "Draw Line\n";
    }
    virtual void rotate() override {
        std::cout << "Rotate Line\n";
    }
    virtual ~Line() { std::cout << "Destroy Line\n"; }
};
class Circle : public Shape {
    virtual void draw() override {
        std::cout << "Draw Circle\n";
    }
    virtual void rotate() override {
        std::cout << "Rotate Circle\n";
    }
    virtual ~Circle() { std::cout << "Destroy Circle\n"; }
};

int main()
{
    Shape* p1 = new Circle();
    Shape* p2 = new Line();

    p1->draw();
    p1->rotate();
    p2->draw();
    p2->rotate();

    delete p1;
    delete p2;
}
