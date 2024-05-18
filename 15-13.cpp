#include <iostream>
#include <iomanip>
#include "PassFailExam.h"
using namespace std;

//function prototype 
void displayGrade(const GradedActivity*);

int main()
{
	//create a GradedActivity object. The score is 88.
	GradedActivity test1(88.0);

	//create a PassFailExam object. There are 100 questions ,
	//the student missed 25 of them, and the minimum passing 
	//score is 70.
	PassFailExam test2(100, 25, 70.0);

	//display the grade data for both objects.
	cout << "Test 1:\n";
	displayGrade(&test1);     //address of the graded activity object
	cout << "\nTest 2: \n";
	displayGrade(&test2);     //address of the PassFailExam object
	return 0;
}

//************************************************************************
//The displayGrade function displays a GradedActivity object's 
//numeric score and letter grade. This version of the function 
//uses a GradedActivity pointer as its parameter
//************************************************************************
void displayGrade(const GradedActivity* activity)
{
	cout << setprecision(1) << fixed;
	cout << "the activity's numeric score is "
		<< activity -> getScore() << endl;
	cout << "the activity's letter grade is "
		<< activity->getLetterGrade() << endl;
}