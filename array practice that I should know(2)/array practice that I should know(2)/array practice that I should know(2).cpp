

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int my_array[5]{ 100,200,300,400,500 };

    cout << "array index 0: " << my_array[0] << endl; // index for c++ start at 0

    int my_other_array[5]{};

    cout << "if we dont initialize array to any value with the '{}' then it will print all 0." << endl;
    cout << "lets show you the first index: " << my_other_array[0] << endl;


    //vector practice below

//format: vector, then type, then name, then elements (this is declaring a vector)
            vector <int> example { 100,50 };

// one way to access: 
           // example.at(1);

            cout << "vector at index 0: " << example.at(0) << endl;
            cout << "vector at index 1: " << example.at(1) << endl;
            cout << "the vector has " << example.size() << " elements" << endl << endl;
// we can manually enter vector elements, therefore reinitializing the current elements with input
            cin >> example.at(0);
            cin >> example.at(1);
            cout << "new elements:" << endl << endl;
            cout << example.at(0) << endl;
            cout << example.at(1) << endl;

//enter a push_back if you wanna make the vector automatically increase in size


            // now lets do the practice from the course

            vector <int> vector1{};
            vector <int> vector2{};

            vector1.push_back(10);
            vector1.push_back(20);
            cout << "Elements: " << endl;
            cout << vector1.at(0) << endl;
            cout << vector1.at(1) << endl;
            cout << "Size: " << vector1.size() << endl;
}


