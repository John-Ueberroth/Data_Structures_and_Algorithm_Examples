//This program uses the Rectangle class which is declared in the 
//RectangleV1Header file.The member Rectangle's class's member 
//fucntions are defined in the rectangle.cpp file. This program 
//should be compiled with those files in a project 
#include<iostream>
#include"RectangleV1header.h"      //needed for the rectangle class.
using namespace std;

int main()
{
	Rectangle box;    //define an instance of the rectangle class
	double rectWidth; //local variable for width
	double rectLength; //local variable for length

	//get the Rectangles Length and width from the user.
	cout << "This program will calculate the area of a \n";
	cout << "Rectangle. Whaat is the width? ";
	cin >> rectWidth;
	cout << "What is the length?";
	cin >> rectLength;

	//Store the width and length of the Rectangle 
	//in the box object
	box.setWidth(rectWidth);
	box.setLength(rectLength);

	//display the Rectangles data
	cout << "Here is the rectangle's data:\n";
	cout << "Width: " << box.getWidth() << endl;
	cout << "Length: " << box.getLength() << endl;
	cout << "Area: " << box.getArea() << endl;
	return 0;
}