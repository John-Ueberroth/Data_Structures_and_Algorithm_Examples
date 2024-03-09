//This program reads numbers from a file
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream inFile;
	int value1, value2, value3, sum;

	//open the file 
	inFile.open("NumericData.txt");

	//Read the three numbers from the file 
	inFile >> value1;
	inFile >> value2;
	inFile >> value3;

	//close the file
	inFile.close();

	//calculate the sum of the numbers 
	sum = value1 + value2 + value3;

	//display the three numbers 
	cout << "Here are the numbers: \n"
		<< value1 << " " << value2
		<< " " << value3 << endl;

	//display the sum of the numbers 
	cout << "Thier sum is: " << sum << endl;
	return 0;
}
