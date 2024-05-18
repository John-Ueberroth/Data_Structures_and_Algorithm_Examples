#include<iostream>
#include<iomanip>
#include"PassFailExam.h"
using namespace std;

//function prototype 
void displayGrade(const GradedActivity&);

int main()
{
	//create a gradedActivity object 
	GradedActivity test1(88.0);

	//create a PassFailExam object. There are 100 questions 
	//The student missed 25 of them, and the minimum passing 
	//score is 70.
	PassFailExam test2(100, 25, 70.0);

	//display the grade data for both objects
	cout << "Test 1: \n";
	displayGrade(test1);           //gradedActivity object
	cout << "\nTest 2:\n";
	displayGrade(test2);           //PassFailExam object
	return 0;
}

//************************************************************************
//The displayGrade function displays a GradedActivity object's 
//numeric score and letter grade.
//*************************************************************************

void displayGrade(const GradedActivity& activity)
{
	cout << setprecision(1) << fixed;
	cout << "The activity's numeric score is "
		<< activity.getScore() << endl;
	cout << "The activity's letter grade is "
		<< activity.getLetterGrade() << endl;
}