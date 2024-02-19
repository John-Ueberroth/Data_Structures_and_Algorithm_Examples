//This program demonstrates how a misplaced semicolon
//premeturly terminates an if statemant
#include<iostream>
using namespace std;

int main() 
{
	int x = 0, y = 10;
	cout << "x is " << x << " and y is " << y << endl;
	if (x > y); //there it is
		cout << "x is grater than y\n"; //This is always executed
	return 0;

}