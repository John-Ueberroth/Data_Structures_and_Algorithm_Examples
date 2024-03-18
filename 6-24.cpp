//This program demonstrates default function arguments 
#include<iostream>
using namespace std;

//function prototype with default arguments
void displayStars(int = 10, int = 1);

int main()
{
	displayStars(); //use default values for colums and rows
	cout << endl;
	displayStars(5); //use default value for rows 
	cout << endl;
	displayStars(7, 3); //use 7 for cols and 3 for rows 
	return 0;

}

//*******************************************************************
//Definition of function displayStars
//the default argument for colums is 10 and for rows is 1.
//This function displays a square made of asterisks 
//********************************************************************

void displayStars(int colums, int rows)
{
	//Nested loop. The outer loop controls the rows 
	//and the inner loop controls the colums.
	for (int down = 0; down < rows; down++)
	{
		for (int across = 0; across < colums; across++)
			cout << "*";
		cout << endl;
	}
		
}