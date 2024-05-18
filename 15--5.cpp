//This program demonstrates passing arguments to a base
//class constructor 
#include<iostream>
#include"Cube.h"
using namespace std;

int main()
{
	double cubeWidth;    //to hold the cube's width
	double cubeLength;   //to hold the cube's length 
	double cubeHeight;   //to hold the cube's height

	//Get teh width, length, and heigth of 
	//the cube from the user 
	cout << "Enter the dimensons of a cube: \n";
	cout << "Width: ";
	cin >> cubeWidth;
	cout << "Length: ";
	cin >> cubeLength;
	cout << "Height: ";
	cin >> cubeHeight;

	//define a cube object and use the dimensions 
	//entered by the user 
	Cube myCube(cubeWidth, cubeLength, cubeHeight);

	//display the cube object's properties
	cout << "Here are the cube's properties: \n";
	cout << "Width: " << myCube.getWidth() << endl;
	cout << "Length: " << myCube.getLength() << endl;
	cout << "Height: " << myCube.getHeight() << endl;
	cout << "Base area: " << myCube.getArea() << endl;
	cout << "Volume: " << myCube.getVolume() << endl;

	return 0;
}