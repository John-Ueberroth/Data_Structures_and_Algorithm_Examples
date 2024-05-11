//This program demonstrates a destructor 
#include<iostream>
using namespace std;

class Demo
{
public:
	Demo(); //constructor
	~Demo(); //destructor

};

Demo::Demo()
{
	cout << "Welcolme to the constructor!\n";
}

Demo::~Demo()
{
	cout << "The destructor is now running. \n";
}

//************************************************************************
//function main
//************************************************************************

int main()
{
	Demo demoObject;      //Define a demo object

	cout << "This program demonstrates an object\n";
	cout << "with a constructor and destructor.\n";
	return 0;
}