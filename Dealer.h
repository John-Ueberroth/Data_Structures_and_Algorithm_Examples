//Specification file for the dealer class
#ifndef DEALER_H
#define DEALER_H
#include <string>
#include "DieV2.h"
using namespace std;

class Dealer
{
private:
	Die die1;               //object for die #1
	Die die2;               //object for die #2
	int die1Value;          //Value of die #1
	int die2Value;          //value of die #2

public:
	Dealer();               //consructor 
	void rollDice();        //to roll the dice 
	string getChoOrHan();   //to get the result of (Cho or Han)
	int getDie1Value();     //To get the value of die # 1
	int getDie2Value();     //to get the value of die # 2

};
#endif
