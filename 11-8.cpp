//This program demonstrates a function that uses a 
//pointer to a structure variable as a parameter
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct Student
{
	string name;       //students name
	int idNum;         //student Id number 
	int creditHours;   //credit hours enrolled 
	double gpa;        //current GPA

};

void getData(Student*); //function prototype

int main()
{
	Student freshman;

	//get the student data 
	cout << "Enter the following student data: \n";
	getData(&freshman);    //pass the address of freshman 
	cout << "\nHere is the student data you entered:\n";

	//Now display the data stored in freshman
	cout << setprecision(2);
	cout << "Name: " << freshman.name << endl;
	cout << "ID Number: " << freshman.idNum << endl;
	cout << "Credit Hours: " << freshman.creditHours << endl;
	cout << "GPA: " << freshman.gpa << endl;
	return 0;
}

//**********************************************************************
//definition of function getData. Uses a pointer to a 
//Student structure variable. THe user enters student 
//information, which is stored in the varible.
//**************************************************************************

void getData(Student* s)
{
	//get the student name
	cout << "Student name: ";
	getline(cin, s->name);

	//get the student ID number
	cout << "Student ID number: ";
	cin >> s->idNum;

	//get the credit hours enrolled 
	cout << "Credit hours enrolled: ";
	cin >> s->creditHours;

	//get the GPA
	cout << "Current GPA: ";
	cin >> s->gpa;
}