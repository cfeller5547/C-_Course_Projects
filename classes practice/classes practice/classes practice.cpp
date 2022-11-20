
#include <string>
#include <iostream>
using namespace std;

class rectangle {
protected: 
    int length;
    int width;

public:
    rectangle() {
        length = 0;
        width = 0;
    }

    rectangle(int l, int w) {
        length = l;
        width = w;
    }

    void setlengthandwidth(int l, int w)
    {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }
    int circumference() {
        return (2 * length) + (2 * width);
    }
    void printoutout()
    {
        cout << "Length: " << length << " - Width: " << width << endl;
        cout << circumference() << endl;
        cout << area() << endl;
        cout << endl;
    }
};
    
int main()
{
    rectangle rect(10, 20);
    rect.printoutout();

    rect.setlengthandwidth(25, 10);
    rect.printoutout();

    rectangle rect2;
    rect2.setlengthandwidth(35, 17);
    rect2.printoutout();
}


