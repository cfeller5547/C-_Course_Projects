// Learning files.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

	ofstream outfile;
	outfile.open("report.txt");
	outfile << "heyyyyy";
	outfile.close();
	return 0;



}

