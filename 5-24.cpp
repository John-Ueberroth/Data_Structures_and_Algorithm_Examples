//This program lets the user enter a file name.
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	ifstream inputFile;
	string filename;
	int number;

	//Get the file name from the user 
	cout << "Enter the filename: ";
	cin >> filename;

	//open the file 
	inputFile.open(filename);

	//If the file successfully opened, process it.
	if (inputFile)
	{
		//Read the numbers from the file
		//display them.
		while (inputFile >> number)
		{
			cout << number << endl;
		}

		//close the file 
		inputFile.close();
	}
	else
	{
		//Display an error message
		cout << "Error opening the file. \n";
	}
	return 0;
}
