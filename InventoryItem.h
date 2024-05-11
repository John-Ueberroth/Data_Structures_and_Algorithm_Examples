//This class has overloaded constructors
#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include<string>
using namespace std;

class InventoryItem
{
private:
	string description;  //The item description 
	double cost;         //The item cost
	int units;           //Number of units on hand 

public: 
	//constructor #1
	InventoryItem()
	{
		//Initialize description, cost, and units
		description = " ";
		cost = 0.0;
		units = 0;
	}
	//constructor #2
	InventoryItem(string desc)
	{
		//assign the value to description 
		description = desc;

		//initialize cost and units 
		cost = 0.0;
		units = 0;
	}

	//constructor #3
	InventoryItem(string desc, double c, int u)
	{
		//assign values to description, cost, and units 
		description = desc;
		cost = c;
		units = u;
	}

	//mutator functions 
	void setDescription(string d)
	{
		description = d;
	}

	void setCost(double c)
	{
		cost = c;

	}
	void setUnits(int u)
	{
		units = u;
	}
	
	//accessor functions 
	string getDescription() const
	{
		return description;
	}
	double getCost() const
	{
		return cost;
	}
	int getUnits() const
	{
		return units;
	}
};
#endif
