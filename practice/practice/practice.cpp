// practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <cmath>


void fib(int num, int skip)
{
    for (int x = 0; x < num; x= x + num)
        cout << x << ",";
    cout << endl << endl;

}

void pow2(int num)
{
    for (int x = 0; x <= num; x++)
        cout << pow(2, x) << ",";
    cout << endl << endl;
}




int main()
{
    fib(100, 1);
    fib(1000, 17);
    //fib(1000000, 513);
    pow2(40);
}
