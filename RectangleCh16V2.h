//Specification file for the rectangle class
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
	double width;       //The rectangles width
	double length;      //The rectangles length 
public:
	//Exception class for a negative width 
	class NegativeWidth
	{};

	//Exception class for a negative length
	class NegativeLength
	{};
	//default constructor 
	Rectangle()
	{
		width = 0.0;
		length = 0.0;
	}
	//mutator functions, defined in Rectangle.cpp
	void setWidth(double);
	void setLength(double);

	//Accessor functions 
	double getWidth() const
	{
		return width;
	}
	double getLength() const
	{
		return length;
	}
	double getArea() const
	{
		return width * length;
	}
};
#endif
