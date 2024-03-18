//This program demonstrates a function with a parameter
#include <iostream>
using namespace std;

//Function prototype 
void displayValue(int);    //has a parameter data type 

int main()
{
	cout << "I am passing 5 to displayValue.\n";
	displayValue(5);//call displayValue with argument 5
	cout << "Now I am back in main.\n";
	return 0;
}

//*****************************************************
//definition of display value 
//uses a integer parameter whos value is displayed 
//*****************************************************

void displayValue(int num) //parameter in function definition is 
//whats passed by the program, (datatype, variable name)

{
	cout << "The value is " << num << endl;
}


