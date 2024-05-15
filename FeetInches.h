#ifndef FEETINCHES_H
#define FEETINCHES_H

//The FeetInches class holds distances or measurements
//expressed in feet and inches

class FeetInches
{
private:
	int feet;     //To hold a number of feet
	int inches;   //to hold a number of inches
	void simplify();     //Deffined in FeetInches.cpp
public:
	//constructor ]
	FeetInches(int f = 0, int i = 0)
	{
		feet = f;
		inches = i;
		simplify();
	}

	//mutator function 
	void setFeet(int f)
	{
		feet = f;
	}
	void setInches(int i)
	{
		inches = i;
		simplify();

	}
	//accessor function
	int getFeet() const
	{
		return feet;
	}
	int getInches() const
	{
		return inches;
	}

	//overloaded operator functions 
	FeetInches operator + (const FeetInches&); //overloaded +
	FeetInches operator - (const FeetInches&); //overloaded -
};
#endif
