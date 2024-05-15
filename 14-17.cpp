//This program simulates the game of Cho-Han
#include<iostream>
#include<string>
#include"Dealer.h"
#include"Player.h"
using namespace std;

//Function prototypes 
void roundResults(Dealer&, Player&, Player&);
void checkGuess(Player&, Dealer&);
void displayGrandWinner(Player, Player);

int main()
{
	const int MAX_ROUNDS = 5;       //number of rounds 
	string player1Name;             //First player's name
	string player2Name;             //Second player's name

	//get the player's names
	cout << "Enter the first player's name: ";
	cin >> player1Name;
	cout << "Enter the second player's name: ";
	cin >> player2Name;


	//create the dealer
	Dealer dealer;

	//create two players 
	Player player1(player1Name);
	Player player2(player2Name);

	//play the rounds 
	for (int round = 0; round < MAX_ROUNDS; round++)
	{
		cout << "____________________________________________\n";
		cout << "Now playing round " << (round + 1) << endl;

		//roll the dice 
		dealer.rollDice();

		//THe players make their guesses
		player1.makeGuess();
		player2.makeGuess();

		//determine the winner of the round
		roundResults(dealer, player1, player2);

	}

	//display the grand winner 
	displayGrandWinner(player1, player2);
	return 0;
}

//************************************************************************
//The roundResults function determines the results 
//of the current round 
//************************************************************************
void roundResult(Dealer& dealer, Player& player1, Player& player2)
{
	//show the dice values 
	cout << "The dealer rolled " << dealer.getDie1Value()
		<< " and " << dealer.getDie2Value() << endl;

	//Show the results (cho or Han)
	cout << "Result: " << dealer.getChoOrHan() << endl;

	//check each Players guess and award points 
	checkGuess(player1, dealer);
	checkGuess(player2, dealer);
}

//**********************************************************************
//The checkGuess function checks a player's guess
//against the dealer's result 
//***********************************************************************
void checkGuess(Player& player, Dealer& dealer)
{
	const int POINTS_TO_ADD = 1;   //Points to award winner

	//Get the player's guess 
	string guess = player.getGuess();

	//get the result (CHo or Han)
	string ChoHanResult = dealer.getChoOrHan();

	//display the player's guess
	cout << "The player " << player.getName()
		<< " guessed " << player.getGuess() << endl;

	//award points if the player guessed correctly 
	if (guess == ChoHanResult)
	{
		player.addPoints(POINTS_TO_ADD);
		cout << "Awarding " << POINTS_TO_ADD
			<< " point(s) to " << player.getName()
			<< endl;
	}
}

//************************************************************************
//The displayGrandWinner function displays the game's grand winner 
//*************************************************************************
void displayGrandWinner(Player player1, Player player2)
{
	cout << "_____________________________________________________\n";
	cout << "Game over. Here are the results:\n";

	//display player #1's results 
	cout << player1.getName() << ": "
		<< player1.getPoints() << " points\n";

	//display player #2's results 
	cout << player2.getName() << ": "
		<< player2.getPoints() << " points\n";

	//determine the grand winner 
	if (player1.getPoints() > player2.getPoints())
	{
		cout << player2.getName()
			<< " is the grand winner!\n";

	}
	else
	{
		cout << "Both players are tied!\n";
	}
}

