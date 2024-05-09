//This program uses the setprecision and fixed
//manipulators to format file output 
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int main()
{
	fstream dataFile;
	double num = 17.816392;

	dataFile.open("numfile.txt", ios::out);    //open in output mode
	dataFile << fixed;                         //format for a fixed-point notation
	dataFile << num << endl;                   //write the number 

	dataFile << setprecision(4);               //format for 4 decimal places
	dataFile << num << endl;                   //write the number 
	
	dataFile << setprecision(3);               //format for 3 decimal places
	dataFile << num << endl;                   //write the number 

	dataFile << setprecision(2);               //format for 2 decimal places
	dataFile << num << endl;                   //write the number 

	dataFile << setprecision(1);               //format for 1 decimal places
	dataFile << num << endl;                   //write the number 

	cout << "Done.\n";
	dataFile.close();                          //close the file 
	return 0;
}