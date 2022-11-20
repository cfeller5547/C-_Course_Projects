#pragma once

#include <iostream>
#include <string>

using namespace std;

class Node 
{

public:

	Node(string, string);


	string word;
	std::string description; 

	Node* right;
	Node* left;

};



class Dictionary
{

private:
	Node* Root;
	
	Node* currentPos;

public:

	Dictionary();

	Node* search(string);
	
	/*bool deleteNode(Node*);
	bool deleteItem(string);*/
	bool isEmpty();
	bool getItem(string);
	void resetTree();
	void makeEmpty(Node*);
	void print(ostream&);
	void printTree(Node*, ostream&);
	void putItem(Node*, string, string);
	void PutItem(string, string);
	Node* getRoot() { return Root; }
	void MakeEmpty();

	~Dictionary();
};

