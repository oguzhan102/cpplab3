// COMP 2006 Lab3: Dynamic Memory
// File: part_one_main.cpp
// Version 1.0
// Date  17 October 2019
// Author  Tom Marazzo
// Description
// This file is used to demonstrate dynamic memory in
// C++ and to process an array of objects of compound
// type where the user specifies the number of
// elements in the array at run-time.
/////////////////////////////////////////////////////

#include "pch.h"
#include <iostream>
#include "Weather.h"
using namespace std;


int main()
{
	int i; // loop counter
	int n; // number of objects in Weather array

	// declare a pointer named weatherArray of type Weather here
	Weather* weatherArray = nullptr;

	cout << "Weather Data" << endl
		<< "=====================" << endl
		<< "Days of Weather: ";
	cin >> n;
	cin.ignore();

	// allocate dynamic memory for weatherArray here
	weatherArray = new Weather[7];

	for (i = 0; i < n; i++)
	{
		char dateDescription[7];
		double high;
		double low;

		cout << "Enter date: "; 
		cin >> dateDescription;
		cout << "Enter high: ";
		cin >> high;
		cout << "Enter low: ";
		cin >> low;

		weatherArray[i].setData(dateDescription, high, low);
		// add code to accept the user input
		// for the weather array and set the data
		// for each object of weatherArray
	}

	cout << endl
		<< "Weather report:" << endl
		<< "Date        high  low" << endl
		<< "======================" << endl;

	for (i = 0; i < n; i++)
	{
		weatherArray[i].display();
	}

	// deallocate dynamic memory here
	delete[] weatherArray;
	weatherArray = nullptr;

	return 0;
}
