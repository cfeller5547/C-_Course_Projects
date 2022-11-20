#pragma once
#include <iostream>
#include <string>

using namespace std;



class Queue
{
public:

	//Queue();
	Queue(int);
	~Queue();

	void enqueue(string);
	string dequeue();
	bool isEmpty();
	bool isFull();
	void makeEmpty();
	int getHead() { return head; }
	string peekQueue();
	int getMaxSize() { return MaxSize; }
	void displayQueue();

private:
	string *carList;
	int head{};
	int rear{};
	int MaxSize{};
};

