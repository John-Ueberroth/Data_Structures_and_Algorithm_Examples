//This program has a partially intialized array.
#include<iostream>
using namespace std;

int main()
{
	const int SIZE = 7;
	int numbers[SIZE] = { 1,2,4,8 }; //intitalize the first 4 elements
	
	cout << "Here are teh contents of the array:\n";
	for (int index = 0; index < SIZE;index++)
		cout << numbers[index];

	cout << endl;
	return 0;
}