//This program demonstrates random numbers.
#include <iostream>
#include <cstdlib>   //for rand and srand
#include <ctime>     //for the time function
using namespace std;

int main()
{
	// Get the system time.
	unsigned seed = time(0);

	//Seed the random number generator
	srand(seed);

	//diplay three random numbers 
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	return 0;
}