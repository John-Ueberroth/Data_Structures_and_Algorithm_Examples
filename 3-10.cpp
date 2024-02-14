//THis program uses a type cast expression to print a charecter 
//from a number
#include <iostream>
using namespace std;

int main()
{
	int number = 65;

	//display the value of the number variable
	cout << number << endl;

	//displau the value of number converted to 
	//char data type
	cout << static_cast<char>(number) << endl;
	return 0;
}