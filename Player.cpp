//Implementation file for the player class
#include"Player.h"
#include <cstdlib>
#include <ctime>
#include<string>
using namespace std;

//***********************************************************************
//constructor 
//***********************************************************************
Player::Player(string playerName)
{
	//seed the random number generator 
	srand(time(0));

	name = playerName;
	guess = " ";
	points = 0;
}

//*********************************************************************
//The makeGuess member function causes the 
//Player to make a guess, either "Cho (even)"
//or "Han (odd)"
//*********************************************************************
void Player::makeGuess()
{
	const int MIN_VALUE = 0;
	const int MAX_VALUE = 1;

	int guessNumber;   //for the user's guess 

	//get a random number, either 0 or 1
	guessNumber = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

	//Convert the random number to Cho or Han 
	if (guessNumber == 0)
		guess = "Cho (even)";
	else
		guess = "Han (odd)";
}

//************************************************************************
//The addPoints member function adds a 
//specified number of points to the player's 
//current balance 
//***********************************************************************
void Player::addPoints(int newPoints)
{
	points += newPoints;
}
//************************************************************************
//The getName member function returns a 
//players name 
//*************************************************************************
string Player::getName()
{
	return name;
}
//************************************************************************
//The getGuess member function returns a player's guess
//************************************************************************
string Player::getGuess()
{
	return guess;
}
//**************************************************************************
//The getPoints member function returns a 
//players points.
//**************************************************************************
int Player::getPoints()
{
	return points;
}
