//This program uses two functions that accept addresses of 
//variable as arguments 
#include<iostream>
using namespace std;

//function prototype 
void getNumber(int*);
void doubleValue(int*);

int main()
{
	int number;

	//call getNumber and pass the address of number 
	getNumber(&number);

	//call double value and pass the address of number 
	doubleValue(&number);

	//display the value in number 
	cout << "That value doubled is " << number << endl;
	return 0;
}

//**************************************************************************
//Definition of getNumber. The parameter, input, is a pointer. 
//This function asks the user for a number. THe value entered
//is stored in the variable pointed to by input
//****************************************************************************

void getNumber(int* input)
{
	cout << "Enter an integer number: ";
	cin >> *input;

}

//****************************************************************************
//definition of doubleValue. The parameter, val, is pointer.
//This function multiplies the variable pointed to by val by 
//two.
//*****************************************************************************

void doubleValue(int* val)
{
	*val *= 2;

}
