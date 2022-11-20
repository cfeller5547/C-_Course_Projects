#include "Dictionary.h"
#include <stdio.h>
#include <string.h>


Node::Node(string input, string input2)
{
	word = input;
	description = input2;
	right = NULL;
	left = NULL;
}

Dictionary::Dictionary()
{
	Root = NULL;
	currentPos = NULL;
}

Node* Dictionary::search(string input)
{
	if (currentPos == NULL) {
		resetTree();
		return NULL;
	}
	if (currentPos->word == input)
		return currentPos;
	if (currentPos->word.compare(input) < 0)
		currentPos = currentPos->left;
	else
		currentPos = currentPos->right;

	return search(input);
}

bool Dictionary::isEmpty()
{
	if (Root == NULL)
		return true;
	return false;
}

bool Dictionary::getItem(string input)
{
	resetTree();

	return search(input);
}

void Dictionary::resetTree()
{
	currentPos = Root;
}

void Dictionary::makeEmpty(Node* root)
{
	if (root->left != NULL)
		makeEmpty(root->left);

	if (root->right != NULL)
		makeEmpty(root->right);

	delete root;
}

void Dictionary::print(ostream& file)
{
	if (isEmpty()) {
		std::cout << "Tree is Empty";
		return;
	}
	printTree(Root, file);
}

void Dictionary::printTree(Node* root, ostream& file)
{
	if (root->left != NULL)
		printTree(root->left, file);

	file << root->word << endl;
	file << root->description << endl;

	if (root->right != NULL)
		printTree(root->right, file);
}

void Dictionary::putItem(Node* root, string word, string def)
{
	Node* temp = new Node(word, def);

	if (root->word.compare(word) < 0)
	{
		if (root->left == nullptr)
			root->left = temp;
		else
			putItem(root->left, word, def);
	}
	else
	{
		if (root->right == nullptr)
			root->right = temp;
		else
			putItem(root->right, word, def);
	}

}

void Dictionary::PutItem(string word, string def)
{
	if (isEmpty())
	{
		Node* temp = new Node(word, def);
		Root = temp;
		currentPos = temp;
	}
	else
	{
		putItem(Root, word, def);
	}
}

void Dictionary::MakeEmpty()
{
	if (isEmpty())
		return;

	makeEmpty(Root);
}

Dictionary::~Dictionary()
{
	MakeEmpty();
}






//
//bool Dictionary::deleteNode(Node* pos)
//{
//	if (pos->left == NULL && pos->right == NULL) {
//		if (pos == Root) {
//			delete pos;
//			Root = NULL;
//			pos = NULL;
//			return true;
//		}
//		Node* parent = findParent(Root, pos);   //if not root then we need to find its parent
//
//		if (parent->left == pos)
//			parent->left = NULL;
//		else
//			parent->right = pos->left;
//
//		delete pos;
//		pos = NULL;
//		return true;
//	}
//
//	else if (pos->left == NULL) { //we know theres a right child here
//		if (pos == Root) {
//			Root = pos->right;
//			delete pos;
//			pos = NULL;
//
//			return true;
//		}
//		Node* parent = findParent(Root, pos);
//		if (parent->left = pos)
//			parent->left = pos->right;
//		else
//			parent->right = pos->right;
//
//		delete pos;
//		pos = NULL;
//		return true;
//	}
//	else//for two children
//	{
//		if (pos == Root) {
//			Node* replacement = findLargestLeftNode(pos->left);
//
//			string data = replacement->word;
//			
//
//			deleteNode(replacement);
//
//			pos->word = data;
//			
//		}
//	}
//	resetTree(); // is this the correct place
//
//}
//
//bool Dictionary::deleteItem(string input)
//{
//	if (getItem(input)) {
//		return deleteNode(currentPos);
//		currentPos = NULL;
//	}
//	else
//		return false;
//
//}