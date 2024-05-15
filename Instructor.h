#ifndef INSTRUCTOR
#define INSTRUCTOR_H
#include<iostream>
#include<string>
using namespace std;

//Instructor class 
class Instructor
{
private:
	string lastName;  //last name
	string firstName; //First name 
	string officeNumber; //office number 
public:
	//The default constructor stores empty strings 
	//in the string object
	Instructor()
	{
		set(" ", " ", " ");

	}
	//constructor 
	Instructor(string lname, string fname, string office)
	{
		set(lname, fname, office);

	}
	//set function 
	void set(string lname, string fname, string office)
	{
		lastName = lname;
		firstName = fname;
		officeNumber = office;

	}
	//print function 
	void print() const
	{
		cout << "Last Name: " << lastName << endl;
		cout << "First Name: " << firstName << endl;
		cout << "Office number: " << officeNumber << endl;
	}
};
#endif
