//Implementation file for the rectangle class 
//This versiopn has a constructor 
#include"RectangleV3 header.h" //needed for rectangle class
#include<iostream>     //needed for cout 
#include<cstdlib>      //needed for exit function 
using namespace std;

//***********************************************************************
//The constructor initializes width and length to 0.0
//************************************************************************
Rectangle::Rectangle()
{
	width = 0.0;
	length = 0.0;

}

//************************************************************************
//setWidth sets the value of member variable width 
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
//*************************************************************************
//setLength sets the value of member variable length
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