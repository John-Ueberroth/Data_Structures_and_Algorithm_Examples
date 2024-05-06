//This program demonstrates the use of structures
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct PayRoll
{
	int empNumber;   //Employee number 
	string name;     //Employees name
	double hours;    //hours worked 
	double payRate;  //hourly payrate 
	double grossPay; //gross pay 
};

int main()
{
	PayRoll employee; //employee is a PayRoll Structure

	//get the employee's number 
	cout << "Enter the employee's number: ";
	cin >> employee.empNumber;

	//get the employee's name
	cout << "Enter the employee's name: ";
	cin.ignore(); //to skip the remaining '\n' character
	getline(cin, employee.name);

	//get the hours worked by the employee
	cout << "How many hours did the employee work? ";
	cin >> employee.hours;

	//get the employees hourly pay rate.
	cout << "What is the employee's hourly payRate? ";
	cin >> employee.payRate;

	//calculate the employee's gross pay 
	employee.grossPay = employee.hours * employee.payRate;


	//display the employee data 
	cout << "Here is the employees payroll data: \n";
	cout << "Name: " << employee.name << endl;
	cout << "Number: " << employee.empNumber << endl;
	cout << "Hours worked: " << employee.hours << endl;
	cout << "Hourly pay rate: " << employee.payRate << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Gross Pay: $" << employee.grossPay << endl;
	return 0;
	 
}
