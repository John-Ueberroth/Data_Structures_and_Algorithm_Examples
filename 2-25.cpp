//This program converts seconds to minutes and seconds
#include <iostream>
using namespace std;

int main()
{
	//The total second is 125
	int totalSeconds = 125;

	//variables for the minutes and seconds
	int minutes, seconds;

	//get the number of minutes
	minutes = totalSeconds / 60;

	//get the remaining seconds
	seconds = totalSeconds % 60;

	//Display the results 
	cout << totalSeconds << " seconds is equivelent to: \n";
	cout << "Minutes: " << minutes << endl;
	cout << "seconds: " << seconds << endl;
	return 0;

}