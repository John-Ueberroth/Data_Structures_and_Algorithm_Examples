//This program stores, in two arrays, the hours worked by 5 
//employees, and their hourly pay rates.
#include<iostream>
#include<iomanip>
#include<vector> //needed to define vectors 
using namespace std;

int main()
{
	vector<int> hours; //hours is an empty vector 
	vector<double> payRate; //payRate is an empty vector 
	int numEmployees;       //The number of employees 
	int index;              //loop counter 

	//get the number of employees
	cout << "How many employees do you have? ";
	cin >> numEmployees;

	//input the payroll data 
	cout << "Enter the hours worked by " << numEmployees;
	cout << " employees and thier hourly rates.\n ";
	for (index = 0; index < numEmployees; index++)
	{
		int tempHours; //holds the number of hours entered
		double tempRate;   //holds the pay rate entered 

		cout << "Hours worked by employee #" << (index + 1);
		cout << ": ";
		cin >> tempHours;
		hours.push_back(tempHours); //add an element to vector hours 
		cout << "Hourly pay rate for employee #";
		cout << (index + 1) << ": ";
		cin >> tempRate;
		payRate.push_back(tempRate); //add an element to vector payrate
	}

	//display each employees gross pay 
	cout << "Here is the gross pay for each employee:\n";
	cout << fixed << showpoint << setprecision(2);
	for (index = 0; index < numEmployees;index++)
	{
		double grossPay = hours[index] * payRate[index];
		cout << "Employee #" << (index + 1);
		cout << ": $" << grossPay << endl;
	}
	return 0;
}

