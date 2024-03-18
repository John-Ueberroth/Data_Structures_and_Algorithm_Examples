//This program uses a refrence variable as a function parameter
#include<iostream>
using namespace std;

//function prototype. The parameter is a refrence variable 
void doubleNum(int&);

int main()
{
	int value = 4;

	cout << "In main, value is " << value << endl;
	cout << "Now calling doubleNum..." << endl;
	doubleNum(value);
	cout << "Now back in main. value is " << value << endl;
	return 0;
}

//********************************************************************
//Definition of double Num
//The parameter refVar is a refrence variable. The value 
//in refVar is doubled.
//*********************************************************************

void doubleNum(int& refVar)
{
	refVar *= 2;
}
