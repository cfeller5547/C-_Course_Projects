

#include <iostream>
using namespace std;

int main()
{
    int var = 10;
     
    int *pointer;
    pointer = &var;

    cout << "the variable value: " << var << endl;
    cout << "the address of the variable: " << pointer << endl;
    cout << "the pointer pointing to value: " << *pointer << endl;




    *pointer = 20;

    cout << "the variable value: " << var << endl;
    cout << "the address of the variable: " << pointer << endl;
    cout << "the pointer pointing to value: " << *pointer << endl;

}


