//This program calculates a consultant's charges at 50$ an hour 
//for a minimum of 5 hours. The ?: operator adjusts hours to 5
//if less than 5 hours was worked.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double PAY_RATE = 50.0; //hourly pay rate 
	const int MIN_HOURS = 5;      //minimum billable hours 
	double hours;                 //hours worked
	double charges;               //Total charges

	//Get the hours worked.
	cout << "How many hours were worked? ";
	cin >> hours;

	//Determine the hours to charge for.
	hours = hours < MIN_HOURS ? MIN_HOURS : hours; 
	//^^^^this is wierd, if hours is less than minimum hours 
	//then hours becomes minimum hours, if hours is greater than min 
	//hours then hours becomes hours, so this sets the lowest limit 
	//to minimum hours 
	//(conditional ? if true this thing happens : 
	//if false this other thing happens
	
	//Calculate and display the charges 
	charges = PAY_RATE * hours;
	cout << fixed << showpoint << setprecision(2)
		<< "The charges are $" << charges << endl;
	return 0;

}