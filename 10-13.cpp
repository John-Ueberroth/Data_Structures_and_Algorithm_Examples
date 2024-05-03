//This program uses the fucntion nameSlice to cut the last 
//name off of a string that contains the user's first and 
//last names.
#include<iostream>
using namespace std;

void nameSlice(char[]); //fucntion prototype 

int main()
{
	const int SIZE = 41; //array size 
	char name[SIZE];     //to hold the users name 

	cout << "Enter your first and last names, seperated ";
	cout << "by a space: \n";

	cin.getline(name, SIZE);
	nameSlice(name);
	cout << "Your first name is: " << name << endl;
	return 0;
}
//***************************************************************************
//definition of function nameSlice. THis function accepts a 
//character array as its argument. It scans the array looking 
//for a space. When it finds one, it replaces it with a null terminator
//***************************************************************************

void nameSlice(char userName[])
{
	int count = 0; //loop counter 

	//loate the first space, or the null terminator if 
	//there are no spaces.
	while (userName[count] != ' ' && userName[count] != '\0')
		count++;

	//if a space was found replace it with a null terminator 
	if (userName[count] == ' ')
		userName[count] = '\0';
}
