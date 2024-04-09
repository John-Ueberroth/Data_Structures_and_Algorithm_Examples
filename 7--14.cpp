//This program reads data from a file into an array.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int ARRAY_SIZE = 100; //array size
	int numbers[ARRAY_SIZE];    //array with 100 elements
	int count = 0;              //loop counter variable 
	ifstream inputFile;         //input file stream object

	inputFile.open("numbers.txt"); //open a file 

	//Read the numbers from the file into the array 
	//after this loop executs, the count variable will hold
	//the number of values that were stored in the array.
	while (count < ARRAY_SIZE && inputFile >> numbers[count])
		count++;

	//close the file 
	inputFile.close();

	//display the numbers read.
	cout << "The numbers are: ";
	for (int index = 0; index < count; index++)
		cout << numbers[index] << " ";
	cout << endl;
	return 0;
	

		

}