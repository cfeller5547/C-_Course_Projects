#include "Queue.h"
using namespace std;
#include <iostream>

Queue::Queue() {
	size = 0;
}

bool Queue::isEmpty() {
	if (size == 0)
		return true;
	return false;
}


bool Queue::isFull() {
	if (size == MaxSize)
		return true;
	return false;
}

void Queue::enqueue(int val) {
	if (!isFull()) {
		list[size++] = val;
	}
}

int Queue::dequeue() {
	if (!isEmpty()) {
		int val = list[0];
		for (int x = 0; x < MaxSize - 1; x++) {
			//swap(list[x], list[x + 1]);
			list[x] = list[x + 1];
		}
		size--;
		return val;
	}
	return -999; //means list is empty
}

void Queue::makeEmpty() {
	size = 0;
}

void Queue::print() {
	for (int x = 0; x < size; x++)
	{
		cout << list[x] << endl;
	}
}