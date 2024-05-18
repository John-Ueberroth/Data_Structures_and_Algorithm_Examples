#include<iostream>
#include<iomanip>
#include"PassFailActivity.h"
using namespace std;

//function prototype 
void displayGrade(const GradedActivity&);

int main()
{
	//create a PassFailActivity object. Minimum passing 
	//score is 70
	PassFailActivity test(70);

	//set the score to 72
	test.setScore(72);

	//display the object's grade data. The letter grade
	//should be 'P'. What will be displayed?
	displayGrade(test);
	return 0;
}

//************************************************************************
//The displayGrade function displays a GradedActivity object's 
//numeric score and letter grade.
//**************************************************************************

void displayGrade(const GradedActivity& activity)
{
	cout << setprecision(1) << fixed;
	cout << "The activity's numeric score is "
		<< activity.getScore() << endl;
	cout << "The activity's letter grade is "
		<< activity.getLetterGrade() << endl;
}
