//This program demonstrates a static member function 
#include<iostream>
#include<iomanip>
#include"BudgetV2.h"
using namespace std;

int main()
{
	int count;                       //loop counter 
	double mainOfficeRequest;       //main office budget requests
	const int NUM_DIVISIONS = 4;     //Number of divisions

	//get the main office's budget request.
	//Note the no instances of the budget class have been 
	cout << "Enter the main office's budget request: ";
	cin >> mainOfficeRequest;
	Budget::mainOffice(mainOfficeRequest);
	Budget divisions[NUM_DIVISIONS];   //an Array of budget object

	//get the budget requests for each division 
	for (count = 0; count < NUM_DIVISIONS; count++)
	{
		double budgetAmount;
		cout << "Enter the budget request for division ";
		cout << (count + 1) << ": ";
		cin >> budgetAmount;
		divisions[count].addBudget(budgetAmount);

	}

	//Display the budget requests and the corporate budget
	cout << fixed << showpoint << setprecision(2);
	cout << "\nHere are the division budget requests: \n";
	for (count = 0; count < NUM_DIVISIONS; count++)
	{
		cout << "\tDivision " << (count + 1) << "\t$";
		cout << divisions[count].getDivisionBudget() << endl;

	}
	cout << "\tTotal Budget Request: \t$";
	cout << divisions[0].getCorpBudget() << endl;

	return 0;

}