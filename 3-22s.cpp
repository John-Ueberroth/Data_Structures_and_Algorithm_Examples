//This program demonstrates a problem that occures 
// when you mic cin >> with cin.get().
#include <iostream>
using namespace std;

int main()
{
	char ch; //define character ariable
	int number; //define integer variable

	cout << "Enter a number: ";
	cin >> number;                    //read an integer 
	cout << "Enter a character: ";    
	ch = cin.get();                   //Read a character
	cout << "Thank you!\n";
	return 0;
}