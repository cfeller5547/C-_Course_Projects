// array practice from course.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector <int> vector1{};
    vector <int> vector2{};

    vector1.push_back(10);
    vector1.push_back(20);
    cout << "Elements of vector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "Size: " << vector1.size() << endl << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout << "Elements of vector2: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "Size: " << vector2.size() << endl;

    vector <vector<int>> vector_2d{}; // adding vector 1 and 2 to this 2 dimensional vector
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "vector_2d:" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << "vector_2d:" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    cout << "Elements of vector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "Size: " << vector1.size() << endl;




}