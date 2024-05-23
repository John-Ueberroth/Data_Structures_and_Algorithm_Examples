//This program demonstrates a recursive function to calculate 
//The greatest common divisor (gcd) of two numbers
#include <iostream>
using namespace std;

//function prototype 
int gcd(int, int);

int main()
{
	int num1, num2;

	//get two numbers 
	cout << "Enter two integers: ";
	cin >> num1 >> num2;

	//display the GCD of the numbers
	cout << "The greatest common driver of " << num1;
	cout << " and " << num2 << " is ";
	cout << gcd(num1, num2) << endl;
	return 0;
}
//************************************************************************
//Definition of gcd. This function uses recursion to 
//calculate the greates common divisor of two integers,
//passed into the parameters x and y
//************************************************************************

int gcd(int x, int y)
{
	if (x % y == 0)
		return y;
	else
		return gcd(y, x % y);   //recursive case
}