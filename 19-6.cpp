//This program demonstrates a recursive function 
//that calculates Fibonacci numbers
#include<iostream>
using namespace std;

//function prototype 
int fib(int);

int main()
{
	cout << "The first 10 fibonacci numbers are: \n";
	for (int x = 0; x < 10; x++)
		cout << fib(x) << " ";
	cout << endl;
	return 0;
}
//************************************************************************
//Function fib. Accepts an int argument 
//in n. This function returns the nth 
//fibonaccci number 
//*************************************************************************

int fib(int n)
{
	if (n <= 0)
		return 0;                          //base case
	else if (n == 1)
		return 1;                          //base case 
	else
		return fib(n - 1) + fib(n - 2);    //recursive case
}