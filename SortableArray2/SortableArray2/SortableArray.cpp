#pragma once
using namespace std;

#include <iostream>
#include <string>
#include <fstream>
#include "SortableArray.h"

//Chris Feller
//CS 210-07



SortableArray::SortableArray()
{
	count = 0;
	arr = new int[DEFAULT_TEST_SIZE];
	max_size = DEFAULT_TEST_SIZE;
	
}

SortableArray::SortableArray(int size)
{
	
	count = 0;
	arr = new int[size];
	max_size = size;
}

bool SortableArray::add(int element)
{
	
	if (count >= max_size) {
		return false; //capacity is reached
	}
	else {
		for (int i = 0; i <= count; i++) {
			arr[count] = element; //adding element to our final array index
		}
		count++;//updating array size
		return true;
	}
		
}



bool SortableArray::add(int element, int index)
{
	if (count >= max_size) {
		return false; //capacity is reached
	}
	else {
		for (int i = count - 1; i >= index - 1; i--) {
			arr[i + 1] = arr[i]; //shifting entire array +1
		}
		arr[index] = element; //adding element to specified array position
		count++;//updating array size
		return true;
	}
}

int SortableArray::get(int index)
{
	return arr[index]; //returning array index specified in parameter
	
}

int SortableArray::remove(int index)
{
	int temp;
	temp = arr[index];
	for (int x = index; index < size(); index++) {
		arr[x] = arr[x + 1]; //shifting entire array;
	}
	count--; //updating array size
	return temp;
}

int SortableArray::size() const
{
	return max_size; //max capacity of array
}

bool SortableArray::readFile(std::string fileName)
{
	try
	{

		int lineCount = 0;
		string line;
	
		ifstream file(fileName); //ifstream is used to read from files and store given file elements into our array
		string temp;
		// Get the input from the input file until EOF
		while (std::getline(file, temp)) {
			add(std::stoi(temp), count);
		}
		return true;
	}
	catch (std::exception& e)
	{
		return false;
	}
}

bool SortableArray::saveFile(std::string fileName)
{
	ofstream file(fileName); //ofstream is used to insert into the file which we are doing with array
	if (file.is_open()) {
		for (int i = 0; i < count; i++) {
			file << arr[i] << " "; //inserting all array elements into file
		}
		return true;
	}
	else {
		return false;
	}
}


void SortableArray::insertionSort()
{
	for (int j = 1; j < count; j++) {
		int temp = arr[j];
		int i = j-1;
		while (i >= 0 && arr[i]>temp) {
			arr[i + 1] = arr[i];
			i = i - 1;
		}
		arr[i + 1] = temp;
	}
}

