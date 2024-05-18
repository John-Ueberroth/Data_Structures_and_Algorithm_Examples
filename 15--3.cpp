//This program demonstrates a base class with a 
//protected member 
#include<iostream>
#include<iomanip>
#include"FinalExamV2.h"
using namespace std;

int main()
{
	int questions; //Number of questions on the exam
	int missed;    //number of questions missed by the student

	//get the number of questions on the final exam
	cout << "How many questions are on the final exam? ";
	cin >> missed;

	//define a final exam object and initialize it with 
	//the values entered
	FinalExam test(questions, missed);

	//display the adjusted test results 
	cout << setprecision(2) << fixed;
	cout << "\nEach quesiton counts "
		<< test.getPointsEach() << " points.\n";
	cout << "The adjusted exam score is "
		<< test.getScore() << endl;
	cout << "The exam grade is "
		<< test.getLetterGrade() << endl;
	return 0;
}