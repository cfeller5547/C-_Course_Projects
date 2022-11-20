
#include <iostream>

using namespace std;

class circle {
protected:
	int diameter;
	
public:
	circle() {
		diameter = 0;
	}

	circle(int d) {
		diameter = d;
	}
	
	void setDiameter(int d) {
		diameter = d;
		
	}
	int radius() {
		int rad = (diameter / 2);
		return rad;
	}

	double area() {
		double r = radius();
		double pi = 3.14;
		double a = (pi) * pow(r,2);
		return a;
	}

	void printout()
	{
		cout << "diameter: " << diameter << endl;
		cout << "radius: " << radius() << endl;
		cout << "area: " << area() << endl;
	}
};





int main()
{
	
	circle c1;
	circle c2(30);
	circle c3(15);

	c1.printout();
	c2.printout();
	c3.printout();

	c1.setDiameter(25);
	c1.printout();


}
