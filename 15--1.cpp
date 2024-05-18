//This program demonstrates the GradedActivity class
#include <iostream>
#include "GeadedActivity.h"
using namespace std;

int main()
{
	double testScore;  //to hold a test score 

	//create a GradedActivity object for the test 
	GradedActivity test;

	//get the numeric test score from the user 
	cout << "Enter the numeric test score: ";
	cin >> testScore;

	//store the numeric score in the test object 
	test.setScore(testScore);

	//Display the lettr grade for the test 
	cout << "The grade for that test is "
		<< test.getLetterGrade() << endl;
	
	return 0;
}