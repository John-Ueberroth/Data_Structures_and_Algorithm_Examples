#ifndef FEETINCHES_H
#define FEETINCHES_H

#include<iostream>
using namespace std;

class FeetInches; //forward declaration 

//fucntion prototypes for overloaded stream operators
ostream& operator <<(ostream&, const FeetInches&);
istream& operator << (istream&, FeetInches&);

//The FeetInches class holds distances or measurements 
//expressed in feet and inches 

class FeetInches
{
private:
	int feet;     //to hold a number of feet
	int inches;   //to hold a number of inches 
	void simplify(); //defined in FeetInches.cpp
public:
	//constructor 
	FeetInches(int f = 0, int i = 0)
	{
		feet = f;
		inches = i;
		simplify();
	}

	//mutator 
	void setFeet(int f)
	{
		feet = f;
	}
	void setInches(int i)
	{
		inches = i;
		simplify();
	}
	//accessor functions 
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
	FeetInches operator - (const FeetInches&); //over.loaded -
	FeetInches operator ++ ();                 //prefic ++
	FeetInches operator ++(int);               //postfic ++
	bool operator > (const FeetInches&);       //overloaded >
	bool operator < (const FeetInches&);       //overloaded <
	bool operator ==(const FeetInches&);       //overloaded ==

	//friends 
	friend ostream& operator <<(ostream&, const FeetInches&);
	friend istream& operator <<(istream&, FeetInches&);

}



#endif


