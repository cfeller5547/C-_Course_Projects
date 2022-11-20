

#include <iostream>
using namespace std;


#include <windows.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle {
protected:
    int base;
    int height;
    int area;
    int sideone;
    int sidetwo;
    int sidethree;


public:
    Triangle() {
        //        cout << "I am a triangle\n";
        OutputDebugString(L"Triangle::Triangle()\n");
    }
    void triangle() {
        //        cout << "I am a triangle\n";
        OutputDebugString(L"Triangle::triangle()\n");
    }
    void setbase(int b) {
        OutputDebugString(L"Triangle::setbase()\n");
        base = b;
//        cout << "this is the base setter" << endl;
    }
    int getbase() {
        OutputDebugString(L"Triangle::getbase()\n");
//        cout << "my base is:" << base << endl;
        return base;
    }
    void setheight(int h) {
        height = h;
        OutputDebugString(L"Triangle::setheight()\n");
    }
    int getheight() {
        OutputDebugString(L"Triangle::getheight()\n");
        return height;
    }
    int getarea() {
        OutputDebugString(L"Triangle::getarea()\n");
        area = (0.5) * (base * height);
        return area;
    }
};

class Isosceles : public Triangle {
public:
    Isosceles() {
        //        cout << "I am a triangle\n";
        OutputDebugString(L"Isosceles::Isosceles()\n");
    }

    void isosceles() {
        cout << "I am an isosceles triangle\n";
    }
    void description() {
        cout << "In an isosceles triangle two sides are equal" << endl;
    }
};

class Equilateral : public Triangle {
public:
    void equilateral() {
        cout << "I am an equilateral triangle" << endl;
    }
    void properties() {
        cout << "my sides are all the same length, they are 60 degrees and add up to 180 degrees total." << endl;
    }
    void find_third_side(int a, int b) {
        sideone = a;
        sidetwo = b;
        sidethree = (180) - (sideone + sidetwo);
    }
    int get_third_side() {
        return sidethree;
    }



};

int main()
{

    Triangle chris;
    chris.triangle();
    chris.setbase(20);
    int base = chris.getbase();
    chris.setheight(10);
    int height = chris.getheight();
    int area = chris.getarea();

    Isosceles isabelle;
    isabelle.isosceles();
    isabelle.description();

    Equilateral peter;
    peter.equilateral();
    peter.properties();
    
    int a;
    int b;

    cout << "The base of the triangle is " << base << endl;
    cout << "The height of the triangle is: " << height << endl;
    cout << "The area of the triangle is: " << area << endl;
    cout << "we are going to find the missing side of an equilateral triangle." << endl;
    cout << "enter the length of side a: " << endl;
    cin >> a;
    cout << "enter the length of side b" << endl;
    cin >> b;
    peter.find_third_side(a, b);
    int dog = peter.get_third_side();
    cout << "your third side is: " << dog <<  endl;

}


