//This program demonstrates the strcmp and atoi functions 
#include<iostream>
#include<cctype> //for tolower
#include<cstring>//for strcmp
#include<cstdlib>//for atoi 
using namespace std;

int main()
{
	const int SIZE = 20; //array size 
	char input[SIZE];    //to hold user input 
	int total = 0;       //accumulator 
	int count = 0;       //loop counter 
	double average;      //to hold the average of numbers 

	//get the first number 
	cout << "This program will average a series of numbers.\n";
	cout << "Enter the first number or Q to quit: ";
	cin.getline(input, SIZE);

	//process the number and subsequent numbers 
	while (tolower(input[0]) != 'q')
	{
		total += atoi(input);   //keep a running total 
		count++;                //count the numbers entered 
		//get the next number 
		cout << "Enter the next number or Q to quit: ";
		cin.getline(input, SIZE);
	}

	//if any numbers were entered, display their average.
	if (count != 0)
	{
		average = static_cast<double>(total) / count;
		cout << "Average: " << average << endl;
	}
	return 0;
}