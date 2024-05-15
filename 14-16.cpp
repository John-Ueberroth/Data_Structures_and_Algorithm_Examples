//Stock trader program 
#include<iostream>
#include<iomanip>
#include"Stock.h"
#include"StockPurchase.h"
using namespace std;

int main()
{
	int sharesToBuy;    //number of shares to buy

	//create a Stock object for the company stock. The 
	//trading symbol is XYZ and the stock is currently 
	//priced at $9.62 per share
	Stock xyzCompany("XYZ", 9.62);

	//display the symbol and the current share price
	cout << setprecision(2) << fixed << showpoint;
	cout << "XYZ Company's trading symbol is " << xyzCompany.getSymbol() << endl;
	cout << "The stock is currently $" << xyzCompany.getSharePrice() << " per share.\n";

	//Get the number of shares to purchase 
	cout << "How many shares do you want to buy? ";
	cin >> sharesToBuy;

	//create a StockPurchase object for transaction
	StockPurchase buy(xyzCompany, sharesToBuy);

	//display the cost of the transaction 
	cout << "The cost of the transaction is $"
		<< buy.getCost() << endl;
	return 0;
}