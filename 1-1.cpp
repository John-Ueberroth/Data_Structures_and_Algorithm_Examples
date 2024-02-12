//This program calculates user pay
#include <iostream>
using namespace std;

int main()
{
	double hours, rate, pay;

	//get the number of hours worked
	cout << "how many hours did you work? ";
	cin >> hours;

	//get hourly pay rate
	cout << "how much are you paid per hour? ";
	cin >> rate;

	//calculate pay 
	pay = hours * rate;

	//display pay.
	cout << "you have earned $" << pay << endl;
	return 0;
}