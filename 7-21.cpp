//This program demonstrates a two-demensional array 
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const int NUM_DIVS = 3;                //Number of divisions 
	const int NUM_QTRS = 4;                //number of quarters 
	double sales[NUM_DIVS][NUM_QTRS];    //array with three rows and 4 colomns
	double totalSales = 0;                 //to hold the total sales 
	int div, qtr;                          //loop counters 

	cout << "This program will calculate the total sales of\n";
	cout << "all the company's divisions.\n";
	cout << "Enter the following sales information:\n\n";

	//nested loops to fill the array with quarterly 
	//sales figures for each division.
	for (div = 0; div < NUM_DIVS; div++)
	{
		for (qtr = 0; qtr < NUM_QTRS; qtr++)
		{
			cout << "Division " << (div + 1);
			cout << ", Quarter " << (qtr + 1) << ": $";
			cin >> sales[div][qtr];
		}
		cout << endl; //print blank line. 
	}

	//Nested loops used to add all the elements 
	for (div = 0; div < NUM_DIVS; div++)
	{
		for (qtr = 0; qtr < NUM_QTRS; qtr++)
			totalSales += sales[div][qtr];
	}

	cout << fixed << showpoint << setprecision(2);
	cout << "The total sales for the company are: $";
	cout << totalSales << endl;
	return 0;
}