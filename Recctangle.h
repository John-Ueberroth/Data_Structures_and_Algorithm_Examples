//specification file for the Rectangle class
//This verson has a constructor
#ifndef RECCTANGLE_H
#define RECCTANGLE_H

class Rectangle
{
private:
	double width;
	double length;
public:
	Rectangle(double, double);    //constructor
	void setWidth(double);
	void setLength(double);

	double getWidth() const
	{
		return width;
	}

	double getLength() const
	{
		return length;
	}

	double getArea()const
	{
		return width * length;
	}
};

#endif
