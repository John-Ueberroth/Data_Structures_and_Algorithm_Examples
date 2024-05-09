//This program demonstrates reading from one file and writing 
//to a second file.
#include<iostream>
#include<fstream>
#include<string>
#include<cctype> //needed for the toupper function 
using namespace std;

int main()
{
	string fileName;         //to hold the file name
	char ch;                 //to hold a character 
	ifstream inFile;         //input file 

	//open a file for output
	ofstream outFile("out.txt");

	//get the input file name
	cout << "Enter a file name: ";
	cin >> fileName;
	
	//open the file for input 
	inFile.open(fileName);

	//if the input file opened successfully, continue 
	if (inFile)
	{
		//read a char from file1
		inFile.get(ch);

		//while the alst read operation was 
		//successful, continue
		while (inFile)
		{
			//write uppercase char to file 2
			outFile.put(toupper(ch));

			//read another char from file 1.
			inFile.get(ch);
		}

		//close the two files
		inFile.close();
		outFile.close();
		cout << "File conversion done.\n";
	}
	else
		cout << "Cannot open " << fileName << endl;
	return 0;
}