//This program averages 3 test scores.
//It demonstrates an if statement executing 
//a block of if statements 
#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int HIGH_SCORE = 95;                  //A high score is 95or greater
	int score1, score2, score3;                 //to hold three test scores
	double average;

	//get the three test scores.
	cout << "Enter 3 test scores and I will average them: ";
	cin >> score1 >> score2 >> score3;

	//calculate and display the average score 
	average = (score1 + score2 + score3) / 3.0;
	cout << fixed << showpoint << setprecision(1);
	cout << "Your average is " << average << endl;

	//If the average is high, congragulate the user
	if (average > HIGH_SCORE)
	{
		cout << "Congragulations!\n";
		cout << "Thats a high score.\n";
		cout << "You deserve a pat on the back!\n";

	}
	return 0;
}