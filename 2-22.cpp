// This program calculates the amount of pay that 
// will be contributed to a retierement plan if 5%,
// 7% or 10% of monthly pay witheld.
#include <iostream>
using namespace std;

int main()
{
	//variables to hold the monthly pay and the amount of contribution
	double monthlyPay = 6000.0, contribution;

	//calculate and display a 5% CONTRIBUTION 
	contribution = monthlyPay * 0.05;
	cout << "5 percent is $" << contribution
		 << " per month.\n";

	//calculate and display a 7% contribution 
	contribution = monthlyPay * 0.07;
	cout << "7 percent is $" << contribution
		<< " per month.\n";

	//calculate and display a 10% contribution 
	contribution = monthlyPay * 0.1;
	cout << "10 percent is $" << contribution
		<< " per mounth.\n";
	return 0;


}