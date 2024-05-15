//This program demonstrates the FeetInches class's overloaded 
//+ and - operators
#include<iostream>
#include "FeetInches.h"
using namespace std;

int main()
{
	int feet, inches;   //to hold the input for feet and inches 

	//create threee FeetInches objects. The default arguments 
	//for the constructor will be ussed 
	FeetInches first, second, third;

	//Get a distance from the user 
	cout << "Enter a distance in feet and inches: ";
	cin >> feet >> inches;

	//store the distance in the first object
	first.setFeet(feet);
	first.setInches(inches);

	//get another distance from the user.
	cout << "Enter another distance in feet and inches: ";
	cin >> feet >> inches;

	//store the distance in the second 
	second.setFeet(feet);
	second.setInches(inches);

	//assign first + second to third 
	third = first + second;

	//display the result 
	cout << "first + second = ";
	cout << third.getFeet() << " feet, ";
	cout << third.getInches() << " inches.\n";

	//assign first - second to third 
	third = first - second;

	//display the result 
	cout << "first - second = ";
	cout << third.getFeet() << " feet, ";
	cout << third.getInches() << " inches.\n";

	return 0;

}