#include "Stack.h"


using namespace std;

Stack::Stack() {

	list = new int[maxSize];
	size = 0;
}

void Stack::push(int input) {
	if(!isFull())
	list[size++] = input;
}

int Stack::pop() {
	if (!isEmpty()) {
		//size--; 
		return list[--size];
	}
	return -999;
}

bool Stack::isEmpty() {
	if (size == 0)
		return true;
	return false;
}

bool Stack::isFull() {
	if (size == maxSize)
		return true;
	return false;
}

/*int Stack::top() {
	if(!isEmpty())
	return list[size - 1];

	else
	return -999;
}*/