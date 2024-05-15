//This program demonstrates the << and >> operator 
//overloaded to work with the FeetInches class.
#include<iostream>
#include"FeetInchesV2.h"
using namespace std;

int main()
{
	FeetInches first, second;  //define two objects 

	//get a distance for the first object
	cout << "Enter a distance in feet and inches.\n";
	cin >> first;

	//get a distance for the second object
	cout << "Enter another distance in feet and inches.\n";
	cin >> second;

	//dispay the values in the objects
	cout << "The values you entered are: \n";
	cout << first << " and " << second << endl;
	return 0;

}