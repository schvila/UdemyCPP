// StreamManipulators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>


void booleanManipulator() {
    //std::cout.setf(std::ios::boolalpha);
    //std::cout.setf(std::ios::noboolalpha); ???
    //std::cout << std::noboolalpha;
    std::cout << std::boolalpha;

    std::cout << (10 == 10) << std::endl;
    std::cout << (10 == 20) << std::endl;

    std::cout << "-----------------------\n";
    bool b = true;
    std::cout << std::boolalpha << b << '\n';
    std::cout << std::noboolalpha << b << '\n';

}
void intManipulator() {
    int num{ 255 };
    std::cout << std::showbase << std::uppercase; // std::cout << std::noshowbase;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;
    std::cout << "show positive sign\n";
    int num2{ -255 };
    std::cout << std::dec << std::showpos;
    std::cout << num << std::endl;
    std::cout << num2 << std::endl;
}
void floatManipulators() {
    // precission default 6 digits 
    // 123546.5678 => 1234.57
    // 123456789.987654321 => 1.23457e+008
    double num1{ 123456789.987654321 };
    double num2{ 1234.56789 };
    double num3{ 1234.0 };
    std::cout << "--Defaults------------------------------\n";
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    std::cout << "--Precision 2------------------------------\n";
    std::cout << std::setprecision(2);
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    std::cout << "--Precision 5------------------------------\n";
    std::cout << std::setprecision(5);
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    std::cout << "--Precision 9------------------------------\n";
    std::cout << std::setprecision(9);
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    std::cout << "--Precision 3 fixed------------------------------\n";
    std::cout << std::setprecision(3) << std::fixed;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    std::cout << "--Precision 3 scientific------------------------------\n";
    std::cout << std::setprecision(3) << std::scientific;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    std::cout << "--DefaultsBack------------------------------\n";
    //back to defaults
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::setprecision(6);
    std::cout << std::resetiosflags(std::ios::showpos);
    std::cout << std::resetiosflags(std::ios::showpoint);
    //std::cout << std::resetiosflags(std::ios::precision);
    //std::cout.unsetf(std::ios::precision);

    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;



}
void ruler() {
    std::cout << "1234567890123456789012345678901234567890\n";

}
void alignFillMan() {
    int num1{ 1234 };
    double num2{ 1234.5678 };
    std::string hello{ "Hello" };

    std::cout << "\n--Defaults--------------------------------------------------\n";
    ruler();
    std::cout << num1 << num2 << hello << std::endl;

    std::cout << "\n--Defaults one per line----------------------------------------\n";
    ruler();
    std::cout << num1<< std::endl;
    std::cout << num2 << std::endl;
    std::cout << hello << std::endl;
    // Set fied width to 10
    // note justification is right for num only
    std::cout << "\n--width 10 for num 1----------------------------------------\n";
    ruler();
    std::cout << std::setw(10) << num1 
        << num2 
        << hello 
        << std::endl;
    // Set fied width 10
    // note justification is right for num only
    std::cout << "\n--width 10 for num 1 and num2----------------------------------------\n";
    ruler();
    std::cout << std::setw(10) << num1
        << std::setw(10) << num2
        << hello
        << std::endl;
    std::cout << "\n--width 10 for num 1 and num2 and hello------------------------------\n";
    ruler();
    std::cout << std::setw(10) << num1
        << std::setw(10) << num2
        << std::setw(10) << hello
        << std::endl;

    std::cout << "\n--width 10 for num 1 and num2 and hello, left all-------------------------\n";
    ruler();
    std::cout << std::setw(10) << std::left << num1
        << std::setw(10) << std::left << num2
        << std::setw(10) << std::left << hello
        << std::endl;

    std::cout << "\n--width 10 for num 1 and num2 and hello, left all, setfill to dash\n";
    ruler();
    std::cout << std::setw(10) << std::left << std::setfill('*') << num1
        << std::setw(10) << std::left << std::setfill('#') << num2
        << std::setw(10) << std::left << std::setfill('-') << hello
        << std::endl;

    std::cout << "\n--width 10 for num 1 and num2 and hello, left all, setfill to varies\n";
    ruler();
    std::cout << std::setw(10) << std::left << num1
        << std::setw(10) << std::left << num2
        << std::setw(10) << std::left << hello
        << std::endl;

    std::cout << "\n\n";

    /*
    std::string hello{ "Hello" };
    std::cout << std::setfill('*');
    std::cout << std::setw(10) << num
        << std::setfill('-') << std::setw(10) << hello
        << std::setw(15) << hello
        << std::endl;
*/
}
int main()
{
    //booleanManipulator();
    //intManipulator();
    //floatManipulators();
    alignFillMan();
}

