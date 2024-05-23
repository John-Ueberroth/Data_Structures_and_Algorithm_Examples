//This program demonstrates a simple recursive function 
#include<iostream>
using namespace std;

//function prototype
void message(int);

int main()
{
	message(5);
	return 0;
}
//************************************************************************
//Definition of function message. If the value in times is 
//greater than 0, the message is displayed and the funciton 
//is recursively called with the argument times -1.
//************************************************************************
void message(int times)
{
	cout << "Message called with " << times << " in times.\n";

	if (times > 0)
	{
		cout << "This is a recursive function. \n";
		message(times - 1);
	}
	cout << "messsage returning with " << times;
	cout << " in times.\n";
}
