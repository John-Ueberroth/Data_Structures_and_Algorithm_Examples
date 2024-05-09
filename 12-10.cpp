//This program asks the user for a file name. The file is 
//opened and its contents are displayed on the screen.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	string fileName;     //to hold the file name
	char ch;             //to hold a character 
	fstream file;        //file stream object 

	//get the file name
	cout << "Enter a file name: ";
	cin >> fileName;

	//open the file 
	file.open(fileName, ios::in);

	//If the file was successfully opened, continue 
	if (file)
	{
		//get a character from the file 
		file.get(ch);

		//while the last read operation was 
		//successful, continue.
		while (file)
		{
			//display the last character read.
			cout << ch;
			//read the next character 
			file.get(ch);
		}

		//close the file
		file.close();
	}
	else
		cout << fileName << " could not be opened.\n";
	return 0;
}