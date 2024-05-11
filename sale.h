//specification file for the sale class
#ifndef SALE_H
#define SALE_H

class Sale
{
private:
	double itemCost;   //cost of the item 
	double taxRate;    //sales tax rate
public:
	Sale(double cost, double rate)
	{
		itemCost = cost;
		taxRate = rate;
	}
	double getItemCost() const
	{
		return itemCost;

	}
	double getTaxRate() const
	{
		return taxRate;
	}
	double getTax() const
	{
		return (itemCost * taxRate);

	}
	double getTotal()const
	{
		return (itemCost + getTax());
	}
};
#endif

