//This program uses an fstream object to write data to a file 
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream dataFile;

	cout << "Opening file...\n";
	dataFile.open("demofile.txt", ios::out);    //open for output
	cout << "Now writing data to the file.\n";
	dataFile << "Jones\n";                      //write line 1
	dataFile << "Smith\n";                      //write line 2
	dataFile << "Willis\n";                     //write line 3
	dataFile << "Davis\n";                      //write line 4
	dataFile.close();                           //close the file 
	cout << "Done.\n";                    
	return 0;
}