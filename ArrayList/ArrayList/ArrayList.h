#pragma once


class ArrayList
{
private: 

	static int const MaxSize = 10; // made static so we could use it in the class without instatiating
	int num[MaxSize];
	int index;
	int size;
	int average;
	int sum;

public: 
	ArrayList()
	{
		for (int i = 0; i < MaxSize; ++i) 
			num[i] = 0;
		
		index = 0;
		size = 0;
	}

	void putItem(int);
	//void deleteItem();
	void makeEmpty();
	bool isFull();
	bool isEmpty();
	int getLength();
	int getCurrentValue();
	void resetList();
	void getNextItem();
	int getAverage();
};

