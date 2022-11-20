// Passing by reference practice.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

void ordernums(int &a, int &b, int &c) 
{
    int largestnum=0;
    int secondlargest=0;
    int thirdlargest=0;
    if (a > b && a > c && b > c) {
        largestnum = a;
        secondlargest = b;
        thirdlargest = c;
    }
    //if()
    a = largestnum;
    b = secondlargest;
    c = thirdlargest;

}
    

void swap(int &a, int &b) {
    int chris = a;
    a = b;
    b = chris;
}

int main()
{

   
    int firstnum, secondnum;
    cout << "enter the numbers you want to swap" << endl;
    cin >> firstnum;
    cin >> secondnum;
    cout << "the numbers before swapping are: " << firstnum << " " << secondnum << endl;
    cout << firstnum << " " << secondnum << endl;
    swap(firstnum, secondnum);
    cout << "the numbers after swapping are: " << firstnum << " " << secondnum << endl;


    //int a, b, c;
    //a = 20;
    //b = 100;
    //c = 50;
    //ordernums(a, b, c);
    //cout << a << " " << b << " " << c << endl;
   
   

}


//cout << "input the first number" << endl;
//cin >> a;
//cout << "input the second number" << endl;
//cin >> b;
//cout << "input the third number" << endl;
//cin >> c;