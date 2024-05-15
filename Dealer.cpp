//Implementation file for the Dealer class
#include"Dealer.h"
#include"DieV2.h"
#include<string>
using namespace std;

//*********************************************************************
//Constructor 
//*********************************************************************
Dealer::Dealer()
{
	//set the intial dice values to 0 
	//(we will not use these values 
	die1Value = 0; 
	die2Value = 0; 

}

//************************************************************************
//The rollDicce member function rolls the 
//dice and saves their values 
//**************************************************************************
void Dealer::rollDice()
{
	//roll the dice
	die1.roll();
	die2.roll();

	//save the dice values 
	die1Value = die1.getValue();
	die2Value = die2.getValue();
}
//*************************************************************************
//The getChoOrHan member function returns 
//the result of the dice roll, Cho (even)
//or Han (odd).
//**************************************************************************
string Dealer::getChoOrHan()
{
	string result; //To hold the result 

	//get the sum of the dice 
	int sum = die1Value + die2Value;

	//determine even or odd
	if (sum % 2 == 0)
		result = "Cho (even)";
	else
		result = "Han (odd)";
	//return the result 
	return result;

}

//*********************************************************************
//The getDie1Value member function returns 
//the value of die 1 
//***********************************************************************

int Dealer::getDie1Value()
{
	return die1Value;
}
//***************************************************************************
//getDie2Value member function returns 
//the value of die #2
//**************************************************************************
int Dealer::getDie2Value()
{
	return die2Value;
}
