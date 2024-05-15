//This program demonstrates memberwise assignment 
#include<iostream>
#include "Recctangle.h"
using namespace std;

int main()
{
	//define two rectangle objects 
	Rectangle box1(10.0, 10.0);   //width =10.0, length = 10.0
	Rectangle box2(20.0, 20.0);   //width = 20.0, length = 20.0

	//Display each objects's width and length 
	cout << "box1's width and length: " << box1.getWidth()
		<< " " << box1.getLength() << endl;
	cout << "Box2's width and length: " << box2.getWidth() << " "
		<< box2.getLength() << endl;

	//assign the members of box 1 to box 2 
	
	box2 = box1;

	//Display each objects width and length again 
	cout << "box1's width and length: " << box1.getWidth()
		<< " " << box1.getLength() << endl;
	cout << "Box2's width and length: " << box2.getWidth() << " "
		<< box2.getLength() << endl;

}