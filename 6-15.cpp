//This program uses a function that returns true or false.
#include<iostream>
using namespace std;

//function prototype
bool isEven(int);

int main()
{
	int val;

	//get the number from the user
	cout << "Enter an integer and I will tell you ";
	cout << "if it is even or odd: ";
	cin >> val;

	//Indicate whether it is even or odd
	if (isEven(val))
		cout << val << " is even.\n";
	else
		cout << val << "is odd.\n";
	return 0;

}

//**********************************************************************
//definition of function isEven
//THis function accepts an integer argument and test it to be
//even or odd. THe function returns true if the argument is even or odd. 
//The function returns true if the argument is even or false if 
//the argument is odd. The return value is bool.
//***********************************************************************

bool isEven(int number)
{
	bool status;

	if (number % 2 == 0)
		status = true; //The number is even if there is no rememainder 
	else
		status = false; //Otherwise, the number is odd.
	return status;
}
