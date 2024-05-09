//This program demonstrates the return value of the stream
//object error testing memebr function 
#include<iostream>
#include<fstream>
using namespace std;

//function prototype 
void showState(fstream&);

int main()
{
	int num = 10;

	//open the fule for output.
	fstream testFile("stuff.dat", ios::out);
	if (testFile.fail())
	{
		cout << "Error: cannot open the file.\n";
		return 0;
	}

	//Write a value to the file 
	cout << "Writing the value " << num << " to the file.\n";
	testFile << num;

	//show the bit states
	showState(testFile);

	//close the file 
	testFile.close();

	//reopen the file for input 
	testFile.open("stuff.dat", ios::in);
	if (testFile.fail())
	{
		cout << "Error: cannot open the file.\n";
		return 0;

	}

	//read the only value from the file 
	cout << "Reading from the file.\n";
	testFile >> num;
	cout << "The value " << num << " was read.\n";

	//show the bit states.
	showState(testFile);

	//No more data in the file, but force in invalid read operation
	cout << "Forcing a bad read operation.\n";
	testFile >> num;

	//show the bit states
	showState(testFile);

	//close the file 
	testFile.close();
	return 0;
}

//************************************************************************
//definition of function showState. THis function uses 
//an fstream references as its parameter. The return values of 
//the eof(), fail(), bad(), and good() memeber functions are 
//displayed. The clear() function is called before the function returns.
//************************************************************************

void showState(fstream &file)
{
	cout << "File Status: \n";
	cout << " eof bit: " << file.eof() << endl;
	cout << " fail bit: " << file.fail() << endl;
	cout << " bad bit: " << file.fail() << endl;
	cout << " good bit: " << file.good() << endl;
	file.clear(); //clear any bad bits
}