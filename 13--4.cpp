//This program uses smart pointers to allocate three 
//instances of the rectangle class.
#include<iostream>
#include<memory>
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

//****************************************************************************
//function main
//****************************************************************************

int main()
{
	double number;            //to hold a number 
	double totalArea;         //the total area

	//dynamically allocate the objects
	unique_ptr<Rectangle> kitchen(new Rectangle);
	unique_ptr<Rectangle> bedroom(new Rectangle);
	unique_ptr<Rectangle> den(new Rectangle);

	//get the kitchen dimensions 
	cout << "What is the kitchen's length? ";
	cin >> number;                //get the length 
	kitchen->setLength(number);   //store in the kitchen object
	cout << "What is the kitchen's width? ";
	cin >> number;                //get the width 
	kitchen->setWidth(number);    //store in the kitchen object

	//get the bedroom demensions 
	cout << "What is the bedroom's Length?";
	cin >> number;                //get the length 
	bedroom->setLength(number);   //store in bedroom object 
	cout << "What is the bedroom's Width? ";
	cin >> number;                //get the width 
	bedroom->setWidth(number);    //store in bedroom object

	//get the den demensions
	cout << "What is the den's length? ";
	cin >> number;                //get the length 
	den->setLength(number);       //store in the den object 
	cout << "What is the den's width? ";
	cin >> number;                //get the width 
	den->setWidth(number);        //store in the den object


	//calculate the total area 
	totalArea = kitchen->getArea() + bedroom->getArea() + den->getArea();

	//display the total area of the three rooms 
	cout << "The total area of the three rooms is "
		<< totalArea << endl;



}