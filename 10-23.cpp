//This program lets the user enter a number. The 
//dollarFormat function formats the number as 
//a dollar amount 
#include<iostream>
#include<string>
using namespace std;

//function prototype 
void dollarFormat(string&);

int main()
{
	string input;

	//get the dollar amount from the user.
	cout << "Enter a dollar amount in the form nnnnn.nn : ";
	cin >> input;
	dollarFormat(input);
	cout << "Here is the amount formatted: \n";
	cout << input << endl;
	return 0;
}

//************************************************************************
//Definition of the dollarFormat function. This function 
//accepts a string refrence object, which is assumed 
//to hold a nummber with a decimal point. The function 
//formats the number as a dollar anount with commas
//and a $ symbol
//*************************************************************************

void dollarFormat(string& currency)
{
	int dp;

	dp = currency.find('.');    //find decimal point 
	if (dp > 3)
	{
		for (int x = dp - 3; x > 0; x -= 3)
			currency.insert(x, ",");
	}
	currency.insert(0, "$");    // insert dollar sign

}