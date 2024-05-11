//Implementation file for the Rectangle class
//This version has a constructor that accepts arguments
#include"RectangleV4 header.h"    //needed for the rectangle class
#include<iostream>                //needed for cout 
#include<cstdlib>                 //needed for exit funcitons
using namespace std;

//************************************************************************
//The constructor accepts arguments for width and length
//************************************************************************
Rectangle::Rectangle(double w, double len)
{
	width = w;
	length = len;
}

//*************************************************************************
//setWidth sets the value of the member variable width
//**************************************************************************

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

//***********************************************************************
//SetLength sets the value of the member variable length
//***********************************************************************

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
