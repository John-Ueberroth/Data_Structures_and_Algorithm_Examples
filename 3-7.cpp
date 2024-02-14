//This program demonstrates integer overflow and underflow
#include <iostream>
using namespace std;

int main()
{
	//testVar is initialized the maximum value for a short.
	short testVar = 32767;

	//display testVar.
	cout << testVar << endl;

	//add 1 to testVar to make it overflow.
	testVar = testVar + 1;
	cout << testVar << endl;

	//subtract 1 from testVar to make it underflow.
	testVar = testVar - 1;
	cout << testVar << endl;
	return 0;
}