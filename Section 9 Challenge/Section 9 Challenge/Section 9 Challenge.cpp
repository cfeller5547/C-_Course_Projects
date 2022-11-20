// Section 9 Challenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector <int> vec{ 5, 10, 7, 9, 14, 18, 15, 20, 1, 40 };

    char choice{};
    while (true) {
    cout << endl << endl;
    cout << "Enter a letter choice from the menu." << endl;
    cout << "P -  Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the number" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;

    cin >> choice;

    int new_number{};
    int minimum{ 1000 };
    int total{};
    int largest{0};

    
        switch (choice) {

        case 'p':
        case 'P':


            cout << "Printing all numbers: ";
            for (size_t i{ 0 }; i < vec.size(); i++) {
                cout << vec.at(i) << " ";
            }
            break;

        case 'a':
        case 'A':

            cout << "Enter a number to add to your list: " << endl;
            cin >> new_number;
            vec.push_back(new_number);
            cout << "Printing updated list: ";
            for (size_t i{ 0 }; i < vec.size(); i++) {
                cout << vec.at(i) << " ";
            }
            break;

        case 'm':
        case 'M':

            for (size_t i{ 0 }; i < vec.size(); i++) {
                total += vec.at(i);
            }
            cout << "The mean is: " << total / vec.size();


        case 's':
        case 'S':

            for (size_t i{ 0 }; i < vec.size(); i++) {

                if (vec.at(i) < minimum) {
                    minimum = vec.at(i);
                }
            }
            cout << "The smallest number is: " << minimum;
            break;

        case 'l':
        case 'L':

            for (size_t i{ 0 }; i < vec.size(); i++) {

                if (vec.at(i) > largest) {
                    largest = vec.at(i);
                }
            }
            cout << "The largest number is: " << largest;
            break;

        case 'q':
        case 'Q':

            cout << "Quitting program..";

            return 0;

        default:
            cout << "Wrong input, please enter one of the choices.";

        }


    }


}

