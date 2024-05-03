//This program demonstrates a funciton, countChars, that counts
//the number of times a specific character appears in a string
#include<iostream>
using namespace std;

int countChars(char*, char);  //function prototype 

int main()
{
	const int SIZE = 51;      //array size 
	char userString[SIZE];    //to hold a string 
	char letter;              //The character to count 

	//get a string from the user 
	cout << "Enter a string (up to 50 characters): ";
	cin.getline(userString, SIZE);

	//choose a character whose occurrences within the string will be counted
	cout << "Enter a character and I will tell you how many\n";
	cout << "times it appears in the string: ";
	cin >> letter;

	//display the number of times the character appears
	cout << letter << " appears ";
	cout << countChars(userString, letter) << " times.\n";
	return 0;
}

//*************************************************************************
//definition of countChars. The parameter strPtr is a pointer 
//that points to a string. The parameter Ch is a character that 
//the function searches for in the string. The function returns
//the number of times the character appears in the string
//**************************************************************************

int countChars(char* strPtr, char ch)
{
	int times = 0; //number of times ch appears in the string 

	//step through the string counting occurrences of ch.
	while (*strPtr != '\0')
	{
		if (*strPtr == ch) //if the current character equals ch...
			times++;       //...increment the counter 
		strPtr++;          //go to the next char in string 
	}

	return times;
}