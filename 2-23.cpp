//This program calculates the sale price of an item
//that is regularly priced at 59.95, with a 20 percent 
//discount subtracted

#include <iostream>
using namespace std;

int main()
{
	//variable to hold the regular price, the 
	//amount of a discount, and the sale price.
	double regularPrice = 95.95, discount, salePrice;

	//calculate the amount of 20% discount.
	discount = regularPrice * 0.2;

	//calculate the sale price by subtracting the 
	// discount from regular price
	salePrice = regularPrice - discount;

	//Display the results 
	cout << "Regular price: $" << regularPrice << endl;
	cout << "Discount amount: $" << discount << endl;
	cout << "Sale price: $" << salePrice << endl;
	return 0;
}
