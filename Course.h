#ifndef COURSE
#define COURSE
#include<iostream>
#include<string>
#include"Instructor.h"
#include"TextBook.h"
using namespace std;

class Course
{
private:
	string courseName;         //course name
	Instructor instructor;     //instructor 
	TextBook textbook;         //Textbook

public:
	//constructor 
	Course(string course, string instrLastName, string instrFirstName
		, string instrOffice, string textTitle, string author
		, string publisher)
	{
		//assign the course name 
		courseName = course;

		//assign the instructor 
		instructor.set(instrLastName, instrFirstName, instrOffice);

		//assign the textbook 
		textbook.set(textTitle, author, publisher);
	}
	//print function 
	void print() const
	{
		cout << "Course name: " << courseName << endl << endl;
		cout << "Instructor Information: \n";
		instructor.print();
		cout << "\nTextbook Information:\n";
		textbook.print();
		cout << endl;
	}
};
#endif
