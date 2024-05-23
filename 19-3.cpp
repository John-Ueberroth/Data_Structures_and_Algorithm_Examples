//This program demonstrates a recursive function to 
//calculate the factorisal of a number 
#include<iostream>
using namespace std;

//function prototype 
int factorial(int);

int main()
{
	int number;

	//get the number from the user 
	cout << "Enter an integer value an I will display\n";
	cout << " its factorial: ";
	cin >> number;

	//display the factorial of the number 
	cout << "The factorial of " << number << " is ";
	cout << factorial(number) << endl;
	return 0;
}
//************************************************************************
//Definition of factorial. A recursive funtion to calculate
//the factorial of the parameter n
//*************************************************************************

int factorial(int n)
{
	if (n == 0)        
		return 1;                          //base case
	else
		return n * factorial(n - 1);       //recursive case
}