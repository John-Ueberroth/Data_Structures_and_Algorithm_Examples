//this program demonstrates the FeetInches class's 
//conversion functions
#include<iostream>
#include"FeetInchesV2.h"
using namespace std;

int main()
{
	double d;  //to hold double input
	int i;

	//define a FeetInches object 
	FeetInches distanace; 

	//get a distance from the user 
	cout << "Enter a distance in feet and inches: \n";
	cin >> distance;

	//convert the distance object to a double 
	d = distance; 

	//convert the distance object to an int 
	i = distance; 

	//display the values 
	cout << "The value " << distance;
	cout << " is equivelent to " << d << " feet\n";
	cout << "or " << i << " feet, rounded down.\n";
	return 0;
}