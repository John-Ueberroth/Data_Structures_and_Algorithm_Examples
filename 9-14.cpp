//This program totals and averages the sales figures for any
//number of days. The figures are stored in a dynamically 
//allocated array
#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
	double* sales = nullptr, //to dynamically allocate an array
		total = 0.0,          //accumulator 
		average;             //to hold average sales 
	int numDays,             //to hold the number of days of sales 
		count;               //counter varaible 

	//get the number of days of sales 
	cout << "How many days of sales figures do you wish ";
	cout << "to process? ";
	cin >> numDays;

	//dynamically allocate an array large enough to hold 
	//that many days of sales amounts.
	sales = new double[numDays];

	//get the sales figures for each day.
	cout << "Enter the sales figures below.\n";
	for (count = 0; count < numDays; count++)
	{
		cout << "Day " << (count + 1) << ": ";
		cin >> sales[count];
	}

	//calculate the total sales
	for (count = 0; count < numDays; count++)
	{
		total += sales[count];
	}

	//calculate the average sales per day 
	average = total / numDays;

	//display the results 
	cout << fixed << showpoint << setprecision(2);
	cout << "\n\nTotal Sales: $" << total << endl;
	cout << "Average Sales: $" << average << endl;

	//free dynamically allocated memory
	delete[] sales;
	sales = nullptr;   //make sales a null pointer

	return 0;