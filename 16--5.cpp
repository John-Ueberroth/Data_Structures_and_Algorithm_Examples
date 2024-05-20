//This program demonstrates Rectangle class exceptions 
#include<iostream>
#include"RectangleCh16V3.h"
using namespace std;

int main()
{
	double width;
	double length;

	//create a Rectangle object
	Rectangle myRectangle;

	//get the width and length
	cout << "Enter the Rectangle's width: ";
	cin >> width;
	cout << "Enter the Rectangle length: ";
	cin >> length;

	//store these values in the Rectangle object 
	try
	{
		myRectangle.setWidth(width);
		myRectangle.setLength(length);
		cout << "The area of the rectangle is"
			<< myRectangle.getArea() << endl;
	}
	catch (Rectangle::NegativeWidth e)
	{
		cout << "Error: " << e.getValue()
			<< " is an invalid value for the "
			<< " rectangle's width.\n";
	}
	catch (Rectangle::NegativeLength e)
	{
		cout << "Error: " << e.getValue()
			<< " is an invalid value for the"
			<< " rectangle's width.\n";

	}
	catch (Rectangle::NegativeLength e)
	{
		cout << "Error: " << e.getValue()
			<< " is an invalid value for the"
			<< " rectangle's length.\n";
	}
	cout << "End of the program.\n";
	return 0;
}