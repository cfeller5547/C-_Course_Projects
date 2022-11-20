#pragma once
#include <string>


using namespace std;


class Node {
public:

	Node(string input) {
		data = input;
		Next = NULL;
	}

	Node* Next;
	string data;

};


class QueueLL
{
private:

	Node* head;
	Node* rear;

public:
	QueueLL() {
		head = NULL;
		rear = NULL;
	}
	void enqueue(string);
	string dequeue();
	bool isEmpty();
	string peek();
	void makeEmpty();

};

