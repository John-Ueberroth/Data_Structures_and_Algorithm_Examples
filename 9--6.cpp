//This program processes an array using pointer notation 
#include<iostream>
using namespace std;

int main()
{
	const int SIZE = 5;   //size of the array 
	int numbers[SIZE];    //array of integers
	int count;            //counter varaible 

	//get values to store in the array.
	//use pointer notation instead of subscripts 
	cout << "Enter " << SIZE << " numbers: ";
	for (count = 0; count < SIZE; count++)
		cin >> *(numbers + count);

	//display the values in the array 
	//use pointer notation instead of subscripts 
	cout << "Here are the numbers you entered: ";
	for (count = 0; count < SIZE; count++)
		cout << *(numbers + count) << " ";
	cout << endl;
	return 0;
}