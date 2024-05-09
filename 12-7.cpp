//This program demonstrates how the >> operator should not 
//be used to read data that contain whitespace characters
//from a file.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	string input;  //to hold file input
	fstream nameFile; //file stream object

	//open the file in input mode
	nameFile.open("murphy.txt", ios::in);

	//if the file was successfully opened continue 
	if (nameFile)
	{
		//read the file contents
		while (nameFile >> input)
		{
			cout << input;
		}
		//close the file 
		nameFile.close();
	}
	else
	{
		cout << "Error: cannot open file. \n";
	}
	return 0;
}