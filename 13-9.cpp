//This program demonstrates passing an argument to a constructor 
#include<iostream>
#include<iomanip>
#include"Sale.h"
using namespace std;

int main()
{
	const double TAX_RATE = 0.06;   //6 percent sales tax rate
	double cost;                    //to hold the item cost

	//get the cost of the item 
	cout << "Enter the cost of the item: ";
	cin >> cost;

	//Create a sale object for the transaction 
	Sale itemSale(cost, TAX_RATE);

	//set numeric output formatting
	cout << fixed << showpoint << setprecision(2);

	//display the sales tax and total
	cout << "The amount of sales tax is $"
		<< itemSale.getTax() << endl;
	cout << "The total of the sale is $";
	cout << itemSale.getTotal() << endl;
	return 0;

}