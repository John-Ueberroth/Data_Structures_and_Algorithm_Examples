//This function displayMessage is repeaditdy called from a loop
#include<iostream>
using namespace std;

//*****************************************
//Definition of function displayMessage
//This function displays a greeting 
//*****************************************

void displayMessage()
{
	cout << "greetings from function displayMessage.\n";
}

//*******************************************
//function main
//*******************************************

int main()
{
	cout << "Hello from main.\n";
	for (int i = 0; i < 5; i++)
		displayMessage(); //call display message
	cout << "Back in function main again.\n";
	return 0;

}