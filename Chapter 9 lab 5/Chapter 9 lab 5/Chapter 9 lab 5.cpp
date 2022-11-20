// Chapter 9 lab 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;


void bubblesort(int a[], int n, string names[])
{
    int right = n - 1;
    int temp = 0;
    while (right > 0)
    {
        int k = 0;
        for (int i = 0; i < right; i ++)
            if (a[i + 1] < a[i]) {
                temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
                k = i;

                string temp2 = names[i + 1];
                names[i + 1] = names[i];
                names[i] = temp2;
            }
        right = k;
    }
   
}

void order(int scores[], string names[], int count) {

    cout << "scores before they are in ascending order: ";
    for (int x = 0; x < count; x++) {
        cout << scores[x] << "% "; 
        cout <<  names[x] << " ";
    }
    bubblesort(scores, count, names);
    cout << endl;
    cout << "scores in ascending order: ";
    for (int x = 0; x < count; x++) {
        cout << scores[x] << "% ";
        cout << names[x] << " ";
    }
}

double mean(int arr[], int count) {
 
    double avg;
    double sum; 
    sum = 0; 
    for (int x = 0; x < count; x++) {
        sum += arr[x];
        
    }
    avg = sum / count;
    return avg;
        
}

int lowestscore(int arr[], int count) {
    int smallestnum = arr[0];
    for (int x = 0; x < count; x++) {
        if (arr[x] < smallestnum) 
            smallestnum = arr[x];
    }
    return smallestnum;
}

int main()
{
    int count = 0;
    cout << "How many test scores do you want to enter?" << endl;
    cin >> count;
    int* myarr = new int[count];
    string* names = new string[count];
    cout << "enter " << count << " test scores" << endl;
    for (int x = 0; x < count; x++) {
        cout << "enter test score: ";
        cin >> myarr[x];
        cout << "enter name: ";
        cin >> names[x];
    }
    order(myarr, names, count);
    double func = mean(myarr, count);
    cout << endl;
    cout << "the average of the scores is: " << func << "%" << endl;
    int lowest = lowestscore(myarr, count);
    cout << "the lowest score is: " << lowest << "%" << endl;
}


