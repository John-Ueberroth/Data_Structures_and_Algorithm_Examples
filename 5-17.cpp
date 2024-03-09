//This program writes user input to a file 
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream outputFile;
	int number1, number2, number3;

	//open an output file
	outputFile.open("numbers.txt");

	//get three numbers from the user
	cout << "Enter a number: ";
	cin >> number1;
	cout << "Enter another number: ";
	cin >> number2;
	cout << "One more time. Enter a number: ";
	cin >> number3;

	//write the numbers to the file
	outputFile << number1 << endl;
	outputFile << number2 << endl;
	outputFile << number3 << endl;
	cout << "The numbers were saved to a file.\n";

	//close the file 
	outputFile.close();
	cout << "Done.\n";
	return 0;
}
