//This program calls the Rectangle class constructor 
#include<iostream>
#include<iomanip>
#include"RectangleV4 header.h"
using namespace std;

int main()
{
	double houseWidth, //To hold the room width
		houseLength;   //to hold the room length

	//get the width of the house
	cout << "In feet, how wide is your house? ";
	cin >> houseWidth;

	//get the length of the house
	cout << "In feet, how wide is your house? ";
	cin >> houseLength;

	//Create a Rectangle object
	Rectangle house(houseWidth, houseLength);

	//display the house's width, length, and area
	cout << setprecision(2) << fixed;
	cout << "The house is " << house.getWidth()
		<< " feet wide. \n";
	cout << "The house is " << house.getLength
		<< " feet long. \n";
	cout << "The house is " << house.getArea()
		<< " square feet in area.\n";
	return 0;
}