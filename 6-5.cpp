//This program has three functions: main, first, and second
#include<iostream>
using namespace std;

//function prototypes
void first();
void second();

int main()
{
	cout << "I am starting in function main.\n";
	first(); //calling function first 
	second(); //calling function second 
	cout << "Back in function main again. \n";
	return 0;

}
//*****************************
//definition of function first 
//function displays a message 
//*****************************

void first()
{
	cout << "I am now inside the function first.\n";
}

//*********************************
//definition of function second
//this function displays a message 
//*********************************

void second()
{
	cout << "I am now inside the function second.\n";

}