//This program writes data to a file, closes the file 
//then reopens the file and appends more data 
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream dataFile;

	cout << "Opening file...\n";
	//open the file in output mode
	dataFile.open("demofile.txt", ios::out);
	cout << "Now writing dataa to the file.\n";
	dataFile << "Jones\n";                   //write line 1
	dataFile << "Smith\n";                   //write line 2
	cout << "Now closing the file.\n";
	dataFile.close();                        //close the file 

	cout << "Opening the file again..\n";
	//open the file in append mode.
	dataFile.open("demofile.txt", ios::out | ios::app);
	cout << "writitng more data to the file.\n";
	dataFile << "Willis\n";                       //write line 3
	dataFile << "Davis\n";                        //write line 4
	cout << "Now closing the file.\n";
	dataFile.close();                             //close the file 
	cout << "Done.\n";
	return 0;
}