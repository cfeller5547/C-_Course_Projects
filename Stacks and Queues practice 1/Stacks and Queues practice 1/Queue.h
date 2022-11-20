#pragma once
class Queue
{

public:

	Queue();

	void enqueue(int);
	int dequeue();
	bool isEmpty();
	bool isFull();
	void makeEmpty();
	void print();

private:

	static int const MaxSize = 20;
	int list[MaxSize];
	int size;
};

