//This program uses the write and read functions 
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int SIZE = 4;
	char data[SIZE] = { 'A','B','C','D' };
	fstream file;

	//open the file for output in binary mode 
	file.open("test.dat", ios::out | ios::binary);

	//Write the contents of the array to the file 
	cout << "Writing the characters to the file.\n";
	file.write(data, sizeof(data));

	//close the file 
	file.close();

	//open the file for input in binary mode
	file.open("test.dat", ios::in | ios::binary);

	//read the contents of the file into the array 
	cout << "Now reading the data back into memory.\n";
	file.read(data, sizeof(data));

	//display the contents of the array 
	for (int count = 0; count < SIZE; count++)
		cout << data[count] << " ";

	//close the file 
	file.close();
	return 0;
}