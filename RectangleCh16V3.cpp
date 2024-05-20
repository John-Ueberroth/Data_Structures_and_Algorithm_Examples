//Implementation file for the rectangle class
#include "RectangleCh16V3.h"

//*************************************************************************
//setWidth sets the value of the member variable width
//*************************************************************************

void Rectangle::setWidth(double w)
{
	if (w >= 0)
		width = w;
	else
		throw NegativeWidth(w);
}

//************************************************************************
//setLength sets the value of the member variable length 
//************************************************************************
void Rectangle::setLength(double len)
{
	if (len >= 0)
		length = len;
	else
		throw NegativeLength(len);
}