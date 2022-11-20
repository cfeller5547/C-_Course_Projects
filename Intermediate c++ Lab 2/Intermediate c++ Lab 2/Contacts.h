#pragma once
#include <string>
#include <iostream>

using namespace std;

class Contact {

public:
	Contact() {}
	
	Contact(string fn, string ln, string addr, string ph)
	{
		firstName = fn;
		lastName = ln;
		address = addr;
		phoneNumber = ph;
	}

	string firstName{ "" };
	string lastName{ "" };
	string address{ "" };
	string phoneNumber{ "" };


public:

	

};

