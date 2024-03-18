//This program demonstates a function with a parameter.
#include <iostream>
using namespace std;

//Function prototype 
void displayValue(int);

int main()
{
	cout << "I am passing several values to displayValue.\n";
	displayValue(5); //call displayValue with argument 5
	displayValue(10); //call displayValue with argument 10 
	displayValue(2);  //call display value with argument 2
	displayValue(16); //call display value with argument 16
	cout << "Now I am back in main.\n";
	return 0;
}

//*************************************************************
//Definition of function displayValue
//It uses an integer parameter whose value is displayed 
//*************************************************************
void displayValue(int num)
{
	cout << "the value is " << num << endl;
}
