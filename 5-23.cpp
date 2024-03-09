//This program test for file open errors. 
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;
	int number;

	//open the file. 
	inputFile.open("BadListOfNumbers.txt");

	//If the file successfully opened, process it.
	if (inputFile)
	{
		//Read the numbers from the file and 
		//display them
		while (inputFile >> number)
		{
			cout << number << endl;
		}
		//close the file 
		inputFile.close();
	}
	else
	{
		//Diplay an error message.
		cout << "Error opening the file.\n";
	}
	return 0;
}


