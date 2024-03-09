//This program averages 3 test scores. It repeats as
//many times as the user wishes.
#include<iostream>
using namespace std;

int main()
{
	int score1, score2, score3;   //three scores
	double average;               //average score
	char again;                   //to hold Y or N input 

	do
	{
		//get the three scores 
		cout << "Enter 3 scores and I will average them: ";
		cin >> score1 >> score2 >> score3;

		//calculate and display the average
		average = (score1 + score2 + score3) / 3.0;
		cout << "The average is " << average << ".\n";

		//does the user want to average another set?
		cout << "Do you want to average another set? (Y/N) ";
		cin >> again;
	} while (again == 'Y' || again == 'y');
	return 0;
}