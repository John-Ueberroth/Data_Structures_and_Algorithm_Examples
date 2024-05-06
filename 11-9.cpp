//This program demonstrates a union 
#include<iostream>
#include<iomanip>
using namespace std;

union PaySource
{
	int hours;    //hours worked 
	float sales;  //amount of sales 

};

int main()
{
	PaySource employee1;  //define a union variable
	char payType;         //to hold the pay type
	float payRate;        //hourly pay rate 
	float grossPay;       //Gross pay

	cout << fixed << showpoint << setprecision(2);
	cout << "This program calculates either hourly wages or \n";
	cout << "sales commission.\n";

	//Get the pay type, hourly or commission
	cout << "Enter H for hourly wages or C for commission: ";
	cin >> payType;

	//determine the gross pay. depending on the paytype 
	if (payType == 'H' || payType == 'h')
	{
		//This is an horuly paid employee. Get the 
		//pay rate and hours worked 
		cout << "What is the hourly pay rate?";
		cin >> payRate;
		cout << "How many hours worked? ";
		cin >> employee1.hours;

		//calculate and display the gross pay 
		grossPay = employee1.hours * payRate;
		cout << "Gross pay: $" << grossPay << endl;

	}
	else if (payType == 'C' || payType == 'c')
	{
		//This is a commission-paid employee. Get the 
		//amount of sales 
		cout << "What are the total sales for this employee? ";
		cin >> employee1.sales;

		//calculate and display the gross pay.
		grossPay = employee1.sales * 0.10;
		cout << "Gross pay: $" << grossPay << endl;
	}
	else
	{
		//The user made an invalid selection
		cout << payType << " is not a valid selection.\n";
	}
	return 0;
}