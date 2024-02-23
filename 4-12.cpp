//This program uses nested if/else statements to assign a 
//letter grade (A, B, C, D, or F) to a numeric test score.
#include <iostream>
using namespace std;

int main()
{
	//constants for grade thresholds
	const int A_Score = 90,
		      B_Score = 80,
		      C_Score = 70,
		      D_Score = 60;

	int testScore;  //to hold the numeric test score

	//Get the numeric test score 
	cout << "Enter your numeric test score and I will\n";
	cout << "tell you the letter grade you earned: ";
	cin >> testScore;

	//Determine the letter grade.
	if (testScore >= A_Score)
	{
		cout << "your grade is A.\n";
	}
	else
	{
		if (testScore >= B_Score)
		{
			cout << "Your grade is B.\n";
		}
		else
		{
			if (testScore >= C_Score)
			{
				cout << "Your grade is C.\n";
			}
			else
			{
				if (testScore >= D_Score)
				{
					cout << "Your grade is D.\n";
				}
			}
		}
	}
	return 0;

}