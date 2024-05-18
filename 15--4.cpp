//This program demonstrates the order in which base and 
//derived class constructors and destructors are called
#include<iostream>
using namespace std;

//***************************
//Base class declaration    *
//***************************

class BaseClass
{
public:
	BaseClass() //constructor 
	{
		cout << "This is a BaseClass constructor. \n";

	}
	~BaseClass() //destructor 
	{
		cout << "This is the BaseClass destructor.\n";
	}

};

//***********************************************************************
//DerivedClass declaration 
//***********************************************************************
class DerivedClass : public BaseClass
{
public:
	DerivedClass()  //constructor 
	{
		cout << "This is the DerivedClass constructor.\n";

	}
	~DerivedClass()   //destructor 
	{
		cout << "This is the DerivedCLass destructor.\n";
	}
};

//********************************************************************
//main function 
//********************************************************************

int main()
{
	cout << "We will now define a DerivedClass object.\n";

	DerivedClass object;

	cout << "The program is now going to end.\n";
	return 0;
}