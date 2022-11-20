// Final Exam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class TestClass
{
public:
    TestClass(int x)
    {
        cout << x << endl;
    }

    TestClass()
    {
        cout << "Hello!" << endl;
    }
};

int main()
{
    TestClass test;

    return 0;
}



