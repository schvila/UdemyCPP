// ExceptionInFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class DivideByZeroException {

};
class NegativeValueException {

};
double calculate_mpg(int miles, int gallons) {
    if (gallons == 0) {
        //throw 0; // throw by value
        throw DivideByZeroException();
    }

    if (miles < 0 || gallons < 0) {
        //throw std::string{ "Negative value error" };
        throw NegativeValueException();
    }
    return static_cast<double>(miles) / gallons;
}
int main()
{
    int miles{};
    int gallons{};
    double mpg{};
    std::cout << "Enter the miles: ";
    std::cin >> miles;
    std::cout << "Enter the gallons: ";
    std::cin >> gallons;

    try
    {
        mpg = calculate_mpg(miles, gallons);
        std::cout << "Result: " << mpg << std::endl;
    }
    catch (const DivideByZeroException& ex) {
        std::cerr << "Try to divide by zero error\n";
    }
    catch (const NegativeValueException& exn) {
        std::cerr << "Using ngative value error\n";
    }
    //catch (int& ex) { // catch by ref
    //    std::cerr << "Try to divide by zero\n";
    //}
    //catch (std::string& sex) {
    //    std::cerr << sex << std::endl;
    //}
    catch (...) {
        std::cerr << "Unknown exception\n";
    }

    std::cout << "Bye!\n";
}
