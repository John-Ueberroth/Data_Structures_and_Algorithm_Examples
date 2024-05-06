//This program demonstrates an anonymous union 
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	union                 //anonymous union 
	{
		int hours;
		float sales;

	};

	char payType;               //to hold the pay type 
	float payRate;              //hourly pay rate 
	float grossPay;             //gross pay 

	cout << fixed << showpoint << setprecision(2);
	cout << "This program calculates either hourly wages or \n";
	cout << "sales commission.\n";

	//get the pay type hourly or commission
	cout << "Enter H for hourly wages or C for commission: ";
	cin >> payType;

	//determine the gross pay, depending on the pay type 
	if (payType == 'H' || payType == 'h')
	{
		//This is an hourly paid employee. Get the 
		//pay rate and hours worked.
		cout << "What is the hourly pay rate? ";
		cin >> payRate;
		cout << "How many hours were worked? ";
		cin >> hours;  //anonymous union member 

		//calculate and display the gross pay
		grossPay = hours * payRate;
		cout << "Gross pay: $" << grossPay << endl;
	}
	else if (payType == 'C' || payType == 'c')
	{
		//This a commission-paid employee. Get the 
		//amount of sales/
		cout << "What are the total sales for this employee? ";
		cin >> sales;  //Anonymous union member

		//calculate and display the gross pay.
		grossPay = sales * 0.10;
		cout << "Gross pay: $" << grossPay << endl;
	}
	else
	{
		//The user made an invald selection 
		cout << payType << " is not a valid selection.\n";
	}
	return 0;
}