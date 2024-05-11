//This program creates three instances of the rectangle class 
#include<iostream>
using namespace std;

//rectangle class declaration 
class Rectangle
{
private:
	double width;
	double length;
public:
	void setWidth(double);
	void setLength(double);
	double getWidth() const;
	double getLength() const;
	double getArea() const;

};

//***********************************************************************
//set width assigns a value to the width member
//***********************************************************************

void Rectangle::setWidth(double w)
{
	width = w;
}

//************************************************************************
//setLength assigns a value to the length member
//************************************************************************

void Rectangle::setLength(double len)
{
	length = len;

}

//*************************************************************************
//getWidth returns the value in the width member
//*************************************************************************

double Rectangle::getWidth() const
{
	return width;
}

//*************************************************************************
//getLength returns the value in the length member
//*************************************************************************

double Rectangle::getLength() const
{
	return length;

}

//*************************************************************************
//getArea returns the product of width times length 
//*************************************************************************

double Rectangle::getArea() const
{
	return width * length;

}

//***************************************************************************
//function main
//***************************************************************************

int main()
{
	double number;            //to hold number 
	double totalArea;         //the total area 
	Rectangle kitchen;        //to hold kitchen dimensions 
	Rectangle bedroom;        //to hold bedroom dimensions 
	Rectangle den;            //to hold den dimensions

	//get the kitchen dimensions
	cout << "What is the kitchen's length? ";
	cin >> number;                   //get the length
	kitchen.setLength(number);       //Store in kitchen object
	cout << "What is the kitchen's width? "; 
	cin >> number;                   //get the width
	kitchen.setWidth(number);        //store in kitchen object

	//get the bedroom dimensions 
	cout << "What is the bedroom's length? ";
	cin >> number;                     //get the length
	bedroom.setLength(number);         //store in the bedroom object
	cout << "What is the bedroom's width? ";
	cin >> number;                    //get the width 
	bedroom.setWidth(number);         //store in the bedroom object

	//get the den dimensions 
	cout << "What is the dens length? ";
	cin >> number;                    //get the length 
	den.setLength(number);            //store in the den object
	cout << "What is the dens width? ";
	cin >> number;                    //get the width
	den.setWidth(number);             //store in the den object
	
	//calculate the total area of the three rooms 
	totalArea = kitchen.getArea() + bedroom.getArea() + den.getArea();

	//display the total area of the three rooms 
	cout << "The total area of the three rooms is "
		<< totalArea << endl;
	return 0;
}