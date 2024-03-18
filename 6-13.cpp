//This program demonstrates two value-returning functions
//The square function is called in mathmatical statement.
#include <iostream>
#include<iomanip>
using namespace std;

//function prototypes
double getRadius();
double square(double);

int main()
{
	const double PI = 3.14159; //constant for pi
	double radius;             //to hold the circle's radius 
	double area;               //to hold the circle's area 

	//set the numeric output formatting 
	cout << fixed << showpoint << setprecision(2);

	//Get the radius of the circle 
	cout << "This program calculates the area of ";
	cout << "a circle.\n";
	radius = getRadius();

	//calculate the area of the circle 
	area = PI * square(radius);

	//display the area 
	cout << "The area is " << area << endl;
	return 0;
}

//****************************************************************
//Definitions of function getRadius. 
//This function asks the user to enter the radius of 
//circle and then returns that number as a double.
//*****************************************************************

double getRadius()
{
	double rad;

	cout << "Enter the radius of the circle: ";
	cin >> rad;
	return rad;
}

//*************************************************************
//Definition of function square 
//This function accepts a double argument and returns 
//the square of the argument as a double.
//*************************************************************

double square(double number)
{
	return number * number;
}
