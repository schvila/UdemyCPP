// RangeBaseForLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Program to show the difference between for loop and for each loop using vectors.

void functionOne() {
    vector <string> v = { "1", "2", "3", "4", "5" };
    for (int i = 0; i < v.size(); i++) {
        cout << "The values of the vector are: " << v[i] << endl;
    }
    cout << endl;
}

void functionTwo() {
    vector <string> v = { "1", "2", "3", "4", "5" };
    for (int i = 0; i < v.size(); i++) {
        for (string& s : v) {
            if (v[i] == s) {
                cout << "The strings are: " << s << endl;
            }
        }
    }
    cout << endl;
}

void functionThree() {
    vector <string> v = { "1", "2", "3", "4", "5" };
    for (string& s : v) {
        cout << "The strings are: " << s << endl;
    }
    cout << endl;
}
void functionAuto() {
    vector <int> v = { 1, 2, 3, 4, 5 };
    for (const auto& a : v) {
        cout << "The " << typeid(a).name()  << "s are: " << a << endl;
    }
    cout << endl;
}

int main() {
    functionOne();
    functionTwo();
    functionThree();
    functionAuto();

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
