//This program demonstrates the SimpleVector template 
#include <iostream>
#include "simpleVectorCh16.h"
using namespace std;

int main()
{
	const int SIZE = 10;   //Number of elements
	int count;             //loopcounter

	//create a SimpleVector of ints
	SimpleVector<int> intTable(SIZE);

	//create a simpleVector of doubles 
	SimpleVector<double> doubleTable(SIZE);

	//Store values in the two SimpleVectors
	for (count = 0; count < SIZE; count++)
	{
		intTable[count] = (count * 2);
		doubleTable[count] = (count * 2.14);

	}

	//display the values in the SimpleVectors
	cout << "These values are in intTable: \n";
	for (count = 0; count < SIZE; count++)
		cout << intTable[count] << " ";
	cout << endl; 
	cout << "These values are in doubleTable: \n";
	for (count = 0; count < SIZE; count++)
		cout << doubleTable[count] << " ";
	cout << endl;

	//use the standard + operator on the elements
	cout << "\nAdding 5 to each elemtn of intTable"
		<< " and doubleTable.\n";
	for (count = 0; count < SIZE; count++)
	{
		intTable[count] = intTable[count] + 5;
		doubleTable[count] = doubleTable[count] + 5.0;
	}

	//display the values in the simpleVectors 
	cout << "These values are in intTable: \n";
	for (count = 0; count < SIZE; count++)
		cout << intTable[count] << " ";
	cout << endl; 
	cout << "These values are in doubleTable: \n";
	for (count = 0; count < SIZE; count++)
		cout << doubleTable[count] << " ";
	cout << endl;


	//use the standard ++ operator on the elements 
	cout << "\nIncrementing each element of intTable and"
		<< " doubleTable. \n";
	for (count = 0; count < SIZE; count++)
	{
		intTable[count]++;
		doubleTable[count]++;
	}

	//display the values in the SimpleVectors
	cout << "These values are int intTable: \n";
	for (count = 0; count < SIZE; count++)
		cout << intTable[count] << " ";
	cout << endl;
	cout << "These values are in doubleTable:\n";
	for (count = 0; count < SIZE; count++)
		cout << doubleTable[count] << " ";
	cout << endl;

	return 0;
	

}