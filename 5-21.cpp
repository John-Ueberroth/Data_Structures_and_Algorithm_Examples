//This program reads numbers from a file 
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream outputFile;     //File stream object 
	int numberOfDays;        //Number of days of sales 
	double sales;            //Sales amount for a day 

	//Get the number of days
	cout << "For how many days do you have sales? ";
	cin >> numberOfDays;

	//open a file named sales.txt
	outputFile.open("Sales.txt");

	//get the sales for each day and write it 
	//to the file 
	for (int count = 1; count <= numberOfDays; count++)
	{
		//get the sales for a day 
		cout << "enter the sales for day "
			<< count << ": ";
		cin >> sales;

		//Write the sales to the file
		outputFile << sales << endl;
	}

	//close the file 
	outputFile.close();
	cout << "Data written to Sales.txt \n";
	return 0;
}

