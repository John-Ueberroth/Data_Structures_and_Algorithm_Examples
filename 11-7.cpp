//This program uses a function to return a structure. This 
//is a modification of program 11-2.
#include<iostream>
#include<iomanip>
#include<cmath>    //for the pow function 
using namespace std;

//constant for pi 
const double PI = 3.14159;

//structure declaration 
struct Circle
{
	double radius;   //a circle's radius 
	double diameter; //a circle's diameter 
	double area;     //a circle's area 

};

//fucntion prototype
Circle getInfo();

int main()
{
	Circle c;    //define a structure varaible 

	//get data about the circle
	c = getInfo();
	
	//calculate the circle's area 
	c.area = PI * pow(c.radius, 2.0);

	//display the circle data
	cout <<  "The radius and area of the circle are: \n";
	cout << fixed << setprecision(2);
	cout << "Radius: " << c.radius << endl;
	cout << "Area: " << c.area << endl;
	return 0;
}

//**************************************************************************
//defintion of fucntiongetInfo. This function uses a local 
//variable, tempCircle, which is a circle structure. The user 
//eneter the diameter of the circle, which is stored in 
//tempCircle.diameter. The function then calculates the radius 
//which is stored in tempCircle.radius. tempCircle is then 
//returned from the function 
//**************************************************************************

Circle getInfo()
{
	Circle tempCircle; //Temporary structure variable 
	
	//store circle data in the temporary variable 
	cout << "Enter the diameter of a circle: ";
	cin >> tempCircle.diameter;
	tempCircle.radius = tempCircle.diameter / 2.0;
	
	//return the temporary variable 
	return tempCircle;

}