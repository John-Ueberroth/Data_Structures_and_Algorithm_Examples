//This program demonstrates a base class and a derived class
#include<iostream>
#include<iomanip>
#include"FinalExam.h"
using namespace std;

int main()
{
	int questions;    //Number of questions on exams
	int missed;       //Number of questions missed by students 

	//get the number of questions on the final exam 
	cout << "How many questions are on the final exam?";
	cin >> questions;

	//get the number of questions the student misssed
	cout << "How many questions did the student miss?";
	cin >> missed;

	//define a FinalExam object and initialize it with 
	//the values entered
	FinalExam test(questions, missed);

	//display the test results 
	cout << setprecision(2);
	cout << "\nEach question counts " << test.getPointsEach()
		<< " points.\n";
	cout << "The exam score is " << test.getScore() << endl;
	cout << "The exam grade is " << test.getLetterGrade() << endl;

	return 0;
}