//this program uses the rectangle's class constructor 
#include<iostream>
#include"RectangleV3 header.h"
using namespace std;

int main()
{
	Rectangle box;         //define an instance of rectangle class

	//Display the rectangle's data
	cout << "Here is the rectangle's data:\n";
	cout << "Width: " << box.getWidth() << endl;
	cout << "Lenght: " << box.getLength() << endl;
	cout << "Area: " << box.getArea() << endl;
	return 0;
}