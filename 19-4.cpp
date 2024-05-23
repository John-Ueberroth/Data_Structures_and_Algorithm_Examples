//This program demonstrates a recursive function counting 
//the number of times a character appears in a string 
#include <iostream>
#include <string>
using namespace std;

//function prototype 
int numChars(char, string, int);

int main()
{
	string str = "abcdddef";

	//Display the number of times the letter 
	//'d' appears in the string 
	cout << "The letter d appears "
		<< numChars('d', str, 0) << " times.\n";

	return 0;
}

//************************************************************************
//Function numChars. This recursive function 
//counts the number of times the character
//search appears in the string str. The search
//begins at the subscript stored in subscript
//************************************************************************

int numChars(char search, string str, int subscript)
{
	if (subscript >= str.length())
	{
		//base case: the end of the string is reached
		return 0;
	}
	else if (str[subscript] == search)
	{
		//Recursive case: A matching character waas found 
		//Return 1 plus the number of times the search 
		//character appears in the rest of the string
		return 1 + numChars(search, str, subscript + 1);
	}
	else
	{
		//Recursive case: A character that does not match the 
		//search charecter was found. Return the number of times 
		//the search charecter appears in the rest of the string
		return numChars(search, str, subscript + 1);
	}
}

		