#pragma once
class Stack
{

private:

	int* list;
	int maxSize = 10;
	int size;


public:

	Stack();

	void push(int);
	int pop();
	bool isEmpty();
	bool isFull();
	//int top();

};

