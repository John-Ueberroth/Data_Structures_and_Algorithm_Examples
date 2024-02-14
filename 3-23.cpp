//THis program successfully uses bot 
//cin>> and cin.get(0 for keyboard input.
#include <iostream>
using namespace std;

int main()
{
	char ch;
	int number;

	cout << "Enter a number: ";
	cin >> number;
	cin.ignore();                  //skip the newline character
	cout << "Enter a character: ";
	ch = cin.get();
	cout << "Thank You!\n";
	return 0;
}