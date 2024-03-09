//This program converts the speed of 60 kph through
//130 kph (in 10 kph increments) to mph 
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//constants for the speeds
	const int START_KPH = 60,       //starting speed
		      END_KPH = 130,        //ending speed
		      INCREMENT = 10;       //speed increment

	//constant for the conversion factor
	const double CONVERSION_FACTOR = 0.6214;
	
	//variables
	int kph;               //to hold speeds in kph
	double mph;            //to hold speeds in mph

	//Set the numeric output formatting
	cout << fixed << showpoint << setprecision(1);

	//Display the table headings.
	cout << "KPH\tMPH\n";
	cout << "--------------------\n";

	//display the speeds 
	for (kph = START_KPH; kph <= END_KPH; kph += INCREMENT)
	{
		//calculate mph
		mph = kph * CONVERSION_FACTOR;

		//display the speeds in kph and mph 
		cout << kph << "\t" << mph << endl;
	}
	return 0;
}