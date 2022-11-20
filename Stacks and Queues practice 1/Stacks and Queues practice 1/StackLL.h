#pragma once

class Node {

public:

	Node();
	Node* next;
	int data{};

private:

};


class StackLL{

public:

	StackLL();


	Node* head;

	bool isEmpty();

	void push(int);

	int pop();

private:


};



