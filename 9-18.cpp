//This program demonstrates a unique_ptr pointing 
//to a dynamically allocated array of integers 
#include<iostream>
#include<memory>
using namespace std;

int main()
{
	int max; //max size of the array 

	//get the number of values to store 
	cout << "how many numbers do you want to enter? ";
	cin >> max;

	//define a unique_ptr smart pointer, pointing 
	//to a dynamically allocated array of ints 
	unique_ptr<int[]> ptr(new int[max]);

	//get values for the array 
	for (int index = 0; index < max; index++)
	{
		cout << "Enter an integer number: ";
		cin >> ptr[index];
	}
	
	//display the values in the array.
	cout << "Here are the values you entered: \n";
	for (int index = 0; index < max; index++)
		cout << ptr[index] << endl;
	return 0;
}