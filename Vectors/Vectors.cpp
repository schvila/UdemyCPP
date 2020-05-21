// Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    vector2.push_back(100);
    vector2.push_back(200);

    vector<vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "2d vector: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000; // no change in 2D, copy created
    
    
    cout << "2d vector (no changes): " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    cout << "vector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;



    return 0;
}

int mainVectorBasic()
{
    // vector<char> vowels; //empty
    // vector<char> vowels(5); //5 elements initialized to 0
    //vector<char> vowels{ 'a', 'e', 'i', 'o', 'u' };
    //cout << vowels[0] << endl;
    //cout << vowels[4] << endl;
    vector<int> test_v{ 100, 89, 89 };
    cout << "\nTest using array syntax: " << endl;
    cout << test_v[0] << endl;
    cout << test_v[1] << endl;
    cout << test_v[2] << endl;
    cout << "\nTest using vector syntax: " << endl;
    cout << test_v.at(0) << endl;
    cout << test_v.at(1) << endl;
    cout << test_v.at(2) << endl;
    cout << "\nThere are " << test_v.size() << " elements in the vector" << endl;

    //cout << "\nRead vector: ";
    //cin >> test_v.at(0);
    //cin >> test_v.at(1);
    //cin >> test_v.at(2);
    //cout << "\nNew vector from console: " << endl;
    //cout << test_v.at(0) << endl;
    //cout << test_v.at(1) << endl;
    //cout << test_v.at(2) << endl;

    //cout << "\nEnter score to add: ";
    //int to_add{ 0 };
    //cin >> to_add;
    //test_v.push_back(to_add);

    //cout << "\nEnter anothere score to add: ";
    //cin >> to_add;
    //test_v.push_back(to_add);
    //cout << "\nFinal vector: " << endl;
    //cout << test_v.at(0) << endl;
    //cout << test_v.at(1) << endl;
    //cout << test_v.at(2) << endl;
    //cout << test_v.at(3) << endl;
    //cout << test_v.at(4) << endl;
    //cout << "\nThere are " << test_v.size() << " elements in the vector" << endl;

    //cout << "\nCauses exception our benefit: " << test_v.at(10) << endl;
    //cout << "\nSorry NO exception our benefit: " << test_v[10] << endl; // But VS2019 yhrows exc.

    /* 2D-vector */
    vector<vector<int>> ratings
    {
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5}
    };

    cout << "\n2D vector: " << endl;
    cout << ratings.at(0).at(0) << endl;
    cout << ratings.at(0).at(1) << endl;
    cout << ratings.at(0).at(2) << endl;
    cout << ratings.at(0).at(3) << endl;

    return 0;
}
