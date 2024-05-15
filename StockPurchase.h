#ifndef STOCK_PURCHASE
#define STOCK_PURCHASE
#include "Stock.h"

class StockPurchase
{
private:
	Stock stock;     //The stock that was purchased
	int shares;      //The number of shares
public:
	//The default constructor sets shares to 0. THe stock 
	//object is initialized by its default constructor 
	StockPurchase()
	{
		shares = 0;
	}
	//constructor 
	StockPurchase(const Stock& stockObject, int numShares)
	{
		stock = stockObject;
		shares = numShares;
	}
	//accessor function 
	double getCost() const
	{
		return shares * stock.getSharePrice();
	
	}
};
#endif
