//This program displays a solution to the Towers of 
//Hanoi game
#include<iostream>
using namespace std;

//function prototype 
void moveDiscs(int, int, int, int);

int main()
{
	const int NUM_DISCS = 3;   //Number of discs to move 
	const int FROM_PEG = 1;    //Initial "from" peg
	const int TO_PEG = 3;      //Initial "to" peg
	const int TEMP_PEG = 2;    //Initial "temp" peg

	//play the game 
	moveDiscs(NUM_DISCS, FROM_PEG, TO_PEG, TEMP_PEG);
	cout << "All the pegs are moved!\n";
	return 0;
}
//************************************************************************
//The moveDiscs function displays a disc move in 
//the Towers of Hanoi game.
//THe parameters are: 
//Num: the number of discs to move from 
//fromPeg: the peg to move from 
//toPeg: the peg to move to 
//tempPeg: the temporary peg
//************************************************************************

void moveDiscs(int num, int fromPeg, int toPeg, int tempPeg)
{
	if (num > 0)
	{
		moveDiscs(num - 1, fromPeg, tempPeg, toPeg);
		cout << "Move a disc from peg " << fromPeg
			<< " to peg " << toPeg << endl;
		moveDiscs(num - 1, tempPeg, toPeg, fromPeg);
	}
}
