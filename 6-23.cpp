//This program shows that a static local variable is only 
//initilized once.
#include<iostream>
using namespace std;

void showStatic(); //fucntion prototype 

int main()
{
	//call the showStatic function five times
	for (int count = 0; count < 5; count++)
		showStatic();
	return 0;

}

//**************************************************************
//definition of showStatic.
//statNum is a static local variable. Its calue is displayed
//and then incremented just before the function returns.
//***************************************************************

void showStatic()
{
	static int statNum = 5;

	cout << "statNum is " << statNum << endl;
	statNum++;
}