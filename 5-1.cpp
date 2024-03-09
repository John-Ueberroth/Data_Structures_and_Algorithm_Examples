//This program demonstrates the ++ and -- operators
#include<iostream>
using namespace std;

int main()
{
	int num = 4; //num starts out with 4

	//display the value in num
	cout << "The variable num is " << num << endl;
	cout << "I will now increment num.\n\n";

	//Use the post fix ++ to increment
	num++;
	cout << "Now the variable num is " << num << endl;
	cout << "I will increment again.\n\n";

	//use prefix ++ to increment num
	++num;
	cout << "Now the variable num is " << num << endl;
	cout << "I will now decrement num.\n\n";

	//use postfix -- to decrement num
	num--;
	cout << "now the value in num is " << num << endl;
	cout << "I will decrement num again.\n\n";

	//use prefix -- to decrement num
	--num;
	cout << "Now the variable num is " << num << endl;
	return 0;

}