//This program demonstrates the C++ string class 
#include<iostream>
#include<string>
using namespace std;

int main()
{
	//define three string objects
	string str1, str2, str3;

	//assign values to all three
	str1 = "ABS";
	str2 = "DEF";
	str3 = str1 + str2;

	//display all three 
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	//concatenate a string onto str3 and display it.
	str3 += "GHI";
	cout << str3 << endl;
	return 0;
}