//This program demonstrates overloaded functions to calaculate 
//the gross weekly pay of hourly paid or salaried employees.
#include<iostream>
#include<iomanip>
using namespace std;

//fucntion prototypes 
void getChoice(char&);
double calcWeeklyPay(int, double);
double calcWeeklyPay(double);

int main()
{
	char selection; //Menu selection 
	int worked;     //hours worked 
	double rate;    //hourly pay rate 
	double yearly;  //yearly salary

	//set numeric output formatting 
	cout << fixed << showpoint << setprecision(2);

	//display the menu and get a selection 
	cout << "Do you want to calculate the weekly pay of\n";
	cout << "(H) and hourly paid employee, or \n";
	cout << "(S) a salaried employee?\n";
	getChoice(selection);


	//Process the menu selection 
	switch (selection)
	{
		//hourly paid employee 
	case 'H':
	case 'h': cout << "How many hours were worked? ";
		cin >> worked;
		cout << "What is the hourly pay rate? ";
		cin >> rate;
		cout << "The gross weekly pay is $";
		cout << calcWeeklyPay(worked, rate) << endl;
		break;
		//salaried employee
	case 'S':
	case 's': cout << "What is the annual salary? ";
		cin >> yearly;
		cout << "The gross weekly pay is $";
		cout << calcWeeklyPay(worked, rate) << endl;
		break;
	}
	return 0;
}

//**********************************************************************
//definition of function getChoice.
//The parameter letter is refrence to char.
//This function askss the user for an H or an S and returns
//the validated input.
//**********************************************************************

void getChoice(char& letter)
{
	//Get the user's selection
	cout << "Enter your choice (H or S): ";
	cin >> letter;

	//validate the selection 
	while (letter != 'H' && letter != 'h' && letter != 'S' && letter != 's')
	{
		cout << "Please enter H or S: ";
		cin >> letter;
	}
}

//***********************************************************************
//definition of overloaded function calcWeeklyPay. 
//This function calculates the gross weekly pay of an hourly paid employee
//The parameter hours holds the number of hours worked. 
//The parameter payRate holds the hourly pay rate. the function returns the
//weekly salary.
//*************************************************************************

double calcWeeklyPay(int hours, double payRate)
{
	return hours * payRate;
}

//************************************************************************
//definition of overloaded function calcWeeklyPay 
//This function calculate the gross weekly pay of a salaried employeee
//The parameter holds the employees annual salary. The function returns the 
//weekly salary
//*************************************************************************

double calcWeeklyPay(double annSalary)
{
	return annSalary / 52;
}
