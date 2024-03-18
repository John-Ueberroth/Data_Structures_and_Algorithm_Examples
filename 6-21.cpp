//This program shows that local variables do not retain 
//their values between function calls
#include<iostream>
using namespace std;

//Function prototypes
void showLocal();

int main()
{
	showLocal();
	showLocal();
	return 0;
}

//******************************************************************
//Definition of function showLocal
//THe intitial value of localNum, which is 5, is displayed.
//The value of localNum is then changed to 99 before the 
//function returns.
//*******************************************************************

void showLocal()
{
	int localNum = 5; //local variable 

	cout << "localNum is " << localNum << endl;
	localNum = 99;
}