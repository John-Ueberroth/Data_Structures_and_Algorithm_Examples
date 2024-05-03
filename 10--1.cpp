//This program demonstrates some character-testing functions 
#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	char input;

	cout << "Enter any charecter: ";
	cin.get(input);
	cout << "The character you entered is: " << input << endl;
	if (isalpha(input))
		cout << "That's an alphabetic character.\n";
	if (isdigit(input))
		cout << "That's a numeric digit.\n";
	if (islower(input))
		cout << "That's a numeric digit.\n";
	if (isupper(input))
		cout << "The letter you entered is uppercase.\n";
	if (isspace(input))
		cout << "That's a whitespace charecter. \n";
	return 0;
}