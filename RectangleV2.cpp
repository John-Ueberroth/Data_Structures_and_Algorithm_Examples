//implementation file for the rectangle class
//In this version of the class, the getWidth, getLength,
//and getArea functions are written inline in rectangleV2header.h
#include"RectangleV2 header.h" //needed for rectangle class
#include<iostream>      //needed for cout 
#include<cstdlib>       //needed for exit function 
using namespace std;

//************************************************************************
//setWidth sets the value of the member variable width 
//************************************************************************

void Rectangle::setWidth(double w)
{
	if (w >= 0)
		width = w;
	else
	{
		cout << "Invalid width\n";
		exit(EXIT_FAILURE);
	}
}
//**************************************************************************
//setLength sets the value of the member of the member variable length 
//**************************************************************************

void Rectangle::setLength(double len) 
{
	if (len >= 0)
		length = len;
	else
	{
		cout << "Invalid length\n";
		exit(EXIT_FAILURE);
	}
}

