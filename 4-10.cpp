//This program demonstrates the nested if statement
#include <iostream>
using namespace std;

int main()
{
	char employed,  //currently employed Y or N 
		recentGrad; //recently graduate, Y or N

	//Is the user employed and a recent graduate?
	cout << "Answer the following questions\n";
	cout << "with either Y for yes or N for no\n";
	cout << "Are you employed?: ";
	cin >> employed;
	cout << "Have you graduated from college ";
	cout << "in the past two years? ";
	cin >> recentGrad;

	//determine the user's loan qualification
	if (employed == 'Y')
	{
		if (recentGrad == 'Y') //nested if 
		{
			cout << "You qualify for the special ";
			cout << "intrest rate.\n";

		}
	}
	return 0;
}