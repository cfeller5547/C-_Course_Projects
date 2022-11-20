// array practice 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int max_num(int arr[], int count, int &index) {
    int max = arr[0];
    for (int x = 0; x < count; x++) {
        if (arr[x] > max) {
            max = arr[x];
            index = x;
        }
    }
    return max;
}

int main()
{
    int myarray[8];
    int count = 8;
    int index;
    cout << "enter 8 array values: " << endl;
    for (int x = 0; x < count; x++) {
        cin >> myarray[x];
    }
    for (int x = 0; x < count; x++) {
        cout << "myArr[" << x << "]" << "=" << myarray[x]re << endl;
    }
    int cow = max_num(myarray, count, index);
    cout << "the max is: " << cow << endl;
    cout << "the index is: " << index << endl;

}

