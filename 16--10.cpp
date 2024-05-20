//This program demonstrates an overloaded function template
#include<iostream>
using namespace std;

template<class T>
T sum(T va11, T va12)
{
	return va11 + va12;
}

template<class T>
T sum(T va11, T va12, T va13)
{
	return va11 + va12 + va13;
}

int main()
{
	double num1, num2, num3;

	//Get two values and display their sum
	cout << "Enter two values: ";
	cin >> num1 >> num2;
	cout << "Their sum is " << sum(num1, num2) << endl;

	//get three values and display their sum 
	cout << "Enter three values";
	cin >> num1 >> num2 >> num3;
	cout << "Thier sum is " << sum(num1, num2, num3) << endl;
	return 0;
}