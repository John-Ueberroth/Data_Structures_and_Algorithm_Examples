//This program demonstrates the rangebased for loop with a vector 
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//Define and initialize a vector 
	vector<int> numbers(5);

	//get values for the vector elements 
	for (int& val : numbers)
	{
		cout << "Enter an integer value: ";
		cin >> val;
	}
	//display the vector elements 
	cout << "HEre are the values you enetered: \n";
	for (int val : numbers)
		cout << val << endl;

	return 0;
}