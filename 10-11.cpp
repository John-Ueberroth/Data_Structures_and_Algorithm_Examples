//This program demonstrates how the getline function can 
//be used for all of program's input 
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main()
{
	const int INPUT_SIZE = 81; //size of input array 
	const int NAME_SIZE = 30;  //size of name array
	char input[INPUT_SIZE];    //to hold a line of input 
	char name[NAME_SIZE];      //to hold a name 
	int idNumber;              //to hold an ID number 
	int age;                   //to hold an age 
	double income;             //to hold income 

	//get the user's ID number
	cout << "What is your ID number? ";
	cin.getline(input, INPUT_SIZE);  //read as a string 
	idNumber = atoi(input);          //convert to int 
	
	//get the user's name. No conversion necessary
	cout << "What is your name? ";
	cin.getline(name, NAME_SIZE);

	//get the user's age
	cout << "How old are you? ";
	cin.getline(input, INPUT_SIZE); //read as a string 
	age = atoi(input);              //convert to double 

	//get the user's income 
	cout << "What is your annual income? ";
	cin.getline(input, INPUT_SIZE); //read as a string 
	income = atof(input);           //convert to double

	//show the resulting data
	cout << setprecision(2) << fixed << showpoint;
	cout << "Your name is " << name
		<< ", you are " << age
		<< " years old,\nand you make $"
		<< income << " per year.\n";

	return 0;
}