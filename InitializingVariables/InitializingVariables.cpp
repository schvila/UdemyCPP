// InitializingVariables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//int age{0};
	//cout << "age " << age << endl;

	//cout << "Enter the width of the room: ";
	//int room_width{ 0 };
	//cin >> room_width;


	//cout << "Enter the lngth of the room: ";
	//int room_len{ 0 };
	//cin >> room_len;
	//cout << "The room are is " << room_width * room_len << " m2." << endl;

	/*see appostrophe for thosands*/
	//long long people_on_earth{ 7'600'000'000 };
	//cout << "earth: " << people_on_earth << endl;
	int rating[3][4]{
		{0,4,3,5},
		{2,3,3,5},
		{1,4,4,5}
	};
	cout << rating[1][2] << endl; 

	return 0;
}

