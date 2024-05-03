//This program uses a function to copy a C-string into an array.
#include<iostream>
using namespace std;

void stringCopy(char[], char[]); //function prototype 

int main()
{
	const int LENGTH = 30; //size of the arrays
	char first[LENGTH];    //to hold the user's input 
	char second[LENGTH];   //to hold the copy 

	//get a string from the user and store in first 
	cout << "Enter a string with no more than "
		<< (LENGTH - 1) << " charecters: \n";
	cin.getline(first, LENGTH);

	//copy the contents of first to second 
	stringCopy(first, second);

	//display the copy 
	cout << "The string you entered is:\n" << second << endl;
	return 0;
}

//*************************************************************************
//definition of the stringCopy function 
//This function copies the C-string in string1 to string2
//*************************************************************************
void stringCopy(char string1[], char string2[])
{
	int index = 0; //loop counter 

	//step through string1, copying each element to 
	//string2. Stop when the null character is encountered.
	while (string1[index] != '\0')
	{
		string2[index] = string1[index];
		index++;
	}

	//place a null character in string2.
	string2[index] = '\0';
}
