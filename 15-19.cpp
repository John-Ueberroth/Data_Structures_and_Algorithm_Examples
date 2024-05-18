//This program demonstrates the CsStudent class, which is 
//derived from teh abstract base class, student 
#include<iostream>
#include"CsStudent.h"
using namespace std;

int main()
{
	//create a CsStudent object for a student 
	CsStudent student("Jennifer Haynes", "167W98337", 2006);

	//Store values for Math, computer Science, and General
	//Ed hours 

	student.setMathHours(12);     //Student has taken 12 math hours 
	student.setCsHours(20);       //student has taken 20 cs hours 
	student.setGenEdHours(40);    //student has taken 40 gen ed hours 

	//Display the number of reaming hours 
	cout << "the student " << student.getName()
		<< " needs to take " << student.getRemainingHours()
		<< " more hours to graduate. \n";

	return 0;
}