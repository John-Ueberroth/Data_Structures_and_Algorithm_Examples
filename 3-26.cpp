//THis program simulates rolling dice.
#include <iostream>
#include <cstdlib> //for rand and srand
#include <ctime>   //for the time function
using namespace std;

int main()
{
	//constants
	const int MIN_VALUE = 1; //minimum die value 
	const int MAX_VALUE = 6; //maximum die value 

	//variable 
	int die1;  //to hold the value of die #1
	int die2;  //to hold the value of die #2

	//get the system time
	unsigned seed = time();

	//seed the random number generator 
	srand(seed);

	cout << "Rolling the dice now...\n";
	die1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	die2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	cout << die1 << endl;
	cout << die2 << endl;
	return 0;

}