//This program reaads data from a file into an array 
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int ARRAY_SIZE = 10; //array size 
	int numbers[ARRAY_SIZE];   //array with ten elements 
	int count = 0;             //loop counter variable 
	ifstream inputFile;        //input file stream object 

	//open the file 
	inputFile.open("TenNumbers.txt");
	//read the numbers from the file into the array 
	while (count < ARRAY_SIZE && inputFile >> numbers[count])
		count++;
	//close the file 
	inputFile.close();

	//display the numbers read 
	cout << "The numbers are: ";
	for (count = 0; count < ARRAY_SIZE;count++)
	
	 cout << numbers[count] << " ";
	 cout << endl;
	 return 0;

}