//This program uses a constructor's default argument
#include<iostream>
#include<iomanip>
#include"SaleV2.h"
using namespace std;

int main()
{
	double cost;     //to hold the item cost 

	//get the cost of the item 
	cout << "Enter the cost of the item: ";
	cin >> cost;

	//create a Sale object for this transaction 
	//specify the item cost, but use the default
	//tax rate of 5 percent
	Sale itemSale(cost);

	//display the sales tax and total 
	cout << "The amount of sales tax is $"
		<< itemSale.getTax() << endl;
	cout << "The total of the sale is $";
	cout << itemSale.getTotal() << endl;
	return 0;
}