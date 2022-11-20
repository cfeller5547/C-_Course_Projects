
#include <iostream>
#include <cmath>
using namespace std;


void areaoftriangle(int base, int height) {
    int area;
    area = (0.5) * (base * height);
    cout << "The area of the triangle is: " << area << endl;
}

int main()
{
    int base;
    int height; 
    cout << "Enter the base of the triangle" << endl;
    cin >> base;
    cout << "Enter the height of the triangle" << endl;
    cin >> height;
    areaoftriangle(base, height);
}


