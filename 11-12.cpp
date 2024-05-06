//This program demonstrates an enumerated data type 
#include<iostream>
#include<iomanip>
using namespace std;

enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY};

int main()
{
	const int NUM_DAYS = 5;        //The number of days
	double sales[NUM_DAYS];        //to hold sales for each day 
	double total = 0.0;            //accumulator 
	Day workDay;                   //loop counter 

	//get the sales for each day
	for (workDay = MONDAY; workDay <= FRIDAY;
		workDay = static_cast<Day>(workDay + 1))
	{
		cout << "Enter the sales for day "
			<< workDay << ": ";
		cin >> sales[workDay];
	}

	//Calculate the total sales 
	for (workDay = MONDAY; workDay <= FRIDAY;
		workDay = static_cast<Day>(workDay + 1))
		total += sales[workDay];
	
	//display the total 
	cout << "The total sales are $" << setprecision(2)
		<< fixed << total << endl;
	return 0;
}