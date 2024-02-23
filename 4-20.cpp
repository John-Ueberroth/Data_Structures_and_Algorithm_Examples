//This program demonstrates how charecters can be compared with relational 
//operators
#include <iostream>
using namespace std;

int main()
{
	char ch;
	
	//get the character from the user
	cout << "Enter a digit or a letter: ";
	ch = cin.get();

	//determine what the user entered
	if (ch >= '0' && ch <= '9')
		cout << "you entered a digit.\n";
	else if (ch >= 'A' && ch <= 'Z')
		cout << "you entered an uppercase letter.\n";
	else if (ch >= 'a' && ch <= 'z')
		cout << "you entered a lowercase letter.\n";
	else
		cout << "That is not a digit or a letter.\n";
	return 0;
}