//This program uses the write and read funciton 
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int SIZE = 10;
	fstream file;
	int numbers[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };

	//open the file for output in binary mode
	file.open("number.dat", ios::out | ios::binary);

	//write the contents of the array to the file 
	cout << "Writing the data to the file.\n";
	file.write(reinterpret_cast<char*>(numbers), sizeof(numbers));

	//close the file 
	file.close();

	//open the file for input in binary mode 
	file.open("numbers.dat", ios::in | ios::binary);

	//read the contents of the file into the array 
	cout << "Now reading the data back into memory.\n";
	file.read(reinterpret_cast<char*>(numbers), sizeof(numbers));

	//display the contents of the array
	for (int count = 0; count < SIZE; count++)
		cout << numbers[count] << " ";
	cout << endl;

	//close the file 
	file.close();
	return 0;
}