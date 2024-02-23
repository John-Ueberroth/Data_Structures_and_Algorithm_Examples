//This program demonstrates a variable defined in the inner block 
#include <iostream>
using namespace std;

int main()
{
	//constants for minimum income and years
	const double MIN_INCOME = 35000.0;
	const int MIN_YEARS = 5;

	//Get the annual income.
	cout << "What is your annual income? ";
	double income;
	cin >> income;

	if (income >= MIN_INCOME)
	{
		//Get the number of years at the current job
		cout << "How many years have you worked at your current job? ";
		int years; //variable definition
		cin >> years;

		if (years > MIN_YEARS)
			cout << "you qualify!\n";
		else
		{
			cout << "You must have been employed for\n"
				<< "more than " << MIN_YEARS
				<< " years to qualify.\n";
		}
	}
	else
	{
		cout << "You must earn at least $" << MIN_INCOME
			<< "to qualify.\n";
	}
	return 0;
}




