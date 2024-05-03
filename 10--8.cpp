//This program uses strcmp to compare the string entered 
//by the user with the valid stereo part numbers.
#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

int main()
{
	//price of parts
	const double A_PRICE = 249.0,
		         B_PRICE = 299.0;

	//charecter array for part number 
	const int PART_LENGTH = 8;
	char partNum[PART_LENGTH];

	//Instruct the user to enter a part number.
	cout << "The stereo part numbers are: \n"
		<< "\tBoomBox, part number S147-29A\n"
		<< "\tShelf Model, part number of the stero you\n"
		<< "Enter the part number of the stereo you\n"
		<< "wish to purchase: ";

	//read a part number of at most 8 charecters 
	cin >> partNum;

	//determine what user entered using strcmp
	//and print its price 
	cout << showpoint << fixed << setprecision(2);
	if (strcmp(partNum, "S147-29A") == 0)
		cout << "The price is $" << A_PRICE << endl;
	else if (strcmp(partNum, "S147-29B") == 0)
		cout << "The price is $" << B_PRICE << endl;
	else
		cout << partNum << " is not a valid part number. \n";
	return 0;
}