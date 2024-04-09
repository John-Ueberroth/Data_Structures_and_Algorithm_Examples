//this program stores, in two vectors, the hours worked by 5
//employees, and thier hourly pay rates 
#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

int main()
{
	const int NUM_EMPLOYEES = 5;          //number of employees 
	vector<int> hours(NUM_EMPLOYEES);     //a vector of integers 
	vector<double>payRate(NUM_EMPLOYEES); //a vector of doubles 
	int index;                            //loop counter

	//Input the data 
	cout << "Enter the hours worked by " << NUM_EMPLOYEES;
	cout << " employees and thier hourly rates.\n";
	for (index = 0; index < NUM_EMPLOYEES; index++)
	{
		cout << "Hours worked by employee #" << (index + 1);
		cout << ": ";
		cin >> hours[index];
		cout << "Hourly pay rate for employee #";
		cout << (index + 1) << ": ";
		cin >> payRate[index];
	}

	//display each employee's gross pay 
	cout << "\nHere is the gross pay for each employee:\n";
	cout << fixed << showpoint << setprecision(2);
	for (index = 0; index < NUM_EMPLOYEES;index++)
	{
		double grossPay = hours[index] * payRate[index];
		cout << "Employee #" << (index + 1);
		cout << ": $" << grossPay << endl;
	}
	return 0;
}