//This program demonstrates the overloaded = operator 
#include<iostream>
#include"StudentTestScores.h"
using namespace std;

int main()
{
	//create a studentTestScore's object and 
	//assign test score 
	StudentTestScores student1("Kelly Thorton", 3);
	student1.setTestScore(100.0, 0);
	student1.setTestScore(95.0, 1);
	student1.setTestScore(80, 2);

	//create another StudentTestScore object
	//with default test scores.

	StudentTestScores student2("Jimmy Griffin", 5);

	//assign the student1 object to student2
	student2 = student1;

	//display both objects. they should 
	//contain the same data
	displayStudent(student1);
	displayStudent(student2);
	return 0;


}
//The displayStudent function accepts a 
//StudentTestScores object's data 
void displayStudent(StudentTestScores s)
{
	cout << "Name: " << s.getStudentName() << endl;
	cout << "Test Scores: ";
	for (int i = 0; i < s.getNumTestScores(); i++)
		cout << s.getTestScore(i) << " ";
	cout << endl;
}