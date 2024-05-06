//This program demonstrates an enumerated data type 
#include<iostream>
#include<iomanip>
using namespace std;

enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY};

//function prototype 
void displayDayName(Day);

int main()
{
	const int NUM_DAYS = 5;     //the number of days 
	double sales[NUM_DAYS];     //To hold sales for each day 
	double total = 0.0;         //accumulator 
	Day workDay;                //Loop counter 

	//get the sales for each day 
	for (workDay = MONDAY; workDay <= FRIDAY;
		workDay = static_cast<Day>(workDay + 1))
	{
		cout << "Enter the sales for day ";
		displayDayName(workDay);
		cout << ": ";
		cin >> sales[workDay];
	}

	//calculate the total sales 
	for (workDay = MONDAY; workDay <= FRIDAY;
		workDay = static_cast<Day>(workDay + 1))
		total += sales[workDay];

	//display the total 
	cout << "The total sales are $" << setprecision(2)
		<< fixed << total << endl;
	return 0;
}


//***********************************************************************
//Definition of the displayDayName function 
//THis function accepts an argument of the Day type and 
//displays the corresponding name of the day 
//*************************************************************************

void displayDayName(Day d)
{
	switch (d)
	{
	case MONDAY: cout << "Monday";
		break;
	case TUESDAY: cout << "Tuesday";
		break;
	case WEDNESDAY: cout << "Wednesday";
		break;
	case THURSDAY: cout << "Thursday";
		break;
	case FRIDAY: cout << "Friday";
	}
}

