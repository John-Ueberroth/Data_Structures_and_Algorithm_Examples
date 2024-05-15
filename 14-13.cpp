//This program demonstrates IntArray's class's bounds-checking ability 
#include<iostream>
#include"IntArray.h"
using namespace std;

int main()
{
	const int SIZE = 10; //array size 
	
	//define an IntArray with 10 elements 
	IntArray table(SIZE);

	//store value's int the array 
	for (int x = 0; x < SIZE; x++)
		table[x] = x;
	
	//display the values in the array 
	for (int x = 0; x < SIZE; x++)
		cout << table[x] << " ";
	cout << endl;
	
	//attempt to use an invalid subscript 
	cout << "Now attempting to use an invalid subscript.\n";
	table[SIZE + 1] = 0;
	return 0;
}