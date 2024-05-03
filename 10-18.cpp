//This program uses relational operators to alphabetically 
//sort two strings entered by the user 
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name1, name2;

	//get the name 
	cout << "Enter a name (last name first): ";
	getline(cin, name1);

	//get another name
	cout << "Enter another name: ";
	getline(cin, name2);

	//display them in alphabetical order 
	if (name1 < name2)
		cout << name1 << endl << name2 << endl;
	else if (name1 > name2)
		cout << name2 << endl << name1 << endl;
	else
		cout << "You entered the same name twice!\n";
	return 0;
}