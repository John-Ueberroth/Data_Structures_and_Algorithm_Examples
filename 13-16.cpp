//This program simulates the rolling of dice
#include<iostream>
#include "Die.h"
using namespace std;

int main()
{
	const int DIE1_SIDES = 6;        //Number of sides for die #1
	const int DIE2_SIDES = 12;       //Number of sides for die #2
	const int MAX_ROLLS = 5;         //number of times to roll

	//create two instances of Die class
	Die die1(DIE1_SIDES);
	Die die2(DIE2_SIDES);

	//display the initial states of the dice 
	cout << "This simulates the rolling of a "
		<< die1.getSides() << " sided die and a "
		<< die2.getSides() << " sided die.\n";

	cout << "Initial value of the dice: \n";
	cout << die1.getValue() << " "
		<< die2.getValue() << endl;

	//roll the dice five times
	cout << "Rolling the dice " << MAX_ROLLS
		<< " times.\n";
	for (int count = 0; count < MAX_ROLLS; count++)
	{
		//Roll the dice 
		die1.roll();
		die2.roll();

		//display the values of the dice 
		cout << die1.getValue() << " "
			<< die2.getValue() << endl;
	}
	return 0;
}