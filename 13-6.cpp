//This program demonstrates a constructor 
#include<iostream>
using namespace std;

//demo class declaration 

class Demo
{
public:
	Demo();    //constructor

};

Demo::Demo()
{
	cout << "Welcome to the constructor!\n";

}

//****************************************************************************
//function main
//*****************************************************************************

int main()
{
	Demo demoObject; //define a Demo object 

	cout << "This program demonstrates an object\n";
	cout << "with a constructor.\n";
	return 0;
}