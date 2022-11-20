// range based for loops + vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;



int main()
{
    //double total{}; //initialized to 0
    //vector <double> numbers{ 10,24,25,56 };
    //for (auto nums : numbers) {
    //    total = total + nums; //this line assigns all the numbers in the vector to total
    //}
    //cout << numbers.size() << endl; // counts how many numbers are in the vector
    //cout << total << endl;
    //cout << "The average of the numbers is the total (" << total << ") " << "divided by the amount of numbers (" << numbers.size() << ") " << endl << endl;;
    //cout << "AVERAGE: " << total / numbers.size();





    vector <int> reverse{ 10,45,2,3,7,1,90,67,80 };
    
    for (auto i : reverse) {
        if (i != reverse.begin()) {
            ;
        }
    }
}

