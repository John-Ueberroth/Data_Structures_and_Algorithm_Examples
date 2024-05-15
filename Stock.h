#ifndef STOCK
#define STOCK
#include <string>
using namespace std;

class Stock
{
private:
	string symbol;         //trading symbol of the stock
	double sharePrice;     //Current price per share
public:
	//default constructor 
	Stock()
	{
		set(" ", 0.0);
	}
	//constructor 
	Stock(const string sym, double price)
	{
		set(sym, price);
	}
	//copy constructor 
	Stock(const Stock &obj)
	{
		set(obj.symbol, obj.sharePrice);
	}
	//Mutator function 
	void set(string sym, double price)
	{
		symbol = sym;
		sharePrice = price;
	}
	//Accessor functions 
	string getSymbol() const
	{
		return symbol;
	}
	double getSharePrice() const
	{
		return sharePrice;
	}
};
#endif
