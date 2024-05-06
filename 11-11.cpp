//This program demonstrates a enumerated data type 
#include<iostream>
#include<iomanip>
using namespace std;

enum Day{ MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY};

int main()
{
	const int NUM_DAYS = 5;     //The number of days 
	double sales[NUM_DAYS];     //To hold sales for each day 
	double total = 0.0;         //accumulator 
	int index;                  //loop counter 

	//get the sales for each day 
	for (index = MONDAY; index <= FRIDAY; index++)
	{
		cout << "Enter the sales for day "
			<< index << ": ";
		cin >> sales[index];
	}

	//calculate the total sales 
	for (index = MONDAY; index <= FRIDAY; index++)
		total += sales[index];

	//display the total 
	cout << "The total sales area $" << setprecision(2)
		<< fixed << total << endl;

	return 0;
}