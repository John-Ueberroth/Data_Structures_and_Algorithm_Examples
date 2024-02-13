//This program calculates the circumfrance of a circle
#include <iostream>
using namespace std;

int main()
{
	//constants
	const double PI = 3.14159;
	const double DIAMETER = 10.0;

	//variable to hold the circumfrance

	double circumfrance;

	//calculate the circumfrance;
	circumfrance = PI * DIAMETER;

	//Display the circumfrance.
	cout << "The Circumfrance is: " << circumfrance << endl;
	return 0;
}