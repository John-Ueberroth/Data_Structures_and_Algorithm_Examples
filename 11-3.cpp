//This program demonstrates partially initialized 
//structure variables 
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct EmployeePay
{
	string name;      //employee name
	int empNum;       //employee number 
	double payRate;   //hourly pay rate
	double hours;     //hours worked
	double grossPay;  //Gross pay

};

int main()
{
	EmployeePay employee1 = { "Betty Ross", 141, 18.75 };
	EmployeePay employee2 = { "Jill SandBurg", 142, 17.50 };

	cout << fixed << showpoint << setprecision(2);
	
	//calculate pay for employee 1
	cout << "Name: " << employee1.name << endl;
	cout << "Employee Number: " << employee1.empNum << endl;
	cout << "Enter the number of hours worked by this employee: ";
	cin >> employee1.hours;
	employee1.grossPay = employee1.hours * employee1.payRate;
	cout << "Gross Pay: " << employee1.grossPay << endl;

	//calculate pay for employee 2
	cout << "Name: " << employee2.name << endl;
	cout << "Employee Number: " << employee2.empNum << endl;
	cout << "Enter the number of hours worked by this employee: ";
	cin >> employee2.hours;
	employee2.grossPay = employee2.hours * employee2.payRate;
	cout << "Gross Pay: " << employee2.grossPay << endl << endl;

	return 0;
}
