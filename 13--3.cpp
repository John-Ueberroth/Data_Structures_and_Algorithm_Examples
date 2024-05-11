//This program creates three inctances of the rectangle class
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

//****************************************************************************
//function main
//****************************************************************************

int main()
{
	double number;                 //to hold a number 
	double totalArea;              //the total area
	Rectangle* kitchen = nullptr;  //to point to kitchen dimensions 
	Rectangle* bedroom = nullptr; //to point to bedroom dimensions 
	Rectangle* den = nullptr;      //to point to den dimensions 

	//dynamically allocate the objects
	kitchen = new Rectangle;
	bedroom = new Rectangle;
	den = new Rectangle; 

	//get the kitchen dimensions 
	cout << "what is the kitchen's length?";
	cin >> number;                  //get the length 
	kitchen->setLength(number);     //store in the kitchen object 
	cout << "what is the kitchen's width? ";
	cin >> number;                  //get the width
	kitchen->setWidth(number);      //store in the kitchen object


	//get the bedroom dimensions 
	cout << "what is the bedroom's length?";
	cin >> number;                  //get the length 
	bedroom->setLength(number);     //store in the bedroom object 
	cout << "what is the bedroom's width? ";
	cin >> number;                  //get the width
	bedroom->setWidth(number);      //store in the bedroom object

	//get the den dimensions 
	cout << "What is the den's length? ";
	cin >> number;                  //get the length 
	den->setLength(number);         //store in den object 
	cout << "What is the den's width? ";
	cin >> number;                  //get the width 
	den->setWidth(number);          //store in den object 

	//calculate the area of the three rooms 

	totalArea = kitchen->getArea() + bedroom->getArea() + den->getArea();

	//display the total area of the three rooms 
	cout << "The total area of the three rooms is "
		<< totalArea << endl;

	//delete the object from memory 
	delete kitchen;
	delete bedroom;
	delete den;
	kitchen = nullptr;   //make kitchen a null pointer
	bedroom = nullptr;   //make bedroom a null pointer 
	den = nullptr;       //make den a null pointer

	return 0;

}