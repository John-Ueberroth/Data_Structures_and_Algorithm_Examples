//THis program is used by General Crates, Inc. to calculate 
//the colume, cost, customer charge, and profit of a crate 
//of any size. It calculates this data from user input, which 
//consists of the dimensions of the crate.
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	//constants for the cost and amount charged
	const double COST_PER_CUBIC_FOOT = 0.23;
	const double CHARGE_PER_CUBIC_FOOT = 0.5;

	//variables 
	double length, //the crate's length
		width,  //the crate's width
		height, //the crates hieght
		volume, //the volume of the crate
		cost,   //cost to build the crate
		charge, //the customer charge for the crate
		profit; //The profit made on the crate

	//set the desired output of the crate 
	cout << setprecision(2) << fixed << showpoint;

	//Prompt the user for the crates length, width and height 
	cout << "Enter the dimensions of the crate (in feet): \n";
	cout << "length: ";
	cin >> length;
	cout << "width: ";
	cin >> width;
	cout << "height: ";
	cin >> height;

	//calculate the crates volume, the cost to produce it, 
	// the charge to the customer, and the profit

	volume = length * width * height;
	cost = volume * COST_PER_CUBIC_FOOT;
	charge = volume * CHARGE_PER_CUBIC_FOOT;
	profit = charge - cost;

	//display the calculated data 
	cout << "The volume of the crate is ";
	cout << volume << " cubic feet.\n";
	cout << "Cost to build: $" << cost << endl;
	cout << "charge to customer: $" << charge << endl;
	cout << "Profit: $" << profit << endl;
	return 0;



}