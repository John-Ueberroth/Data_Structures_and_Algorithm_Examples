//This program demonstrates late variable definition 
#include <iostream>
using namespace std;

int main()
{
	//Constants for minimum income and years
	const double MIN_INCOME = 35000.0;
	const int MIN_YEARS = 5;

	//Get the annual income
	cout << "What is your annual income? ";
	double income; //late variable definintion (can make a variable anywhere)
	cin >> income;

	//Get teh number of years at the current job
	cout << "How many years have you worked at "
		<< "your current job? ";
	int years; //variable definition (can make a variable anywhere)
	cin >> years;

	//determine the user's loan qualifications 
	if (income >= MIN_INCOME || years > MIN_YEARS)
		cout << "you qualify.\n";
	else
	{
		cout << "you must earn at least $"
			<< MIN_INCOME << " or have been "
			<< "employed more than " << MIN_YEARS
			<< " years.\n";
	}
	return 0;
}