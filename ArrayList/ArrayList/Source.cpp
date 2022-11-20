#include "ArrayList.h"
#include <iostream>

using namespace std;

int main(){
	ArrayList List;

	List.putItem(15);
	List.putItem(40);
	List.putItem(10);
	List.putItem(21);
	List.putItem(12);
	List.putItem(4);
	cout << "Current Value: " << List.getCurrentValue() << endl;
	List.getNextItem();
	cout << "Next Value: " << List.getCurrentValue() << endl;
	cout << "sum: " << List.getAverage() << endl;
}