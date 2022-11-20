#pragma once
#include <iostream>

class Node2 {
public:
	
	Node2();

	Node2* next ;
	
	int data{};
	
private:


};

class QueueLL{
	
public:

	QueueLL();

	void enqueue(int);
	int dequeue();
	bool isEmpty();
	void clearList();
	void printList();


	Node2* head;
	Node2* rear;

private:

	

};

