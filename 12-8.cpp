//This program uses the getline function to read a line of 
//data from the file
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	string input;     //to hold file input 
	fstream nameFile; //file stream object 

	//open the file in input mode.
	nameFile.open("murphy.txt", ios::in);

	//if the file was successfully opened continue 
	if (nameFile)
	{
		//read an item from the file 
		getline(nameFile, input);

		//while the last read operation
		//was successful, continue 
		while (nameFile)
		{
			//display the last item read
			cout << input << endl;

			//read the next item 
			getline(nameFile, input);

		}

		//close the file 
		nameFile.close();
	}
	else
	{
		cout << "Error: cannot open file.\n";
	}
	return 0;
}