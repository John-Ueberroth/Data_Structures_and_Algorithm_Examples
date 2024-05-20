//This program handles the Rectangle class exceptions.
#include <iostream>
#include "RectangleV2.h"
using namespace std;

int main()
{
	double width;               //Rectangel's width
	double length;              //Rectangle's length
	bool tryAgain = true;       //flag to retread input 

	//create a Rectangle object
	Rectangle myRectangle;

	//get the rectangle's width 
	cout << "Enter the rectangle's width: ";
	cin >> width;

	//store the width in the myRectangle object 
	while (tryAgain)
	{
		try
		{
			myRectangle.setWidth(width);
			//if no exception was thrown, then the 
			//next statement will execute 
			tryAgain = false;
		}
		catch (Rectangle::NegativeWidth)
		{
			cout << "Please enter a nonnegative vlaue: ";
			cin >> width;

		}
	}
	//Get the rectangle's length
	cout << "Enter the rectangle's length ";
	cin >> length;

	//store the length in the myRectangle object.
	tryAgain = true;
	while (tryAgain)
	{
		try
		{
			myRectangle.setLength(length);
			//if no exception was thrown, then the 
			//next statement will execute
			tryAgain = false;
		}
		catch (Rectangle::NegativeLength)
		{
			cout << "Please enter a nonnegative value: ";
			cin >> length;
		}
	}
	//display the area of the rectangle 
	cout << "The rectangle's area is "
		<< myRectangle.getArea() << endl;
	return 0;
}