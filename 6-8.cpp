//This program demonstrates a function with three parameters
#include<iostream>
using namespace std;

//function prototypes 
void showSum(int, int, int);

int main()
{
	int value1, value2, value3;
	
	//get three integers
	cout << "Enter three integers and I will display ";
	cout << "their sum: ";
	cin >> value1 >> value2 >> value3;

	//call showSum passing three arguments 
	showSum(value1, value2, value3);
	return 0;

}
//*********************************************************
//showSum definition 
//It uses three integer parameters. Thier sum is displayed
//*********************************************************
void showSum(int num1, int num2, int num3)
{
	cout << (num1 + num2 + num3) << endl;
}