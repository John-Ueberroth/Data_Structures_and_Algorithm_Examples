//This file demonstrates the getline function with 
//a specified delimiter
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	string input; //to hold file input 

	//open the file for input 
	fstream dataFile("name2.txt", ios::in);

	//if the file was successfully opened, continue
	if (dataFile)
	{
		//read an item using $ as a delimiter
		getline(dataFile, input, '$');

		//while the last read operation 
		//was successful continue 
		while (dataFile)
		{
			//display the last item read.
			cout << input << endl;

			//read an item using $ as a delimiter 
			getline(dataFile, input, '$');
		}

		//close the file 
		dataFile.close();
	}
	else
	{
		cout << "Error: cannot open file.\n";


	}
	return 0;
}