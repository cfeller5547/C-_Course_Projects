// Coding Final year 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void Quiz( /* in */ int n)
{
    if (n > 0)
    {
        cout << 0;
        Quiz(n - 1);
        cout << 1;
        Quiz(n - 1);
    }
}

int main()
{
    Quiz(2);
}


