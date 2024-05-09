//This program demonstrates the tellg function 
#include<iostream>
#include<fstream>
using namespace  std;

int main()
{
	long offset; // to hold the offset amount 
	long numBytes; //to hold the file size
	char ch;       //to hold a character 
	char again;    //to hold y or n 

	//open the file for input 
	fstream file("letters.txt", ios::in);

	//determine the number of bytes in the file 
	file.seekg(0L, ios::end);
	numBytes = file.tellg();
	cout << "The file has " << numBytes << " bytes.\n";

	//go back to the beginning of the file 
	file.seekg(0L, ios::beg);

	//let the user move around within the file 
	do
	{
		//display the current read position 
		cout << "Currently at position " << file.tellg() << endl;

		//get a byte number from the user 
		cout << "Enter an offset from the beginning of the file: ";
		cin >> offset;

		//move the read position to that byte, read the 
		//character there, and display it.
		if (offset >= numBytes)  //past the end of the file?
			cout << "cannot read past the end of the file.\n";
		else
		{
			file.seekg(offset, ios::beg);
			file.get(ch);
			cout << "Character read: " << ch << endl;
		}

		//does the user want to try this again?
		cout << "Do it again?";
		cin >> again;
	} while (again == 'Y' || again == 'y');
	//close the file 
	file.close();
	return 0;
}
