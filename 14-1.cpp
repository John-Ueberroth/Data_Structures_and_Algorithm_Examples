//This program demonstrates a static member variable 
#include<iostream>
#include "tree.h"
using namespace std;

int main()
{
	//define three Tree objects 
	Tree oak;
	Tree elm;
	Tree pine;

	//display the number of Tree objects we have 
	cout << "We have " << pine.getObjectCount()
		<< " trees in our program!\n";
	return 0;
}