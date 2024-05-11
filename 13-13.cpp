//This program demonstrates a class with overloaded constructors
#include<iostream>
#include<iomanip>
#include"InventoryItem.h"
using namespace std;


int main()
{
	//create an InventoryItem object and call 
	//The default constructor
	InventoryItem item1;
	item1.setDescription("Hammer"); //set the description 
	item1.setCost(6.95);            //set the cost
	item1.setUnits(12);             //set the units 

	//Create an InventoryItem object and call
	//constructor #2
	InventoryItem item2("Pliers");

	//create an InventoryItem object and call 
	InventoryItem item3("Wrench", 8.75, 20);

	cout << "The following items are in inventory: \n";
	cout << setprecision(2) << fixed << showpoint;

	//Display the data for item1
	cout << "Description: " << item1.getDescription() << endl;
	cout << "Cost: $" << item1.getCost() << endl;
	cout << "Units on Hand: " << item1.getUnits() << endl << endl;

	//Display the data for item2
	cout << "Description: " << item2.getDescription() << endl;
	cout << "Cost: $" << item2.getCost() << endl;
	cout << "Units on Hand: " << item2.getUnits() << endl << endl;

	//Display the data for item3
	cout << "Description: " << item3.getDescription() << endl;
	cout << "Cost: $" << item3.getCost() << endl;
	cout << "Units on Hand: " << item3.getUnits() << endl;
	return 0;

}