

#include <iostream>
#include "ArrayList.h"

using namespace std;

void ArrayList::putItem(int input) {
	if (!isFull()) {
		num[size] = input;
		size++;
	}
	else {
		cout << "Size limit exceeded." << endl;
	}
}

void ArrayList::makeEmpty() {
	size = 0;
}

bool ArrayList::isFull() {
	if (size >= MaxSize)
		return true;

	return false;
}

bool ArrayList::isEmpty(){
	if (size == 0)
		return true;

	return false;
	
}

int ArrayList::getCurrentValue() {
	if(size > 0)
		return num[index];

	return -999;
}

int ArrayList::getLength() {
	return size;
}

void ArrayList::resetList() {
	index = 0;
}

void ArrayList::getNextItem() {
	if (size > index + 1)
		index++;
}

