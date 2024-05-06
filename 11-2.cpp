//This program stores data about a circle in a structure 
#include<iostream>
#include<cmath>  // for the pow function 
#include<iomanip>
using namespace std;

//constants for pi 
const double PI = 3.14159;

//structure declaration 
struct Circle
{
	double radius;   //A circle radius 
	double diameter; //A circle's diameter 
	double area;     //A circle

};

int main()
{
	Circle c; //Define a structure variable

	//get the circle's diameter 
	cout << "Enter the diameter of a circle: ";
	cin >> c.diameter;

	//calculate the circle's radius
	c.radius = c.diameter / 2;

	//calculate the circle area 
	c.area = PI * pow(c.radius, 2.0);

	//display the circle 
	cout << fixed << showpoint << setprecision(2);
	cout << "The radius and area of the circle are: \n";
	cout << "Radius: " << c.radius << endl;
	cout << "Area: " << c.area << endl;
	return 0;
}